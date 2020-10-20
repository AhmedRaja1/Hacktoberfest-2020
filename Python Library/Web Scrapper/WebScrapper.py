import requests
from bs4 import BeautifulSoup
import pandas as pd

page = requests.get(
    'https://forecast.weather.gov/MapClick.php?lat=34.09969000000007&lon=-118.33512999999999#.Xy56PSgzbDc')
soup = BeautifulSoup(page.content, 'html.parser')
# Find all the tags about a
# print(soup.find_all('a'))
# print(soup)
# To find the div class
week = soup.find(id='seven-day-forecast-body')
# print(week)
# Items is a list
items = week.find_all(class_='tombstone-container')

# shorthand method for using for loop
period_names = [item.find(class_='period-name').get_text() for item in items]
short_description = [item.find(class_='short-desc').get_text()
                     for item in items]
temperature = [item.find(class_='temp').get_text() for item in items]

print(period_names)
print(short_description)
print(temperature)

weather_stuff = pd.DataFrame(
    {
        'period': period_names,
        'short_descriptions': short_description,
        'temperature': temperature,
    }
)
print(weather_stuff)
weather_stuff.to_csv('weather_data.csv')
print('CSV Created')
print(weather_stuff.head())
