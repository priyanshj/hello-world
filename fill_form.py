from selenium import webdriver 
from selenium.webdriver.common.keys import Keys 
from selenium.webdriver.support.ui import Select

driver = webdriver.Chrome()

driver.get("https://172.22.2.6/connect/PortalMain")

element1 = driver.find_element_by_id("LoginUserPassword_auth_username")
element1.send_keys("your roll no") 

element2 = driver.find_element_by_id("LoginUserPassword_auth_password")
element2.send_keys("password")

element3 = driver.find_element_by_id("UserCheck_Login_Button")
element3.click()