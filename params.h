//wifi network
char wifi_ssid[] = "";
//wifi password
char wifi_pass[] = "";
//timezone
char timezone[5] = "2";
//use 24h time format
char military[3] = "Y";     // 24 hour mode? Y/N
//use metric data
char u_metric[3] = "Y";     // use metric for units? Y/N
//date format
char date_fmt[7] = "D.M.Y"; // date format: D.M.Y or M.D.Y or M.D or D.M or D/M/Y.. looking for trouble
//open weather map api key 
String apiKey   = ""; //e.g a hex string like "abcdef0123456789abcdef0123456789"
//the city you want the weather for 
String location = "Frankfurt,DE"; //e.g. "Paris,FR"
