FROM ubuntu:22.04

RUN apt update && apt upgrade -y

RUN apt install git curl make gcc whitedune bubblewrap unzip sudo bzip2 -y

RUN bash -c "yes \"\" | sh <(curl -fsSL https://opam.ocaml.org/install.sh)"

RUN useradd -m -s /bin/bash opamuser && \
    echo "opamuser ALL=(ALL) NOPASSWD:ALL" >> /etc/sudoers

USER opamuser
WORKDIR /home/opamuser

ENV OPAMYES=1

RUN opam init --disable-sandboxing --shell-setup -y && \
    opam switch create 4.13.1 && \
    eval $(opam env --switch=4.13.1) && \
    eval `opam config env` && \
    opam install menhir z3 --update-invariant --confirm-level=unsafe-yes -y && \
    git clone https://github.com/hipsleek/Heifer.git && \
    cd Heifer && \
    opam install . --deps-only --update-invariant --confirm-level=unsafe-yes -y && \
    eval $(opam env) && \
    cd .. && \
    git clone https://github.com/songyahui/Timed_Verification.git && \
    cd Timed_Verification/code && \
    dune build

RUN echo 'cd Heifer && eval $(opam env) && cd /home/opamuser/Timed_Verification/code && dune build' >> ~/.bashrc

