# Biquad-Filter
Implementation of a variation of a biquadratic filter for infinite input

The filter produces an output sequence of the form:
yk = G*(xk + A*(xk−1) + B*(xk−2)) − C(yk−1) − D(yk−2)

The program takes in command line arguments: G A B C D
Takes in input continously until forced to stop.
