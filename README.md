# Introduction

`pyhash` is a python non-cryptographic hash library. Our (mycafe) version contains cityhash algorithm only.
The package was built to avoid issues with setuptools > 57.0.0 because of dropped support of python 2to3.
For the original documentation refer to [https://github.com/flier/pyfasthash/](https://github.com/flier/pyfasthash/)

# Build the package

First clone the repo. It contains submodules

```bash
$ git clone https://github.com/dezepchik/pyfasthash.git --recurse-submodules
```

Then just as with usual python package. Go to the project root dir and

```bash
$ python setup.py sdist bdist_wheel
```

And the resulting artifact (wheel, egg, sdist) is in dist/ dir

# Publishing to our pypi

For publishing to our pypi and installing from it you need to update .pypirc and pip.conf files.
Refer to these docs for the info https://cloud.google.com/artifact-registry/docs/python/quickstart

Then the package is uploaded with twine

# Algorithms

Only CityHash left in this distribution

Original code here [https://github.com/google/cityhash](https://github.com/google/cityhash)
