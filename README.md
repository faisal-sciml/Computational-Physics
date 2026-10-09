# Computational Physics & Scientific Computing

Welcome to my Computational Physics repository! This repository contains a collection of numerical methods, physical simulations, and computational physics algorithms implemented in **C++** and visualized using **gnuplot**.

This project serves as a practical foundation for my studies in **Computational Physics** and my broader interest in **Scientific Machine Learning (SciML)**.

---

## 📌 Features & Implemented Algorithms

### 1. Root Finding Algorithms
* **Bisection Method (`bisection.cpp`)**: Implementation of the bisection method to find real roots of non-linear transcendental equations (e.g., $f(x) = x - \cos(x)$ ) with specified precision.

### 2. Quantum Mechanics & Wavefunctions
* **Quantum Harmonic Oscillator (`harmonic_oscillator.cpp`)**: Calculation and data generation for Quantum Harmonic Oscillator wavefunctions $\psi_n(x)$ using Hermite Polynomials for $n = 0, 1, 2, 3$.

---

## 📊 Visualizations

Below is the plotted graph of the **Quantum Harmonic Oscillator Wavefunctions** generated using C++ data and rendered with `gnuplot`:

![Quantum Harmonic Oscillator](wavefunction_plot.png)

---

## 🛠️ Prerequisites & Setup

To run these codes on an **Ubuntu / Linux** environment, you will need `g++` compiler and `gnuplot` installed.

### Installation Command:
```bash
sudo apt update
sudo apt install build-essential gnuplot -y
```

---

## 🚀 How to Run and Plot the Projects

### Running C++ Programs:

1. Open your terminal in the repository directory.
2. Compile the desired code:
   ```bash
   g++ bisection.cpp -o bisection
   ```
3. Run the executable:
    ```bash
   ./bisection
    ```
### Plotting with gnuplot:

1. Launch gnuplot in the terminal:
   ```bash
   gnuplot
   ```
2. Plot the generated data file manually or export to PNG:
   ```bash
   set title "Quantum Harmonic Oscillator Wavefunctions"
   set xlabel "Position (x)"
   set ylabel "Wavefunction psi_n(x)"
   plot "psi1.dat" u 1:2 w l title "n=0", "psi1.dat" u 1:3 w l title "n=1", "psi1.dat" u 1:4 w l title "n=2", "psi1.dat" u 1:5 w l title "n=3"
   ```
---

## 🎯 Future Goals

* Implement **Runge-Kutta (RK4)** methods for solving ODEs.
* Solve Partial Differential Equations (PDEs) like Heat and Wave equations.
* Explore **Physics-Informed Neural Networks (PINNs)** for Scientific Machine Learning (SciML).

---

## 👤 Author

**MD. Faisal**

* Aspiring Researcher in Scientific Machine Learning & Computational Physics.
* **GitHub**: [@faisal-sciml](https://github.com/faisal-sciml)
