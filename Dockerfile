FROM ruby:latest

RUN apt update && apt install -y cmake

WORKDIR /usr/src/app

COPY . .


RUN bundle install
RUN rake

RUN rake build
RUN rake install
