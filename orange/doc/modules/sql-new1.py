# Description: Reads data from a database
# Category:    file formats
# Classes:     orngSQL.SQLReader
# Referenced:  orngSQL.htm

import orange, orngSQL

r = orngSQL.SQLReader('mysql://polz:r2d2c3po@localhost/polz')
r.execute("SELECT * FROM bus WHERE line='10';")
data = r.data()
for x in data:
    print x

print
for a in data.domain.attributes:
    print a
