# Purpose

This is one of my first attempts at writing a pwn challenge. More
variants may be added in the future, but for now it's just the one.

SPOILER WARNING: the source code is commented with descriptions and
hints that reveal the intended solution.

## Disclaimer

This software is intended as practice for cybersecurity capture-the-flag
challenges. It contains one or more intentional vulnerabilities, and comes
with ABSOLUTELY NO WARRANTY WHATSOEVER.

## Background

This example challenge is not terribly different from many other
beginner pwn challenges, but it was written from scratch on a whim.
While this isn't directly taken or based upon one specific challenge
as far as I'm aware, it's not the most original work. Credit for
inspiration and the knowledge that let me write this goes to all the
other challenge authors out there whose pwn challenges I've attempted
and sometimes even managed to solve!

CTFs that deserve some credit for leading me down this path:

- OregonCTF challenges
- OSUSec's DamCTF 2020 (Spring and Fall)
- NCL
- CSI CTF 2020
- UTCTF 2020

## Learning Experiments

The `Makefile` uses several compiler options to disable security features
that are standard in modern C compilers. For fun and education, try
removing them or adding `-fomit-frame-pointer` and observing how that
changes the resulting binary.

# Prompt

A starter pwn challenge masquerading as a program that sets a
password on first use. Can you get it to accept your password?