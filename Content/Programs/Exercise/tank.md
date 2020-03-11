![Tank position](https://github.com/gne-ldh/PPS/raw/master/Content/Notes/Files/Images/Tank.jpg)

On getting very specific intelligence input about militant training camp across the border, Indian army decided to destroy it with the help of bombing it using military tank. The camp is of the size 20 m x 20 m, and its centroid  is 20.278 km away from International border in the Pakistan territory. The tank selected can fire a bomb which can destroy an area within a radius of 25 m. Following variation in setting of tank can be done:

1. Angle (C) of barrel with respect to horizontal: 25 to 60 degrees, with increment of 2 degrees
1. Height (H) of barrel top (A) from ground: 2 to 4 m, with increment of 0.25m
1. Distance (D) of barrel top (A) from International border: 1 to 3 km, with increment of 0.1km
1. Velocity of bomb on leaving tip (A) of barrel: 1500 to 2000 km/hour, along barrel direction.

Find all possible values of above 4 parameters (with the help of C program), which enable drop of bomb within a radius of 15 m militant camp, measure from the centroid. If no such setting is possible, then out of program should be:

```c
No solution possible. Please change tank.
```

The air resistance is negligible and earth's curvature can also be neglected in this case.
