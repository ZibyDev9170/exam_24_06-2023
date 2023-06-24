FROM ubuntu

LABEL author="Yashin Nikita 221-3210"

RUN apt-get update && apt-get install -y gcc

RUN mkdir -p /MyProj_221_3210_Yashin

COPY . /MyProj_221_3210_Yashin

WORKDIR /MyProj_221_3210_Yashin

RUN gcc -o my_Program main.cpp

CMD ["./my_Program"]
