FROM yahuuuuui/aplas22ae:latest


RUN echo 'cd /home/AlgebraicEffect && eval $(opam env) && make && cd /home/Timed_Verification/code' >> ~/.bashrc

RUN git clone https://github.com/songyahui/Timed_Verification.git /home/Timed_Verification

WORKDIR /home/Timed_Verification/code
