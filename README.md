# Trading System
Quant SC's implementation of a high frequency trading system in c++. 

# Resources: 

## Quantlib: A C++ Quantitative Finance Library 
[Github](https://github.com/lballabio/QuantLib) & [Website](http://quantlib.org/)

[IKBR API](https://interactivebrokers.github.io/tws-api/)

# Structure

## Book Builder 
- Reconstruct the order book by taking in information from the exchanges. 

## Controller 
- UI/CLI to update the strategy parameters or make orders based upon human input. 

## Examples 
- Will be used to store examples of using the system, including a basic strategy class, a basic signal class, and a basic risk class. 

## Gateways
- Input Gateway: Gets prices from exchanges in their format and formats for the system (e.g. json -> c++ vector)
- Out Gateway: Sends orders to exchanges in their format (vector -> json)
- Efficient CRUD operations for storing Data in a strategy-usable way 
- For the time being, will be used to get market data from IKBR & turn it into the stock class. Additionally, begin 

## Instruments 
Basic classes for each asset type. Should include an efficient implementation that keeps all relevant variables as well as efficient I/O methods. 

## Order Manager
- Tracks the order life cycle (creation, execution, update, cancelation, rejection) 
- If the order is malformed or invalid, it is caught by the order manager to save on time 
- Includes risk management & position sizing 
- Keeps track of all positions and avoids overexposure 

## Pricing
Intrinsic value pricing formulas for equities along with random walk pricing strategies. Also include common options pricing methods. 

## Utilities
- Logging System:  Gathers logs from all components for debugging and reports 
- Visualizations: Display trading visualizations such as positions, trades, overall P/L, etc 
- Backtesting system: Allow for tests to be run on historical data and include performance metrics 

## Strategy 
- Signal Component saying we *should* trade (not a guarantee, as the offer may no longer exist)
- Signals are generated from the strategies implemented on the system (momentum, etc)
- Execution Component that handles market response and makes trades

## Tools
- Includes tools for performance evaluation of the system, along with static analysis and best practice checks 

# Loose Initial Timeline 
1. Implement the basic instrument classes
2. Connect to the interactive brokers api
3. Begin gathering the historical data into the historical data folder. 
    - Dont store in the repo, just have a script that pushes the data into google drive for storage in the meantime 
4. Implement Common Pricing Strategies / Signals  
5. Implement a basic strategy such as momentum
6. Build a backtesting system using the baseline strategy  
7. Implement a basic risk management system (diversification & hedging)
8. Implement a portfolio management strategy that allows for multiple trading strategies to run at once
9. Begin working on a simulated exchange endpoint 
10. Model the simulated exchange as a multi-agent system 