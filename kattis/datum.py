from datetime import datetime
import calendar

s = input()
day, month = s.split()

d = datetime(2009, int(month), int(day))
print(calendar.day_name[d.weekday()])
