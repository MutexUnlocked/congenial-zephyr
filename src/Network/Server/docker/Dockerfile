# To build use:
# docker build -t dems .

# docker network create --driver bridge --ipv6 --subnet 2a02:6b8:b010:9020:1::/80 ipv6_dems
# docker create --name dems0 --network ipv6_dems --ip ipv4address  -t -i dems
# and create other containers

#$ docker start -a -i 6d8af538ec5

# docker inspect <container name or container id>



FROM ubuntu:16.04
ENV OS=ubuntu1604

LABEL description="A linux C++ build environment."

RUN apt-get update && apt-get install -y \
  gcc \
  clang \
  cmake \
  libgtest-dev \
  libgoogle-glog-dev \
  libboost-all-dev \
  g++ \
  vim \
  automake \
  autoconf \
  autoconf-archive \
  libtool \
  libboost-all-dev \
  libevent-dev \
  libdouble-conversion-dev \
  libgoogle-glog-dev \
  libjsonrpccpp-dev \
  iputils-ping \
  net-tools \
  netcat \
  libmicrohttpd-dev \
  libcurl4-gnutls-dev \
  libjsonrpccpp-tools \
  libgflags-dev \
  liblz4-dev \
  liblzma-dev \
  libsnappy-dev \
  make \
  wget \
  git \
  zlib1g-dev \
  binutils-dev \
  libjemalloc-dev \
  libssl-dev \
  libiberty-dev

RUN mkdir /app
RUN git clone https://github.com/DokuEnterprise/congenial-zephyr /app/congenial-zephyr
RUN cd /app/congenial-zephyr/src
RUN cp /app/congenial-zephyr/src/Network/Server/docker/deps.sh /app
RUN chmod a+x /app/deps.sh
RUN cd /app && ./deps.sh
RUN cp /app/congenial-zephyr/src/Network/Server/docker/zephyr.sh /app
RUN chmod a+x /app/zephyr.sh
RUN cd /app && ./zephyr.sh
RUN export LD_LIBRARY_PATH=/usr/local/lib
