import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/diogo/MIR_Project_2024/glassy_challenge_ws/install/glassy_challenge'
