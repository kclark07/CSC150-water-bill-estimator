# Water Bill Estimator

A C++ command-line application that estimates a future water utility bill based on meter readings, water consumption, sewer charges, and late payment fees.

This project was my first programming assignment and demonstrates fundamental programming concepts including variables, user input, mathematical calculations, constants, and formatted output.

## Features

* Calculates water consumption from meter readings
* Estimates water charges using configurable rates
* Calculates sewer consumption and sewer fees
* Computes late payment penalties
* Generates an estimated total utility bill
* Displays formatted billing information

## Technologies

* C++
* Mathematical Calculations
* User Input Processing
* Console Output Formatting

## Skills Demonstrated

* Variables and Data Types
* Constants
* Arithmetic Operations
* User Input Validation
* Output Formatting
* Program Flow
* Basic Business Logic

## Formula Overview

### Water Consumption

```text
Water Consumption = Current Meter Reading - Previous Meter Reading
```

### Water Charges

```text
Water Charges = Water Consumption × Water Rate
```

### Sewer Charges

```text
Sewer Consumption = Water Consumption × 1.20
Sewer Charges = Sewer Consumption × Sewer Rate
```

### Late Fee

```text
Late Fee = Previous Bill × (1.01^Days Late - 1)
```

## Building and Running

### Prerequisites

* Visual Studio Code
* Microsoft C/C++ Extension
* GCC/G++ Compiler (MinGW-w64 on Windows)

Verify installation:

```bash
g++ --version
```

### Compile

```bash
g++ prog1.cpp -o water_bill_estimator
```

### Run

```bash
.\water_bill_estimator
```

## Example Usage

```text
Welcome to Water Bill Estimation Tool!

Please enter your name: Kaeli
Please enter value of previous water bill: 85.50
Please enter number of days on late payment: 5
Please enter previous meter reading: 1000
Please enter current meter reading: 1050

--------------------------------------------------

Your next water bill was estimated as follows:

Water consumption: 50
Water subtotal: $250.00

Sewer consumption: 60
Sewer subtotal: $180.00

Late fee: $4.36

--------------------------------------------------

TOTAL: $434.36
```

## What I Learned

This project introduced many of the core concepts used throughout the rest of my Computer Science coursework:

* Reading user input
* Storing and manipulating data
* Performing calculations
* Using constants
* Formatting output
* Building complete command-line applications

```
```
