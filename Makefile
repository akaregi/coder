.PHONY: build
build:
	docker-compose build

.PHONY: clean
clean:
	docker-compose down

.PHONY: start
start:
	docker-compose up -d
	docker exec -it compiler /bin/bash

.PHONY: stop
stop:
	docker-compose stop

.PHONY: exec
exec:
	docker exec -it compiler /bin/bash