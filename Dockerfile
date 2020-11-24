FROM alpine
LABEL maintainer="Brian H. Ward" \
      description="gcc clang cmake ninja" \
      version="0.2.0"
RUN apk add --no-cache alpine-sdk clang cmake ninja
