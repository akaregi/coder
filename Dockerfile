FROM ubuntu:focal

ENV DEBIAN_FRONTEND noninteractive
RUN sed -i.bak -e "s%http://[^ ]\+%http://ftp.jaist.ac.jp/pub/Linux/ubuntu/%g" /etc/apt/sources.list && \
    apt update && \
    apt install -y --no-install-recommends \
        ca-certificates curl \
        make cmake meson \
        gcc g++ clang && \
    apt clean && \
    rm -rf /var/lib/apt/lists/*

ENV RUST_VERSION stable
RUN curl https://sh.rustup.rs -sSf | sh -s -- -y --default-toolchain ${RUST_VERSION}
ENV PATH $PATH:~/.cargo/bin