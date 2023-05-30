## Make Utility and Makefile

* The make utility is a software tool for managing and maintaining computer programs consisting many component files. 
* The make utility automatically determines which pieces of a large program need to be recompiled, and issues commands to recompile them.
* Make reads its instruction from Makefile
* Makefile sets a set of rules to determine which parts of a program need to be recompile, and issues command to recompile them.
* Makefile contains: dependency rules, macros and suffix(or implicit) rules. 
* By default, make uses */bin/sh* shell.

## Basic Makefile Structure
Dependency rules: a rule consists of three parts:
- one or more `targets`
- zero or more `dependencies`, and 
- zero or more `commands` in the form:

```sh
target: dependencies
	commands to make target
```
**Target**

A `target` can be the name of a file (an executable or object file) or the name of an action.

**Dependencies**

`Dependencies` are files that are used as input to create the `target`.

When run, the `make` command does the follwing:
- makes sure all the dependencies are up to date.
- Recreate target using the specified command if target is older than any dependency.

