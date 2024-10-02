## FLow Chart

### Problem:

Draw flow chart to find biggest among three given number

## Solution

You may find biggest among three numbers, by comparing systematically two numbers at a time, as shown in flowchart below:

[![mermaid embedded diagram to check greatest among three numbers](
https://mermaid.ink/img/pako:eNo9UL1ugzAQfpXTTY2UCDXkr6jKlK7tkC4Vx3CAG1CCjRxbagqsnfuMfZIaQ9i-f-muwUzlAiM8aa4LeD-QfHyIj4a1SWawWOxhGRMy_P38wtdzqoM9pJ7cPMk8_vaYMCG59J2wYXDBjmTY8_ZDXFtYeTFz4sqHBnUTB2_W1NYAB8lota-qhd1kZL0RTsa6Sced9bDj0xPzq9upnPblrbee-sNUncxIbgaB5O4OcI6V0BWXuXtGQxKA0BSiEoSRgznrMyHJzuXYGnW8yQwjo62Yo1b2VGD0yZerY7bO2YhDye6j1T0yiC95aZQek90_HeB4Xg)](https://mermaid-js.github.io/mermaid-live-editor/edit#pako:eNo9UL1ugzAQfpXTTY2UCDXkr6jKlK7tkC4Vx3CAG1CCjRxbagqsnfuMfZIaQ9i-f-muwUzlAiM8aa4LeD-QfHyIj4a1SWawWOxhGRMy_P38wtdzqoM9pJ7cPMk8_vaYMCG59J2wYXDBjmTY8_ZDXFtYeTFz4sqHBnUTB2_W1NYAB8lota-qhd1kZL0RTsa6Sced9bDj0xPzq9upnPblrbee-sNUncxIbgaB5O4OcI6V0BWXuXtGQxKA0BSiEoSRgznrMyHJzuXYGnW8yQwjo62Yo1b2VGD0yZerY7bO2YhDye6j1T0yiC95aZQek90_HeB4Xg)

## Markdown code

Markdown used at [MerMaid](https://mermaid-js.github.io/mermaid-live-editor/).

```
graph TD
1([Start]) --> 2["a ← x<br/> b ← y<br/>c ← z<br/>"]
2 --> 3{a > b}
3 -->|Yes| 4{a > c}
4 -->|No| 8[/Output c/]
4 --> |Yes| 6[/Output a/]
3 -->|No| 5{b > c}
5 --> |No| 6
5 --> |Yes| 7[/Output b/]
7 --> 9([Stop])
6 --> 9
8 --> 9
```
