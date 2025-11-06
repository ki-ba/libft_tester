# S.L.T.

## Sloppy Libft Tester

A quick-and-dirty tester for 42 school's project Libft.
I use it for quick evaluations; do not use it to test your libft before submitting, as it is really not that good.

### Features

- Tests all mandatory functions return values and basic behaviors.
- Tests some bonus functions (not all, and not very thoroughly).
- Tests for SIGSEGV when a NULL parameter is passed where applicable. To disable this feature, see the Usage section.

### Requirements

- A working libft project compiled as a static library (libft.a).
- A Unix-like environment with (G)CC and Make installed.

### Compatibility

Tested on primarly on **x86 systems** running **Linux**. It should work on macOS as well, as long as your compiler supports the required functions.

### Installation

Clone it in the same directory as your libft/ folder, compile it with `make`.

### Usage

Run it with `./run_tests`.
It will look for your libft in `../libft/libft.a`.
If your libft is located somewhere else, you can specify the path in the LIBDIR variable when running the tests, like so :

**Warning** : if you didn't do the bonus part, compilation will fail, as the tester tries to link all bonus functions.
You really should do the whole thing anyway.

```bash
 make LIBDIR=/path/to/libft_directory
```

to disable testing for SIGSEGV on NULL parameters, run :

```bash
 make IGNORE_SIGNALS=1
```

Thoses variables can be combined, and directly edited in the Makefile if you want.
Also, you might want to manually test some of the bonus functions. I did my best to cover them, but the tests are not exhaustive.

Made with [Unity](https://github.com/ThrowTheSwitch/Unity).

### License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

Unity is licensed under the MIT License - see the [Unity LICENSE](https://github.com/ThrowTheSwitch/Unity/blob/master/LICENSE.txt) file for details.

Unity Copyright (c) 2007-25 Mike Karlesky, Mark VanderVoord, & Greg Williams
