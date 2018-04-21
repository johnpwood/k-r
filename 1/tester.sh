#!/bin/bash

# Exercise 1-11

$1 >outfile <<EOF
count these
words!
EOF

wc >>outfile <<EOF
count these
words!
EOF
