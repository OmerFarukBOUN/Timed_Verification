This is the artifact for paper "Automated Verification for Real-Time Systems
via Implicit Clocks and an Extended Antimirov Algorithm"


# Automated Timed Temporal Verification

The correctness of real-time systems depends both on the correct functionalities and the realtime constraints. To go beyond the existing Timed Automata based techniques, we propose a novel solution that integrates a modular Hoare-style forward verifier with a term rewriting system (TRS) on Timed Effects (TimEffs). The main purposes are to increase the expressiveness, dynamically create clocks, and efficiently solve constraints on the clocks. We formally define a core language Ct, generalizing the real-time systems, modeled using mutable variables and timed behavioral patterns, such as delay, timeout, interrupt, deadline. Secondly, to capture real-time specifications, we introduce TimEffs, a new effects logic, that extends regular expressions with dependent values and arithmetic constraints. Thirdly, the forward verifier reasons tempo- ral behaviors – expressed in TimEffs – of target C^t programs. Lastly, we present a purely algebraic TRS, i.e., an extended Antimirov algorithm, to efficiently prove language inclusions between TimEffs. To demonstrate the feasibility of our proposals, we prototype the verification system; prove its soundness; report on case studies and experimental results.

# Docker

To run the verification system, you can use the provided Dockerfiles.
The one in the new folder uses the latest version of the AlgebraicEffects library, which is developed for this thesis.
The one in the old folder uses the previous version of the library, which is used in the paper.
Containers automatically set the environment for the verification system.

# Usage
To run the verification system, you can use the following command:

'''dune exec ./Forward.exe /path/to/your/file.c'''

## Example
'''dune exec ./Forward.exe src/validation/1_delay.c''' 

# Working Examples
(Some of them did not work properly but fixed in thsi version)
src/validation/*_delay.c
src/validation/*_deadline.c
src/validation/*_timeout.c
src/validation/31_if_else_mix.c
src/validation/32_if_else_mix.c
src/validation/36_par_mix.c
src/Experiment2/fischer.c // It succeds but it does not has the same logic as the Fischer’s algorithm
