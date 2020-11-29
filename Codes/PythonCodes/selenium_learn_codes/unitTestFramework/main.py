import unittest
from selenium import webdriver
import page

class PyhtonOrgSearch(unittest.TestCase):

    #this method is called everytime a test case is called
    def setUp(self):
        print("****setup****")
        self.driver = webdriver.Chrome("C:\Program Files (x86)\\chromedriver.exe")
        self.driver.get("http://www.python.org")

    #the keyword test means that as soon as the unnittest is called this method will run first
    # def test_example(self):
    #     print("this will run")
    #     assert True
    #     assert False
    #
    # def test_example_2(self):
    #     assert True

    # def not_a_test(self):
    #     print("this will not run")


    def test_search_python(self):
        mainPage = page.MainPage(self.driver)
        assert mainPage.is_title_matches()
        mainPage.search_text_element = "pycon"
        mainPage.click_go_button()
        search_results_page = page.SearchResultPage(self.driver)
        assert search_results_page.is_results_found()


    def tearDown(self):
        self.driver.close()


if __name__ == '__main__':
    unittest.main()