FROM ubuntu:latest
LABEL version="1.0"

COPY package.deb /
COPY install.sh /
RUN chmod +x /install.sh
CMD ["/install.sh"]