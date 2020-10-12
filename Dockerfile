FROM ubuntu:18.04

RUN apt-get update && apt-get install -y \
  git clang make curl libx11-dev


CMD [ "/bin/bash" ]
    