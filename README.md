# Trading System
Quant SC's implementation of a high frequency trading system in c++. 

# Resources: 

## Quantlib: A C++ Quantitative Finance Library 
[Github](https://github.com/lballabio/QuantLib) & [Website](http://quantlib.org/)

# Structure

## Book Builder 


## Common  
Implements the following classes:
- Stock
- Position
- Portfolio 

## Controller 
- UI/CLI to update the strategy parameters or make orders based upon human input. 

## Examples 
- Will be used to store examples of using the system 

## Gateways
- Input Gateway: Gets prices from exchanges in their format and formats for the system (e.g. json -> c++ vector)
- Out Gateway: Sends orders to exchanges in their format (vector -> json)
- Efficient CRUD operations for storing Data in a strategy-usable way 

## Order Manager
- Tracks the order life cycle (creation, execution, update, cancelation, rejection) 
- If the order is malformed or invalid, it is caught by the order manager to save on time 
- Includes risk management & position sizing 
- Keeps track of all positions and avoids overexposure 

## Services
- Logging System:  Gathers logs from all components for debugging and reports 
- Visualizations: Display trading visualizations such as positions, trades, overall P/L, etc 

## Strategy 
- Signal Component saying we *should* trade (not a guarantee, as the offer may no longer exist)
- Signals are generated from the strategies implemented on the system (momentum, etc)
- Execution Component that handles market response and makes trades

## Tools
- Includes tools for performance evaluation of the system, along with static analysis and best practice checks 

## Utilities 
- Backtesting system that to analyze the performance of strategies.
- Exchange Simulator to simulate sending orders to an exchange  
