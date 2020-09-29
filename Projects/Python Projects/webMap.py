import folium

fg = folium.FeatureGroup("Apna Map")
fg.add_child(folium.GeoJson(data=(open("coor-map.json", "r", encoding="utf-8-sig").read())))

fg.add_child(folium.Marker(location=[27.1751, 78.0421], popup="this is Taj Mahal"))

map = folium.Map(location=[21.1458, 79.0882], zoom_start=5)

map.add_child(fg)
map.save("test.html")