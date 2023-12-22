# Docker Images

**Build image** by `docker-compose build {$image_name}`<br>
**Run container** by `docker-compose up -d {$image_name}`


## Available Images (`$image_name`)

Check them out by `docker pull rapee9999/{$image_name}` or visit 
[hub.docker.com/u/rapee9999](https://hub.docker.com/u/rapee9999)

### debian-cdev
Build based on debian image and install C development packages via apt. Designed to be a development container providing g++, cmake and make etc. 

[To dockerfile](debian-cdev/dockerfile)

### opencv-cdev
Build based on debian-cdev image and install opencv via apt. Designed to be a development container providing opencv library on top of debian-cdev.

Test image by `docker-compose up opencv-cdev-test`

See example app at `/examples/opencv-cdev/make_n_run.sh`

[To dockerfile](opencv-cdev/dockerfile)

### tesseract-cdev
Build based on opencv-cdev image and install libtesseract-dev via apt together with english dataset. Designed to be a development container providing tesseract library on top of opencv-cdev.

Test image by `docker-compose up tesseract-cdev-test`

See example app at `/examples/tesseract-cdev/make_n_run.sh`

[To dockerfile](tesseract-cdev/dockerfile)

### libtorch-cdev
Build based on debian-cdev image and download libtorch in `/opt`. Designed to be a development container providing libtorch library on top of debian-cdev.

Test image by `docker-compose up libtorch-cdev-test`

See example app at `/examples/libtorch-cdev/make_n_run.sh`

[To dockerfile](libtorch-cdev/dockerfile)

### cv-cdev
Build based on tesseract-cdev and libtorch-cdev. Designed to be a development container providing opencv, libtesseract and libtorch on top of debian-cdev.

Test image by `docker-compose up cv-cdev-test`

See example app at the same locations as example apps in opencv-cdev and libtorch-cdev

[To dockerfile](cv-cdev/dockerfile)
