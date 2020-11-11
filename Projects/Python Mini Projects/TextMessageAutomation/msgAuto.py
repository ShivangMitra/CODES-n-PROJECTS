# fast2sms api

import requests

url = "https://www.fast2sms.com/dev/bulk"

querystring = {"authorization":"MjPdYtwh0SxGm14qAbXryoaWzgiZJQH2KCcB389lUvO6sRE5TL8TlaI1OQ6EvAtgDFhxKBiGqbXj4NZs","sender_id":"FSTSMS","message":"Tum chintu ho","language":"english","route":"p","numbers":"9140055115"}

headers = {
    'cache-control': "no-cache"
}

response = requests.request("GET", url, headers=headers, params=querystring)

print(response.text)