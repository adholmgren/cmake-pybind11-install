Cmake pybind example
==============

Modified from [scikit build example](https://github.com/pybind/scikit_build_example).

An example project built with [pybind11](https://github.com/pybind/pybind11) and custom setup.py script. Python 3.6+ (see older commits for older versions of Python).


Installation
------------

- clone this repository
- `pip install .`



License
-------

pybind11 is provided under a BSD-style license that can be found in the LICENSE
file. By using, distributing, or contributing to this project, you agree to the
terms and conditions of this license.

Test call
---------

```python
import scikit_build_example
scikit_build_example.add(1, 2)
```

