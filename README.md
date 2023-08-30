# Docker Images


## How to Build and Run Images
Build : `docker-compose build {$image_name}`<br>
Run : `docker-compose up -d {$image_name}`


## Available Images (`$image_name`)

### debian-cdev
Build based on debian image and install C development packages via apt

### opencv-cdev
Build based on debian-cdev image and install opencv library via apt
> **How to test** : docker-compose up opencv-cdev-test

### libtorch-cdev
Build based on debian-cdev image and install libtorch in /opt
> **How to test** : docker-compose up libtorch-cdev-test

### cv-cdev
Build based on opencv-cdev and libtorch-cdev
