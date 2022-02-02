import numpy as np

class Spliner:
    def __init__(self, data):
        self.data = data
    
    def run(self):
        if self.data.path[-1] != self.data.next_point:
            self.data.path.append(self.data.next_point)
            print(self.data.path)

# "Next point is {}"
# type(new_path)

# data member
# path = [1,2,3,4,5]
# next_point = 10.0