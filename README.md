# ANSYS CADE Project

* Softerware : ANSYS SCADE

Here are some project completed by the softerware anses cade. 

## Landing_gear_system

* Author : Yan CHEN & kai ZHANG


This system is made up of two parts. The first one is gear outgoing. The second one is gear retraction.

This project includes the simulation in both normal and abnormal modes.

<img src="README.assets/landing_set.png" alt="landing_set" style="zoom:50%;" />

<img src="README.assets/landing_sequence.png" alt="landing_sequence.png" style="zoom: 50%;" />

## Dataflow

* Author : Yan CHEN


1. implement a detector of rising and falling edges in a Boolean signal.

<img src="README.assets/rising_and_falling_edges.png" alt="rising_and_falling_edges.png" style="zoom:50%;" />

2. implement the third order linear moving average filter.

<img src="README.assets/linear_moving_average_filter.png" alt="linear_moving_average_filter,png" style="zoom: 33%;" />

3. define an operator that counts.

<img src="README.assets/comptor.png" alt="README.assets/comptor.png" style="zoom: 33%;" />

## Voter

* Author : Yan CHEN

<img src="README.assets/voter.png" alt="README.assets/voter.png" style="zoom: 25%;" />

The general specification of the vector to be implemented is as follows:

* if at time t the three inputs are equal then the output of the vector is the common value

* if at time t one input differs from the other two for the first time (i.e. the three inputs are considered valid until time t), then this input is considered invalid and is definitely eliminated. Only the other two entries will be considered for future times. At time t, the value returned by the voter is the common value of the two inputs.

* if one input has already been eliminated, and if at time t the last two inputs are different, then the sensor is considered invalid and the vector sets an error output to true.

## Pressure sensor

* Author : Yan CHEN

<img src="README.assets/pressure_sensor.png" alt="README.assets/pressure_sensor.png" style="zoom:50%;" />

We consider a model consisting of two operators. The first one allows to detect when a pressure value is greater than a threshold. The second one activates an alarm signal for a fixed duration when the pressure is detected as too high.