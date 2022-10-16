# HW4 DR16

Make any necessary changes. You are given a example for receiving controller signals using [DR16](https://www.robomaster.com/en-US/products/components/detail/1837), the actual controller we use in the competition. You will use the data received and decode them to the actual control signals, which you will be using in your internal competition.

You will focus on the file `/Core/Src/DR16.cpp` and `/Core/Inc/DR16.hpp`

In this project, you will finish the skeleton code and compile it using [Makefile](https://www.gnu.org/software/make/manual/make.html). You will learn more about Makefile later.

There is no correct answer (maybe). You are making decisions as long as they are logical and functional. If you think my code suck, you are more than welcome to write your own version.

The control data fram is consist of 18 bytes, as stated in the [DR16 User Manual](https://rm-static.djicdn.com/tem/17348/4.RoboMaster%20%E6%9C%BA%E5%99%A8%E4%BA%BA%E4%B8%93%E7%94%A8%E9%81%A5%E6%8E%A7%E5%99%A8%EF%BC%88%E6%8E%A5%E6%94%B6%E6%9C%BA%EF%BC%89%E7%94%A8%E6%88%B7%E6%89%8B%E5%86%8C.pdf).

The manual is in Chinese unfortunately. But I have translated the relavent part to English. You can always reference to the example code at the end of the manual.

| field       | Ch0                           | Ch1                           | Ch2                           | Ch3                           | S1                                  | S2                                  |
|-------------|-------------------------------|-------------------------------|-------------------------------|-------------------------------|-------------------------------------|-------------------------------------|
| shift(bit)  | 0                             | 11                            | 22                            | 33                            | 44                                  | 46                                  |
| length(bit) | 11                            | 11                            | 11                            | 11                            | 2                                   | 2                                   |
| sign bit    | no                            | no                            | no                            | no                            | no                                  | no                                  |
| range       | max 1684 mid 1024 min 364     | max 1684 mid 1024 min 364     | max 1684 mid 1024 min 364     | max 1684 mid 1024 min 364     | max 3 min 1                         | max 3 min 1                         |
| description | Unsigned Controller channel 0 | Unsigned Controller channel 1 | Unsigned Controller channel 2 | Unsigned Controller channel 3 | switch 1 value 1: up 2: down 3: mid | switch 1 value 1: up 2: down 3: mid |

Bonus (not counted):

The skeleton code is pretty basic. You can come up with more sophisticated logic to deal with the data under real-world situations. i.e. the connector disconnected unexpectly, the data goes out of range etc.

Hint: you may find something useful at the end of the user manual.

![image](https://user-images.githubusercontent.com/33616271/194757542-e7b8a8ba-61cc-442d-ad77-56759a6456d1.png)

![image](https://user-images.githubusercontent.com/33616271/194757519-6262df52-ce97-4a10-baea-8d3467d0664e.png)

