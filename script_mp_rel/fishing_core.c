#region Local Var
	var uLocal_0 = 7;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = -1;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	float fLocal_13 = 0f;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	struct<1719> Local_16 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1077936128, 1065353216, 4, 8, 50, 10, 200, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1053609165, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 500, 600, 800, 1500, 10, 1500, 1400, 1300, 1200, 1100, 200, 1048576000, 1065353216, 0 } ;
	var uLocal_1735 = 32;
	var uLocal_1736 = 0;
	var uLocal_1737 = 0;
	var uLocal_1738 = 0;
	var uLocal_1739 = 0;
	var uLocal_1740 = 0;
	var uLocal_1741 = 0;
	var uLocal_1742 = 0;
	var uLocal_1743 = 0;
	var uLocal_1744 = 0;
	var uLocal_1745 = 0;
	var uLocal_1746 = 0;
	var uLocal_1747 = 0;
	var uLocal_1748 = 0;
	var uLocal_1749 = 0;
	var uLocal_1750 = 0;
	var uLocal_1751 = 0;
	var uLocal_1752 = 0;
	var uLocal_1753 = 0;
	var uLocal_1754 = 0;
	var uLocal_1755 = 0;
	var uLocal_1756 = 0;
	var uLocal_1757 = 0;
	var uLocal_1758 = 0;
	var uLocal_1759 = 0;
	var uLocal_1760 = 0;
	var uLocal_1761 = 0;
	var uLocal_1762 = 0;
	var uLocal_1763 = 0;
	var uLocal_1764 = 0;
	var uLocal_1765 = 0;
	var uLocal_1766 = 0;
	var uLocal_1767 = 15;
	var uLocal_1768 = 0;
	var uLocal_1769 = 0;
	var uLocal_1770 = 0;
	var uLocal_1771 = 0;
	var uLocal_1772 = 0;
	var uLocal_1773 = 0;
	var uLocal_1774 = 0;
	var uLocal_1775 = 0;
	var uLocal_1776 = 0;
	var uLocal_1777 = 0;
	var uLocal_1778 = 0;
	var uLocal_1779 = 0;
	var uLocal_1780 = 0;
	var uLocal_1781 = 0;
	var uLocal_1782 = 0;
	var uLocal_1783 = 0;
	var uLocal_1784 = 0;
	var uLocal_1785 = 0;
	var uLocal_1786 = 0;
	var uLocal_1787 = 0;
	var uLocal_1788 = 0;
	var uLocal_1789 = 0;
	var uLocal_1790 = 0;
	var uLocal_1791 = 0;
	var uLocal_1792 = 0;
	var uLocal_1793 = 0;
	var uLocal_1794 = 0;
	var uLocal_1795 = 0;
	var uLocal_1796 = 0;
	var uLocal_1797 = 0;
	var uLocal_1798 = 0;
	var uLocal_1799 = 0;
	var uLocal_1800 = 0;
	var uLocal_1801 = 0;
	var uLocal_1802 = 0;
	var uLocal_1803 = 0;
	var uLocal_1804 = 0;
	var uLocal_1805 = 0;
	var uLocal_1806 = 0;
	var uLocal_1807 = 0;
	var uLocal_1808 = 0;
	var uLocal_1809 = 0;
	var uLocal_1810 = 0;
	var uLocal_1811 = 0;
	var uLocal_1812 = 0;
	var uLocal_1813 = 0;
	var uLocal_1814 = 15;
	var uLocal_1815 = 0;
	var uLocal_1816 = 0;
	var uLocal_1817 = 0;
	var uLocal_1818 = 0;
	var uLocal_1819 = 0;
	var uLocal_1820 = 0;
	var uLocal_1821 = 0;
	var uLocal_1822 = 0;
	var uLocal_1823 = 0;
	var uLocal_1824 = 0;
	var uLocal_1825 = 0;
	var uLocal_1826 = 0;
	var uLocal_1827 = 0;
	var uLocal_1828 = 0;
	var uLocal_1829 = 0;
	var uLocal_1830 = 0;
	var uLocal_1831 = 0;
	var uLocal_1832 = 0;
	var uLocal_1833 = 0;
	var uLocal_1834 = 0;
	var uLocal_1835 = 0;
	var uLocal_1836 = 0;
	var uLocal_1837 = 0;
	var uLocal_1838 = 0;
	var uLocal_1839 = 0;
	var uLocal_1840 = 0;
	var uLocal_1841 = 0;
	var uLocal_1842 = 0;
	var uLocal_1843 = 0;
	var uLocal_1844 = 0;
	var uLocal_1845 = 0;
	var uLocal_1846 = 0;
	var uLocal_1847 = 0;
	var uLocal_1848 = 0;
	var uLocal_1849 = 0;
	var uLocal_1850 = 0;
	var uLocal_1851 = 0;
	var uLocal_1852 = 0;
	var uLocal_1853 = 0;
	var uLocal_1854 = 0;
	var uLocal_1855 = 0;
	var uLocal_1856 = 0;
	var uLocal_1857 = 0;
	var uLocal_1858 = 0;
	var uLocal_1859 = 0;
	var uLocal_1860 = 0;
	var uLocal_1861 = 15;
	var uLocal_1862 = 0;
	var uLocal_1863 = 0;
	var uLocal_1864 = 0;
	var uLocal_1865 = 0;
	var uLocal_1866 = 0;
	var uLocal_1867 = 0;
	var uLocal_1868 = 0;
	var uLocal_1869 = 0;
	var uLocal_1870 = 0;
	var uLocal_1871 = 0;
	var uLocal_1872 = 0;
	var uLocal_1873 = 0;
	var uLocal_1874 = 0;
	var uLocal_1875 = 0;
	var uLocal_1876 = 0;
	var uLocal_1877 = 0;
	var uLocal_1878 = 0;
	var uLocal_1879 = 0;
	var uLocal_1880 = 0;
	var uLocal_1881 = 0;
	var uLocal_1882 = 0;
	var uLocal_1883 = 0;
	var uLocal_1884 = 0;
	var uLocal_1885 = 0;
	var uLocal_1886 = 0;
	var uLocal_1887 = 0;
	var uLocal_1888 = 0;
	var uLocal_1889 = 0;
	var uLocal_1890 = 0;
	var uLocal_1891 = 0;
	var uLocal_1892 = 0;
	var uLocal_1893 = 0;
	var uLocal_1894 = 0;
	var uLocal_1895 = 0;
	var uLocal_1896 = 0;
	var uLocal_1897 = 0;
	var uLocal_1898 = 0;
	var uLocal_1899 = 0;
	var uLocal_1900 = 0;
	var uLocal_1901 = 0;
	var uLocal_1902 = 0;
	var uLocal_1903 = 0;
	var uLocal_1904 = 0;
	var uLocal_1905 = 0;
	var uLocal_1906 = 0;
	var uLocal_1907 = 0;
	var uLocal_1908 = 15;
	var uLocal_1909 = 0;
	var uLocal_1910 = 0;
	var uLocal_1911 = 0;
	var uLocal_1912 = 0;
	var uLocal_1913 = 0;
	var uLocal_1914 = 0;
	var uLocal_1915 = 0;
	var uLocal_1916 = 0;
	var uLocal_1917 = 0;
	var uLocal_1918 = 0;
	var uLocal_1919 = 0;
	var uLocal_1920 = 0;
	var uLocal_1921 = 0;
	var uLocal_1922 = 0;
	var uLocal_1923 = 0;
	var uLocal_1924 = 0;
	var uLocal_1925 = 0;
	var uLocal_1926 = 0;
	var uLocal_1927 = 0;
	var uLocal_1928 = 0;
	var uLocal_1929 = 0;
	var uLocal_1930 = 0;
	var uLocal_1931 = 0;
	var uLocal_1932 = 0;
	var uLocal_1933 = 0;
	var uLocal_1934 = 0;
	var uLocal_1935 = 0;
	var uLocal_1936 = 0;
	var uLocal_1937 = 0;
	var uLocal_1938 = 0;
	var uLocal_1939 = 0;
	var uLocal_1940 = 0;
	var uLocal_1941 = 0;
	var uLocal_1942 = 0;
	var uLocal_1943 = 0;
	var uLocal_1944 = 0;
	var uLocal_1945 = 0;
	var uLocal_1946 = 0;
	var uLocal_1947 = 0;
	var uLocal_1948 = 0;
	var uLocal_1949 = 0;
	var uLocal_1950 = 0;
	var uLocal_1951 = 0;
	var uLocal_1952 = 0;
	var uLocal_1953 = 0;
	var uLocal_1954 = 0;
	var uLocal_1955 = 15;
	var uLocal_1956 = 0;
	var uLocal_1957 = 0;
	var uLocal_1958 = 0;
	var uLocal_1959 = 0;
	var uLocal_1960 = 0;
	var uLocal_1961 = 0;
	var uLocal_1962 = 0;
	var uLocal_1963 = 0;
	var uLocal_1964 = 0;
	var uLocal_1965 = 0;
	var uLocal_1966 = 0;
	var uLocal_1967 = 0;
	var uLocal_1968 = 0;
	var uLocal_1969 = 0;
	var uLocal_1970 = 0;
	var uLocal_1971 = 0;
	var uLocal_1972 = 0;
	var uLocal_1973 = 0;
	var uLocal_1974 = 0;
	var uLocal_1975 = 0;
	var uLocal_1976 = 0;
	var uLocal_1977 = 0;
	var uLocal_1978 = 0;
	var uLocal_1979 = 0;
	var uLocal_1980 = 0;
	var uLocal_1981 = 0;
	var uLocal_1982 = 0;
	var uLocal_1983 = 0;
	var uLocal_1984 = 0;
	var uLocal_1985 = 0;
	var uLocal_1986 = 0;
	var uLocal_1987 = 0;
	var uLocal_1988 = 0;
	var uLocal_1989 = 0;
	var uLocal_1990 = 0;
	var uLocal_1991 = 0;
	var uLocal_1992 = 0;
	var uLocal_1993 = 0;
	var uLocal_1994 = 0;
	var uLocal_1995 = 0;
	var uLocal_1996 = 0;
	var uLocal_1997 = 0;
	var uLocal_1998 = 0;
	var uLocal_1999 = 0;
	var uLocal_2000 = 0;
	var uLocal_2001 = 0;
	var uLocal_2002 = 15;
	var uLocal_2003 = 0;
	var uLocal_2004 = 0;
	var uLocal_2005 = 0;
	var uLocal_2006 = 0;
	var uLocal_2007 = 0;
	var uLocal_2008 = 0;
	var uLocal_2009 = 0;
	var uLocal_2010 = 0;
	var uLocal_2011 = 0;
	var uLocal_2012 = 0;
	var uLocal_2013 = 0;
	var uLocal_2014 = 0;
	var uLocal_2015 = 0;
	var uLocal_2016 = 0;
	var uLocal_2017 = 0;
	var uLocal_2018 = 0;
	var uLocal_2019 = 0;
	var uLocal_2020 = 0;
	var uLocal_2021 = 0;
	var uLocal_2022 = 0;
	var uLocal_2023 = 0;
	var uLocal_2024 = 0;
	var uLocal_2025 = 0;
	var uLocal_2026 = 0;
	var uLocal_2027 = 0;
	var uLocal_2028 = 0;
	var uLocal_2029 = 0;
	var uLocal_2030 = 0;
	var uLocal_2031 = 0;
	var uLocal_2032 = 0;
	var uLocal_2033 = 0;
	var uLocal_2034 = 0;
	var uLocal_2035 = 0;
	var uLocal_2036 = 0;
	var uLocal_2037 = 0;
	var uLocal_2038 = 0;
	var uLocal_2039 = 0;
	var uLocal_2040 = 0;
	var uLocal_2041 = 0;
	var uLocal_2042 = 0;
	var uLocal_2043 = 0;
	var uLocal_2044 = 0;
	var uLocal_2045 = 0;
	var uLocal_2046 = 0;
	var uLocal_2047 = 0;
	var uLocal_2048 = 0;
	var uLocal_2049 = 15;
	var uLocal_2050 = 0;
	var uLocal_2051 = 0;
	var uLocal_2052 = 0;
	var uLocal_2053 = 0;
	var uLocal_2054 = 0;
	var uLocal_2055 = 0;
	var uLocal_2056 = 0;
	var uLocal_2057 = 0;
	var uLocal_2058 = 0;
	var uLocal_2059 = 0;
	var uLocal_2060 = 0;
	var uLocal_2061 = 0;
	var uLocal_2062 = 0;
	var uLocal_2063 = 0;
	var uLocal_2064 = 0;
	var uLocal_2065 = 0;
	var uLocal_2066 = 0;
	var uLocal_2067 = 0;
	var uLocal_2068 = 0;
	var uLocal_2069 = 0;
	var uLocal_2070 = 0;
	var uLocal_2071 = 0;
	var uLocal_2072 = 0;
	var uLocal_2073 = 0;
	var uLocal_2074 = 0;
	var uLocal_2075 = 0;
	var uLocal_2076 = 0;
	var uLocal_2077 = 0;
	var uLocal_2078 = 0;
	var uLocal_2079 = 0;
	var uLocal_2080 = 0;
	var uLocal_2081 = 0;
	var uLocal_2082 = 0;
	var uLocal_2083 = 0;
	var uLocal_2084 = 0;
	var uLocal_2085 = 0;
	var uLocal_2086 = 0;
	var uLocal_2087 = 0;
	var uLocal_2088 = 0;
	var uLocal_2089 = 0;
	var uLocal_2090 = 0;
	var uLocal_2091 = 0;
	var uLocal_2092 = 0;
	var uLocal_2093 = 0;
	var uLocal_2094 = 0;
	var uLocal_2095 = 0;
	var uLocal_2096 = 15;
	var uLocal_2097 = 0;
	var uLocal_2098 = 0;
	var uLocal_2099 = 0;
	var uLocal_2100 = 0;
	var uLocal_2101 = 0;
	var uLocal_2102 = 0;
	var uLocal_2103 = 0;
	var uLocal_2104 = 0;
	var uLocal_2105 = 0;
	var uLocal_2106 = 0;
	var uLocal_2107 = 0;
	var uLocal_2108 = 0;
	var uLocal_2109 = 0;
	var uLocal_2110 = 0;
	var uLocal_2111 = 0;
	var uLocal_2112 = 0;
	var uLocal_2113 = 0;
	var uLocal_2114 = 0;
	var uLocal_2115 = 0;
	var uLocal_2116 = 0;
	var uLocal_2117 = 0;
	var uLocal_2118 = 0;
	var uLocal_2119 = 0;
	var uLocal_2120 = 0;
	var uLocal_2121 = 0;
	var uLocal_2122 = 0;
	var uLocal_2123 = 0;
	var uLocal_2124 = 0;
	var uLocal_2125 = 0;
	var uLocal_2126 = 0;
	var uLocal_2127 = 0;
	var uLocal_2128 = 0;
	var uLocal_2129 = 0;
	var uLocal_2130 = 0;
	var uLocal_2131 = 0;
	var uLocal_2132 = 0;
	var uLocal_2133 = 0;
	var uLocal_2134 = 0;
	var uLocal_2135 = 0;
	var uLocal_2136 = 0;
	var uLocal_2137 = 0;
	var uLocal_2138 = 0;
	var uLocal_2139 = 0;
	var uLocal_2140 = 0;
	var uLocal_2141 = 0;
	var uLocal_2142 = 0;
	var uLocal_2143 = 15;
	var uLocal_2144 = 0;
	var uLocal_2145 = 0;
	var uLocal_2146 = 0;
	var uLocal_2147 = 0;
	var uLocal_2148 = 0;
	var uLocal_2149 = 0;
	var uLocal_2150 = 0;
	var uLocal_2151 = 0;
	var uLocal_2152 = 0;
	var uLocal_2153 = 0;
	var uLocal_2154 = 0;
	var uLocal_2155 = 0;
	var uLocal_2156 = 0;
	var uLocal_2157 = 0;
	var uLocal_2158 = 0;
	var uLocal_2159 = 0;
	var uLocal_2160 = 0;
	var uLocal_2161 = 0;
	var uLocal_2162 = 0;
	var uLocal_2163 = 0;
	var uLocal_2164 = 0;
	var uLocal_2165 = 0;
	var uLocal_2166 = 0;
	var uLocal_2167 = 0;
	var uLocal_2168 = 0;
	var uLocal_2169 = 0;
	var uLocal_2170 = 0;
	var uLocal_2171 = 0;
	var uLocal_2172 = 0;
	var uLocal_2173 = 0;
	var uLocal_2174 = 0;
	var uLocal_2175 = 0;
	var uLocal_2176 = 0;
	var uLocal_2177 = 0;
	var uLocal_2178 = 0;
	var uLocal_2179 = 0;
	var uLocal_2180 = 0;
	var uLocal_2181 = 0;
	var uLocal_2182 = 0;
	var uLocal_2183 = 0;
	var uLocal_2184 = 0;
	var uLocal_2185 = 0;
	var uLocal_2186 = 0;
	var uLocal_2187 = 0;
	var uLocal_2188 = 0;
	var uLocal_2189 = 0;
	var uLocal_2190 = 15;
	var uLocal_2191 = 0;
	var uLocal_2192 = 0;
	var uLocal_2193 = 0;
	var uLocal_2194 = 0;
	var uLocal_2195 = 0;
	var uLocal_2196 = 0;
	var uLocal_2197 = 0;
	var uLocal_2198 = 0;
	var uLocal_2199 = 0;
	var uLocal_2200 = 0;
	var uLocal_2201 = 0;
	var uLocal_2202 = 0;
	var uLocal_2203 = 0;
	var uLocal_2204 = 0;
	var uLocal_2205 = 0;
	var uLocal_2206 = 0;
	var uLocal_2207 = 0;
	var uLocal_2208 = 0;
	var uLocal_2209 = 0;
	var uLocal_2210 = 0;
	var uLocal_2211 = 0;
	var uLocal_2212 = 0;
	var uLocal_2213 = 0;
	var uLocal_2214 = 0;
	var uLocal_2215 = 0;
	var uLocal_2216 = 0;
	var uLocal_2217 = 0;
	var uLocal_2218 = 0;
	var uLocal_2219 = 0;
	var uLocal_2220 = 0;
	var uLocal_2221 = 0;
	var uLocal_2222 = 0;
	var uLocal_2223 = 0;
	var uLocal_2224 = 0;
	var uLocal_2225 = 0;
	var uLocal_2226 = 0;
	var uLocal_2227 = 0;
	var uLocal_2228 = 0;
	var uLocal_2229 = 0;
	var uLocal_2230 = 0;
	var uLocal_2231 = 0;
	var uLocal_2232 = 0;
	var uLocal_2233 = 0;
	var uLocal_2234 = 0;
	var uLocal_2235 = 0;
	var uLocal_2236 = 0;
	var uLocal_2237 = 15;
	var uLocal_2238 = 0;
	var uLocal_2239 = 0;
	var uLocal_2240 = 0;
	var uLocal_2241 = 0;
	var uLocal_2242 = 0;
	var uLocal_2243 = 0;
	var uLocal_2244 = 0;
	var uLocal_2245 = 0;
	var uLocal_2246 = 0;
	var uLocal_2247 = 0;
	var uLocal_2248 = 0;
	var uLocal_2249 = 0;
	var uLocal_2250 = 0;
	var uLocal_2251 = 0;
	var uLocal_2252 = 0;
	var uLocal_2253 = 0;
	var uLocal_2254 = 0;
	var uLocal_2255 = 0;
	var uLocal_2256 = 0;
	var uLocal_2257 = 0;
	var uLocal_2258 = 0;
	var uLocal_2259 = 0;
	var uLocal_2260 = 0;
	var uLocal_2261 = 0;
	var uLocal_2262 = 0;
	var uLocal_2263 = 0;
	var uLocal_2264 = 0;
	var uLocal_2265 = 0;
	var uLocal_2266 = 0;
	var uLocal_2267 = 0;
	var uLocal_2268 = 0;
	var uLocal_2269 = 0;
	var uLocal_2270 = 0;
	var uLocal_2271 = 0;
	var uLocal_2272 = 0;
	var uLocal_2273 = 0;
	var uLocal_2274 = 0;
	var uLocal_2275 = 0;
	var uLocal_2276 = 0;
	var uLocal_2277 = 0;
	var uLocal_2278 = 0;
	var uLocal_2279 = 0;
	var uLocal_2280 = 0;
	var uLocal_2281 = 0;
	var uLocal_2282 = 0;
	var uLocal_2283 = 0;
	var uLocal_2284 = 15;
	var uLocal_2285 = 0;
	var uLocal_2286 = 0;
	var uLocal_2287 = 0;
	var uLocal_2288 = 0;
	var uLocal_2289 = 0;
	var uLocal_2290 = 0;
	var uLocal_2291 = 0;
	var uLocal_2292 = 0;
	var uLocal_2293 = 0;
	var uLocal_2294 = 0;
	var uLocal_2295 = 0;
	var uLocal_2296 = 0;
	var uLocal_2297 = 0;
	var uLocal_2298 = 0;
	var uLocal_2299 = 0;
	var uLocal_2300 = 0;
	var uLocal_2301 = 0;
	var uLocal_2302 = 0;
	var uLocal_2303 = 0;
	var uLocal_2304 = 0;
	var uLocal_2305 = 0;
	var uLocal_2306 = 0;
	var uLocal_2307 = 0;
	var uLocal_2308 = 0;
	var uLocal_2309 = 0;
	var uLocal_2310 = 0;
	var uLocal_2311 = 0;
	var uLocal_2312 = 0;
	var uLocal_2313 = 0;
	var uLocal_2314 = 0;
	var uLocal_2315 = 0;
	var uLocal_2316 = 0;
	var uLocal_2317 = 0;
	var uLocal_2318 = 0;
	var uLocal_2319 = 0;
	var uLocal_2320 = 0;
	var uLocal_2321 = 0;
	var uLocal_2322 = 0;
	var uLocal_2323 = 0;
	var uLocal_2324 = 0;
	var uLocal_2325 = 0;
	var uLocal_2326 = 0;
	var uLocal_2327 = 0;
	var uLocal_2328 = 0;
	var uLocal_2329 = 0;
	var uLocal_2330 = 0;
	var uLocal_2331 = 15;
	var uLocal_2332 = 0;
	var uLocal_2333 = 0;
	var uLocal_2334 = 0;
	var uLocal_2335 = 0;
	var uLocal_2336 = 0;
	var uLocal_2337 = 0;
	var uLocal_2338 = 0;
	var uLocal_2339 = 0;
	var uLocal_2340 = 0;
	var uLocal_2341 = 0;
	var uLocal_2342 = 0;
	var uLocal_2343 = 0;
	var uLocal_2344 = 0;
	var uLocal_2345 = 0;
	var uLocal_2346 = 0;
	var uLocal_2347 = 0;
	var uLocal_2348 = 0;
	var uLocal_2349 = 0;
	var uLocal_2350 = 0;
	var uLocal_2351 = 0;
	var uLocal_2352 = 0;
	var uLocal_2353 = 0;
	var uLocal_2354 = 0;
	var uLocal_2355 = 0;
	var uLocal_2356 = 0;
	var uLocal_2357 = 0;
	var uLocal_2358 = 0;
	var uLocal_2359 = 0;
	var uLocal_2360 = 0;
	var uLocal_2361 = 0;
	var uLocal_2362 = 0;
	var uLocal_2363 = 0;
	var uLocal_2364 = 0;
	var uLocal_2365 = 0;
	var uLocal_2366 = 0;
	var uLocal_2367 = 0;
	var uLocal_2368 = 0;
	var uLocal_2369 = 0;
	var uLocal_2370 = 0;
	var uLocal_2371 = 0;
	var uLocal_2372 = 0;
	var uLocal_2373 = 0;
	var uLocal_2374 = 0;
	var uLocal_2375 = 0;
	var uLocal_2376 = 0;
	var uLocal_2377 = 0;
	var uLocal_2378 = 15;
	var uLocal_2379 = 0;
	var uLocal_2380 = 0;
	var uLocal_2381 = 0;
	var uLocal_2382 = 0;
	var uLocal_2383 = 0;
	var uLocal_2384 = 0;
	var uLocal_2385 = 0;
	var uLocal_2386 = 0;
	var uLocal_2387 = 0;
	var uLocal_2388 = 0;
	var uLocal_2389 = 0;
	var uLocal_2390 = 0;
	var uLocal_2391 = 0;
	var uLocal_2392 = 0;
	var uLocal_2393 = 0;
	var uLocal_2394 = 0;
	var uLocal_2395 = 0;
	var uLocal_2396 = 0;
	var uLocal_2397 = 0;
	var uLocal_2398 = 0;
	var uLocal_2399 = 0;
	var uLocal_2400 = 0;
	var uLocal_2401 = 0;
	var uLocal_2402 = 0;
	var uLocal_2403 = 0;
	var uLocal_2404 = 0;
	var uLocal_2405 = 0;
	var uLocal_2406 = 0;
	var uLocal_2407 = 0;
	var uLocal_2408 = 0;
	var uLocal_2409 = 0;
	var uLocal_2410 = 0;
	var uLocal_2411 = 0;
	var uLocal_2412 = 0;
	var uLocal_2413 = 0;
	var uLocal_2414 = 0;
	var uLocal_2415 = 0;
	var uLocal_2416 = 0;
	var uLocal_2417 = 0;
	var uLocal_2418 = 0;
	var uLocal_2419 = 0;
	var uLocal_2420 = 0;
	var uLocal_2421 = 0;
	var uLocal_2422 = 0;
	var uLocal_2423 = 0;
	var uLocal_2424 = 0;
	var uLocal_2425 = 15;
	var uLocal_2426 = 0;
	var uLocal_2427 = 0;
	var uLocal_2428 = 0;
	var uLocal_2429 = 0;
	var uLocal_2430 = 0;
	var uLocal_2431 = 0;
	var uLocal_2432 = 0;
	var uLocal_2433 = 0;
	var uLocal_2434 = 0;
	var uLocal_2435 = 0;
	var uLocal_2436 = 0;
	var uLocal_2437 = 0;
	var uLocal_2438 = 0;
	var uLocal_2439 = 0;
	var uLocal_2440 = 0;
	var uLocal_2441 = 0;
	var uLocal_2442 = 0;
	var uLocal_2443 = 0;
	var uLocal_2444 = 0;
	var uLocal_2445 = 0;
	var uLocal_2446 = 0;
	var uLocal_2447 = 0;
	var uLocal_2448 = 0;
	var uLocal_2449 = 0;
	var uLocal_2450 = 0;
	var uLocal_2451 = 0;
	var uLocal_2452 = 0;
	var uLocal_2453 = 0;
	var uLocal_2454 = 0;
	var uLocal_2455 = 0;
	var uLocal_2456 = 0;
	var uLocal_2457 = 0;
	var uLocal_2458 = 0;
	var uLocal_2459 = 0;
	var uLocal_2460 = 0;
	var uLocal_2461 = 0;
	var uLocal_2462 = 0;
	var uLocal_2463 = 0;
	var uLocal_2464 = 0;
	var uLocal_2465 = 0;
	var uLocal_2466 = 0;
	var uLocal_2467 = 0;
	var uLocal_2468 = 0;
	var uLocal_2469 = 0;
	var uLocal_2470 = 0;
	var uLocal_2471 = 0;
	var uLocal_2472 = 15;
	var uLocal_2473 = 0;
	var uLocal_2474 = 0;
	var uLocal_2475 = 0;
	var uLocal_2476 = 0;
	var uLocal_2477 = 0;
	var uLocal_2478 = 0;
	var uLocal_2479 = 0;
	var uLocal_2480 = 0;
	var uLocal_2481 = 0;
	var uLocal_2482 = 0;
	var uLocal_2483 = 0;
	var uLocal_2484 = 0;
	var uLocal_2485 = 0;
	var uLocal_2486 = 0;
	var uLocal_2487 = 0;
	var uLocal_2488 = 0;
	var uLocal_2489 = 0;
	var uLocal_2490 = 0;
	var uLocal_2491 = 0;
	var uLocal_2492 = 0;
	var uLocal_2493 = 0;
	var uLocal_2494 = 0;
	var uLocal_2495 = 0;
	var uLocal_2496 = 0;
	var uLocal_2497 = 0;
	var uLocal_2498 = 0;
	var uLocal_2499 = 0;
	var uLocal_2500 = 0;
	var uLocal_2501 = 0;
	var uLocal_2502 = 0;
	var uLocal_2503 = 0;
	var uLocal_2504 = 0;
	var uLocal_2505 = 0;
	var uLocal_2506 = 0;
	var uLocal_2507 = 0;
	var uLocal_2508 = 0;
	var uLocal_2509 = 0;
	var uLocal_2510 = 0;
	var uLocal_2511 = 0;
	var uLocal_2512 = 0;
	var uLocal_2513 = 0;
	var uLocal_2514 = 0;
	var uLocal_2515 = 0;
	var uLocal_2516 = 0;
	var uLocal_2517 = 0;
	var uLocal_2518 = 0;
	var uLocal_2519 = 15;
	var uLocal_2520 = 0;
	var uLocal_2521 = 0;
	var uLocal_2522 = 0;
	var uLocal_2523 = 0;
	var uLocal_2524 = 0;
	var uLocal_2525 = 0;
	var uLocal_2526 = 0;
	var uLocal_2527 = 0;
	var uLocal_2528 = 0;
	var uLocal_2529 = 0;
	var uLocal_2530 = 0;
	var uLocal_2531 = 0;
	var uLocal_2532 = 0;
	var uLocal_2533 = 0;
	var uLocal_2534 = 0;
	var uLocal_2535 = 0;
	var uLocal_2536 = 0;
	var uLocal_2537 = 0;
	var uLocal_2538 = 0;
	var uLocal_2539 = 0;
	var uLocal_2540 = 0;
	var uLocal_2541 = 0;
	var uLocal_2542 = 0;
	var uLocal_2543 = 0;
	var uLocal_2544 = 0;
	var uLocal_2545 = 0;
	var uLocal_2546 = 0;
	var uLocal_2547 = 0;
	var uLocal_2548 = 0;
	var uLocal_2549 = 0;
	var uLocal_2550 = 0;
	var uLocal_2551 = 0;
	var uLocal_2552 = 0;
	var uLocal_2553 = 0;
	var uLocal_2554 = 0;
	var uLocal_2555 = 0;
	var uLocal_2556 = 0;
	var uLocal_2557 = 0;
	var uLocal_2558 = 0;
	var uLocal_2559 = 0;
	var uLocal_2560 = 0;
	var uLocal_2561 = 0;
	var uLocal_2562 = 0;
	var uLocal_2563 = 0;
	var uLocal_2564 = 0;
	var uLocal_2565 = 0;
	var uLocal_2566 = 15;
	var uLocal_2567 = 0;
	var uLocal_2568 = 0;
	var uLocal_2569 = 0;
	var uLocal_2570 = 0;
	var uLocal_2571 = 0;
	var uLocal_2572 = 0;
	var uLocal_2573 = 0;
	var uLocal_2574 = 0;
	var uLocal_2575 = 0;
	var uLocal_2576 = 0;
	var uLocal_2577 = 0;
	var uLocal_2578 = 0;
	var uLocal_2579 = 0;
	var uLocal_2580 = 0;
	var uLocal_2581 = 0;
	var uLocal_2582 = 0;
	var uLocal_2583 = 0;
	var uLocal_2584 = 0;
	var uLocal_2585 = 0;
	var uLocal_2586 = 0;
	var uLocal_2587 = 0;
	var uLocal_2588 = 0;
	var uLocal_2589 = 0;
	var uLocal_2590 = 0;
	var uLocal_2591 = 0;
	var uLocal_2592 = 0;
	var uLocal_2593 = 0;
	var uLocal_2594 = 0;
	var uLocal_2595 = 0;
	var uLocal_2596 = 0;
	var uLocal_2597 = 0;
	var uLocal_2598 = 0;
	var uLocal_2599 = 0;
	var uLocal_2600 = 0;
	var uLocal_2601 = 0;
	var uLocal_2602 = 0;
	var uLocal_2603 = 0;
	var uLocal_2604 = 0;
	var uLocal_2605 = 0;
	var uLocal_2606 = 0;
	var uLocal_2607 = 0;
	var uLocal_2608 = 0;
	var uLocal_2609 = 0;
	var uLocal_2610 = 0;
	var uLocal_2611 = 0;
	var uLocal_2612 = 0;
	var uLocal_2613 = 15;
	var uLocal_2614 = 0;
	var uLocal_2615 = 0;
	var uLocal_2616 = 0;
	var uLocal_2617 = 0;
	var uLocal_2618 = 0;
	var uLocal_2619 = 0;
	var uLocal_2620 = 0;
	var uLocal_2621 = 0;
	var uLocal_2622 = 0;
	var uLocal_2623 = 0;
	var uLocal_2624 = 0;
	var uLocal_2625 = 0;
	var uLocal_2626 = 0;
	var uLocal_2627 = 0;
	var uLocal_2628 = 0;
	var uLocal_2629 = 0;
	var uLocal_2630 = 0;
	var uLocal_2631 = 0;
	var uLocal_2632 = 0;
	var uLocal_2633 = 0;
	var uLocal_2634 = 0;
	var uLocal_2635 = 0;
	var uLocal_2636 = 0;
	var uLocal_2637 = 0;
	var uLocal_2638 = 0;
	var uLocal_2639 = 0;
	var uLocal_2640 = 0;
	var uLocal_2641 = 0;
	var uLocal_2642 = 0;
	var uLocal_2643 = 0;
	var uLocal_2644 = 0;
	var uLocal_2645 = 0;
	var uLocal_2646 = 0;
	var uLocal_2647 = 0;
	var uLocal_2648 = 0;
	var uLocal_2649 = 0;
	var uLocal_2650 = 0;
	var uLocal_2651 = 0;
	var uLocal_2652 = 0;
	var uLocal_2653 = 0;
	var uLocal_2654 = 0;
	var uLocal_2655 = 0;
	var uLocal_2656 = 0;
	var uLocal_2657 = 0;
	var uLocal_2658 = 0;
	var uLocal_2659 = 0;
	var uLocal_2660 = 15;
	var uLocal_2661 = 0;
	var uLocal_2662 = 0;
	var uLocal_2663 = 0;
	var uLocal_2664 = 0;
	var uLocal_2665 = 0;
	var uLocal_2666 = 0;
	var uLocal_2667 = 0;
	var uLocal_2668 = 0;
	var uLocal_2669 = 0;
	var uLocal_2670 = 0;
	var uLocal_2671 = 0;
	var uLocal_2672 = 0;
	var uLocal_2673 = 0;
	var uLocal_2674 = 0;
	var uLocal_2675 = 0;
	var uLocal_2676 = 0;
	var uLocal_2677 = 0;
	var uLocal_2678 = 0;
	var uLocal_2679 = 0;
	var uLocal_2680 = 0;
	var uLocal_2681 = 0;
	var uLocal_2682 = 0;
	var uLocal_2683 = 0;
	var uLocal_2684 = 0;
	var uLocal_2685 = 0;
	var uLocal_2686 = 0;
	var uLocal_2687 = 0;
	var uLocal_2688 = 0;
	var uLocal_2689 = 0;
	var uLocal_2690 = 0;
	var uLocal_2691 = 0;
	var uLocal_2692 = 0;
	var uLocal_2693 = 0;
	var uLocal_2694 = 0;
	var uLocal_2695 = 0;
	var uLocal_2696 = 0;
	var uLocal_2697 = 0;
	var uLocal_2698 = 0;
	var uLocal_2699 = 0;
	var uLocal_2700 = 0;
	var uLocal_2701 = 0;
	var uLocal_2702 = 0;
	var uLocal_2703 = 0;
	var uLocal_2704 = 0;
	var uLocal_2705 = 0;
	var uLocal_2706 = 0;
	var uLocal_2707 = 15;
	var uLocal_2708 = 0;
	var uLocal_2709 = 0;
	var uLocal_2710 = 0;
	var uLocal_2711 = 0;
	var uLocal_2712 = 0;
	var uLocal_2713 = 0;
	var uLocal_2714 = 0;
	var uLocal_2715 = 0;
	var uLocal_2716 = 0;
	var uLocal_2717 = 0;
	var uLocal_2718 = 0;
	var uLocal_2719 = 0;
	var uLocal_2720 = 0;
	var uLocal_2721 = 0;
	var uLocal_2722 = 0;
	var uLocal_2723 = 0;
	var uLocal_2724 = 0;
	var uLocal_2725 = 0;
	var uLocal_2726 = 0;
	var uLocal_2727 = 0;
	var uLocal_2728 = 0;
	var uLocal_2729 = 0;
	var uLocal_2730 = 0;
	var uLocal_2731 = 0;
	var uLocal_2732 = 0;
	var uLocal_2733 = 0;
	var uLocal_2734 = 0;
	var uLocal_2735 = 0;
	var uLocal_2736 = 0;
	var uLocal_2737 = 0;
	var uLocal_2738 = 0;
	var uLocal_2739 = 0;
	var uLocal_2740 = 0;
	var uLocal_2741 = 0;
	var uLocal_2742 = 0;
	var uLocal_2743 = 0;
	var uLocal_2744 = 0;
	var uLocal_2745 = 0;
	var uLocal_2746 = 0;
	var uLocal_2747 = 0;
	var uLocal_2748 = 0;
	var uLocal_2749 = 0;
	var uLocal_2750 = 0;
	var uLocal_2751 = 0;
	var uLocal_2752 = 0;
	var uLocal_2753 = 0;
	var uLocal_2754 = 15;
	var uLocal_2755 = 0;
	var uLocal_2756 = 0;
	var uLocal_2757 = 0;
	var uLocal_2758 = 0;
	var uLocal_2759 = 0;
	var uLocal_2760 = 0;
	var uLocal_2761 = 0;
	var uLocal_2762 = 0;
	var uLocal_2763 = 0;
	var uLocal_2764 = 0;
	var uLocal_2765 = 0;
	var uLocal_2766 = 0;
	var uLocal_2767 = 0;
	var uLocal_2768 = 0;
	var uLocal_2769 = 0;
	var uLocal_2770 = 0;
	var uLocal_2771 = 0;
	var uLocal_2772 = 0;
	var uLocal_2773 = 0;
	var uLocal_2774 = 0;
	var uLocal_2775 = 0;
	var uLocal_2776 = 0;
	var uLocal_2777 = 0;
	var uLocal_2778 = 0;
	var uLocal_2779 = 0;
	var uLocal_2780 = 0;
	var uLocal_2781 = 0;
	var uLocal_2782 = 0;
	var uLocal_2783 = 0;
	var uLocal_2784 = 0;
	var uLocal_2785 = 0;
	var uLocal_2786 = 0;
	var uLocal_2787 = 0;
	var uLocal_2788 = 0;
	var uLocal_2789 = 0;
	var uLocal_2790 = 0;
	var uLocal_2791 = 0;
	var uLocal_2792 = 0;
	var uLocal_2793 = 0;
	var uLocal_2794 = 0;
	var uLocal_2795 = 0;
	var uLocal_2796 = 0;
	var uLocal_2797 = 0;
	var uLocal_2798 = 0;
	var uLocal_2799 = 0;
	var uLocal_2800 = 0;
	var uLocal_2801 = 15;
	var uLocal_2802 = 0;
	var uLocal_2803 = 0;
	var uLocal_2804 = 0;
	var uLocal_2805 = 0;
	var uLocal_2806 = 0;
	var uLocal_2807 = 0;
	var uLocal_2808 = 0;
	var uLocal_2809 = 0;
	var uLocal_2810 = 0;
	var uLocal_2811 = 0;
	var uLocal_2812 = 0;
	var uLocal_2813 = 0;
	var uLocal_2814 = 0;
	var uLocal_2815 = 0;
	var uLocal_2816 = 0;
	var uLocal_2817 = 0;
	var uLocal_2818 = 0;
	var uLocal_2819 = 0;
	var uLocal_2820 = 0;
	var uLocal_2821 = 0;
	var uLocal_2822 = 0;
	var uLocal_2823 = 0;
	var uLocal_2824 = 0;
	var uLocal_2825 = 0;
	var uLocal_2826 = 0;
	var uLocal_2827 = 0;
	var uLocal_2828 = 0;
	var uLocal_2829 = 0;
	var uLocal_2830 = 0;
	var uLocal_2831 = 0;
	var uLocal_2832 = 0;
	var uLocal_2833 = 0;
	var uLocal_2834 = 0;
	var uLocal_2835 = 0;
	var uLocal_2836 = 0;
	var uLocal_2837 = 0;
	var uLocal_2838 = 0;
	var uLocal_2839 = 0;
	var uLocal_2840 = 0;
	var uLocal_2841 = 0;
	var uLocal_2842 = 0;
	var uLocal_2843 = 0;
	var uLocal_2844 = 0;
	var uLocal_2845 = 0;
	var uLocal_2846 = 0;
	var uLocal_2847 = 0;
	var uLocal_2848 = 15;
	var uLocal_2849 = 0;
	var uLocal_2850 = 0;
	var uLocal_2851 = 0;
	var uLocal_2852 = 0;
	var uLocal_2853 = 0;
	var uLocal_2854 = 0;
	var uLocal_2855 = 0;
	var uLocal_2856 = 0;
	var uLocal_2857 = 0;
	var uLocal_2858 = 0;
	var uLocal_2859 = 0;
	var uLocal_2860 = 0;
	var uLocal_2861 = 0;
	var uLocal_2862 = 0;
	var uLocal_2863 = 0;
	var uLocal_2864 = 0;
	var uLocal_2865 = 0;
	var uLocal_2866 = 0;
	var uLocal_2867 = 0;
	var uLocal_2868 = 0;
	var uLocal_2869 = 0;
	var uLocal_2870 = 0;
	var uLocal_2871 = 0;
	var uLocal_2872 = 0;
	var uLocal_2873 = 0;
	var uLocal_2874 = 0;
	var uLocal_2875 = 0;
	var uLocal_2876 = 0;
	var uLocal_2877 = 0;
	var uLocal_2878 = 0;
	var uLocal_2879 = 0;
	var uLocal_2880 = 0;
	var uLocal_2881 = 0;
	var uLocal_2882 = 0;
	var uLocal_2883 = 0;
	var uLocal_2884 = 0;
	var uLocal_2885 = 0;
	var uLocal_2886 = 0;
	var uLocal_2887 = 0;
	var uLocal_2888 = 0;
	var uLocal_2889 = 0;
	var uLocal_2890 = 0;
	var uLocal_2891 = 0;
	var uLocal_2892 = 0;
	var uLocal_2893 = 0;
	var uLocal_2894 = 0;
	var uLocal_2895 = 15;
	var uLocal_2896 = 0;
	var uLocal_2897 = 0;
	var uLocal_2898 = 0;
	var uLocal_2899 = 0;
	var uLocal_2900 = 0;
	var uLocal_2901 = 0;
	var uLocal_2902 = 0;
	var uLocal_2903 = 0;
	var uLocal_2904 = 0;
	var uLocal_2905 = 0;
	var uLocal_2906 = 0;
	var uLocal_2907 = 0;
	var uLocal_2908 = 0;
	var uLocal_2909 = 0;
	var uLocal_2910 = 0;
	var uLocal_2911 = 0;
	var uLocal_2912 = 0;
	var uLocal_2913 = 0;
	var uLocal_2914 = 0;
	var uLocal_2915 = 0;
	var uLocal_2916 = 0;
	var uLocal_2917 = 0;
	var uLocal_2918 = 0;
	var uLocal_2919 = 0;
	var uLocal_2920 = 0;
	var uLocal_2921 = 0;
	var uLocal_2922 = 0;
	var uLocal_2923 = 0;
	var uLocal_2924 = 0;
	var uLocal_2925 = 0;
	var uLocal_2926 = 0;
	var uLocal_2927 = 0;
	var uLocal_2928 = 0;
	var uLocal_2929 = 0;
	var uLocal_2930 = 0;
	var uLocal_2931 = 0;
	var uLocal_2932 = 0;
	var uLocal_2933 = 0;
	var uLocal_2934 = 0;
	var uLocal_2935 = 0;
	var uLocal_2936 = 0;
	var uLocal_2937 = 0;
	var uLocal_2938 = 0;
	var uLocal_2939 = 0;
	var uLocal_2940 = 0;
	var uLocal_2941 = 0;
	var uLocal_2942 = 15;
	var uLocal_2943 = 0;
	var uLocal_2944 = 0;
	var uLocal_2945 = 0;
	var uLocal_2946 = 0;
	var uLocal_2947 = 0;
	var uLocal_2948 = 0;
	var uLocal_2949 = 0;
	var uLocal_2950 = 0;
	var uLocal_2951 = 0;
	var uLocal_2952 = 0;
	var uLocal_2953 = 0;
	var uLocal_2954 = 0;
	var uLocal_2955 = 0;
	var uLocal_2956 = 0;
	var uLocal_2957 = 0;
	var uLocal_2958 = 0;
	var uLocal_2959 = 0;
	var uLocal_2960 = 0;
	var uLocal_2961 = 0;
	var uLocal_2962 = 0;
	var uLocal_2963 = 0;
	var uLocal_2964 = 0;
	var uLocal_2965 = 0;
	var uLocal_2966 = 0;
	var uLocal_2967 = 0;
	var uLocal_2968 = 0;
	var uLocal_2969 = 0;
	var uLocal_2970 = 0;
	var uLocal_2971 = 0;
	var uLocal_2972 = 0;
	var uLocal_2973 = 0;
	var uLocal_2974 = 0;
	var uLocal_2975 = 0;
	var uLocal_2976 = 0;
	var uLocal_2977 = 0;
	var uLocal_2978 = 0;
	var uLocal_2979 = 0;
	var uLocal_2980 = 0;
	var uLocal_2981 = 0;
	var uLocal_2982 = 0;
	var uLocal_2983 = 0;
	var uLocal_2984 = 0;
	var uLocal_2985 = 0;
	var uLocal_2986 = 0;
	var uLocal_2987 = 0;
	var uLocal_2988 = 0;
	var uLocal_2989 = 15;
	var uLocal_2990 = 0;
	var uLocal_2991 = 0;
	var uLocal_2992 = 0;
	var uLocal_2993 = 0;
	var uLocal_2994 = 0;
	var uLocal_2995 = 0;
	var uLocal_2996 = 0;
	var uLocal_2997 = 0;
	var uLocal_2998 = 0;
	var uLocal_2999 = 0;
	var uLocal_3000 = 0;
	var uLocal_3001 = 0;
	var uLocal_3002 = 0;
	var uLocal_3003 = 0;
	var uLocal_3004 = 0;
	var uLocal_3005 = 0;
	var uLocal_3006 = 0;
	var uLocal_3007 = 0;
	var uLocal_3008 = 0;
	var uLocal_3009 = 0;
	var uLocal_3010 = 0;
	var uLocal_3011 = 0;
	var uLocal_3012 = 0;
	var uLocal_3013 = 0;
	var uLocal_3014 = 0;
	var uLocal_3015 = 0;
	var uLocal_3016 = 0;
	var uLocal_3017 = 0;
	var uLocal_3018 = 0;
	var uLocal_3019 = 0;
	var uLocal_3020 = 0;
	var uLocal_3021 = 0;
	var uLocal_3022 = 0;
	var uLocal_3023 = 0;
	var uLocal_3024 = 0;
	var uLocal_3025 = 0;
	var uLocal_3026 = 0;
	var uLocal_3027 = 0;
	var uLocal_3028 = 0;
	var uLocal_3029 = 0;
	var uLocal_3030 = 0;
	var uLocal_3031 = 0;
	var uLocal_3032 = 0;
	var uLocal_3033 = 0;
	var uLocal_3034 = 0;
	var uLocal_3035 = 0;
	var uLocal_3036 = 15;
	var uLocal_3037 = 0;
	var uLocal_3038 = 0;
	var uLocal_3039 = 0;
	var uLocal_3040 = 0;
	var uLocal_3041 = 0;
	var uLocal_3042 = 0;
	var uLocal_3043 = 0;
	var uLocal_3044 = 0;
	var uLocal_3045 = 0;
	var uLocal_3046 = 0;
	var uLocal_3047 = 0;
	var uLocal_3048 = 0;
	var uLocal_3049 = 0;
	var uLocal_3050 = 0;
	var uLocal_3051 = 0;
	var uLocal_3052 = 0;
	var uLocal_3053 = 0;
	var uLocal_3054 = 0;
	var uLocal_3055 = 0;
	var uLocal_3056 = 0;
	var uLocal_3057 = 0;
	var uLocal_3058 = 0;
	var uLocal_3059 = 0;
	var uLocal_3060 = 0;
	var uLocal_3061 = 0;
	var uLocal_3062 = 0;
	var uLocal_3063 = 0;
	var uLocal_3064 = 0;
	var uLocal_3065 = 0;
	var uLocal_3066 = 0;
	var uLocal_3067 = 0;
	var uLocal_3068 = 0;
	var uLocal_3069 = 0;
	var uLocal_3070 = 0;
	var uLocal_3071 = 0;
	var uLocal_3072 = 0;
	var uLocal_3073 = 0;
	var uLocal_3074 = 0;
	var uLocal_3075 = 0;
	var uLocal_3076 = 0;
	var uLocal_3077 = 0;
	var uLocal_3078 = 0;
	var uLocal_3079 = 0;
	var uLocal_3080 = 0;
	var uLocal_3081 = 0;
	var uLocal_3082 = 0;
	var uLocal_3083 = 15;
	var uLocal_3084 = 0;
	var uLocal_3085 = 0;
	var uLocal_3086 = 0;
	var uLocal_3087 = 0;
	var uLocal_3088 = 0;
	var uLocal_3089 = 0;
	var uLocal_3090 = 0;
	var uLocal_3091 = 0;
	var uLocal_3092 = 0;
	var uLocal_3093 = 0;
	var uLocal_3094 = 0;
	var uLocal_3095 = 0;
	var uLocal_3096 = 0;
	var uLocal_3097 = 0;
	var uLocal_3098 = 0;
	var uLocal_3099 = 0;
	var uLocal_3100 = 0;
	var uLocal_3101 = 0;
	var uLocal_3102 = 0;
	var uLocal_3103 = 0;
	var uLocal_3104 = 0;
	var uLocal_3105 = 0;
	var uLocal_3106 = 0;
	var uLocal_3107 = 0;
	var uLocal_3108 = 0;
	var uLocal_3109 = 0;
	var uLocal_3110 = 0;
	var uLocal_3111 = 0;
	var uLocal_3112 = 0;
	var uLocal_3113 = 0;
	var uLocal_3114 = 0;
	var uLocal_3115 = 0;
	var uLocal_3116 = 0;
	var uLocal_3117 = 0;
	var uLocal_3118 = 0;
	var uLocal_3119 = 0;
	var uLocal_3120 = 0;
	var uLocal_3121 = 0;
	var uLocal_3122 = 0;
	var uLocal_3123 = 0;
	var uLocal_3124 = 0;
	var uLocal_3125 = 0;
	var uLocal_3126 = 0;
	var uLocal_3127 = 0;
	var uLocal_3128 = 0;
	var uLocal_3129 = 0;
	var uLocal_3130 = 15;
	var uLocal_3131 = 0;
	var uLocal_3132 = 0;
	var uLocal_3133 = 0;
	var uLocal_3134 = 0;
	var uLocal_3135 = 0;
	var uLocal_3136 = 0;
	var uLocal_3137 = 0;
	var uLocal_3138 = 0;
	var uLocal_3139 = 0;
	var uLocal_3140 = 0;
	var uLocal_3141 = 0;
	var uLocal_3142 = 0;
	var uLocal_3143 = 0;
	var uLocal_3144 = 0;
	var uLocal_3145 = 0;
	var uLocal_3146 = 0;
	var uLocal_3147 = 0;
	var uLocal_3148 = 0;
	var uLocal_3149 = 0;
	var uLocal_3150 = 0;
	var uLocal_3151 = 0;
	var uLocal_3152 = 0;
	var uLocal_3153 = 0;
	var uLocal_3154 = 0;
	var uLocal_3155 = 0;
	var uLocal_3156 = 0;
	var uLocal_3157 = 0;
	var uLocal_3158 = 0;
	var uLocal_3159 = 0;
	var uLocal_3160 = 0;
	var uLocal_3161 = 0;
	var uLocal_3162 = 0;
	var uLocal_3163 = 0;
	var uLocal_3164 = 0;
	var uLocal_3165 = 0;
	var uLocal_3166 = 0;
	var uLocal_3167 = 0;
	var uLocal_3168 = 0;
	var uLocal_3169 = 0;
	var uLocal_3170 = 0;
	var uLocal_3171 = 0;
	var uLocal_3172 = 0;
	var uLocal_3173 = 0;
	var uLocal_3174 = 0;
	var uLocal_3175 = 0;
	var uLocal_3176 = 0;
	var uLocal_3177 = 15;
	var uLocal_3178 = 0;
	var uLocal_3179 = 0;
	var uLocal_3180 = 0;
	var uLocal_3181 = 0;
	var uLocal_3182 = 0;
	var uLocal_3183 = 0;
	var uLocal_3184 = 0;
	var uLocal_3185 = 0;
	var uLocal_3186 = 0;
	var uLocal_3187 = 0;
	var uLocal_3188 = 0;
	var uLocal_3189 = 0;
	var uLocal_3190 = 0;
	var uLocal_3191 = 0;
	var uLocal_3192 = 0;
	var uLocal_3193 = 0;
	var uLocal_3194 = 0;
	var uLocal_3195 = 0;
	var uLocal_3196 = 0;
	var uLocal_3197 = 0;
	var uLocal_3198 = 0;
	var uLocal_3199 = 0;
	var uLocal_3200 = 0;
	var uLocal_3201 = 0;
	var uLocal_3202 = 0;
	var uLocal_3203 = 0;
	var uLocal_3204 = 0;
	var uLocal_3205 = 0;
	var uLocal_3206 = 0;
	var uLocal_3207 = 0;
	var uLocal_3208 = 0;
	var uLocal_3209 = 0;
	var uLocal_3210 = 0;
	var uLocal_3211 = 0;
	var uLocal_3212 = 0;
	var uLocal_3213 = 0;
	var uLocal_3214 = 0;
	var uLocal_3215 = 0;
	var uLocal_3216 = 0;
	var uLocal_3217 = 0;
	var uLocal_3218 = 0;
	var uLocal_3219 = 0;
	var uLocal_3220 = 0;
	var uLocal_3221 = 0;
	var uLocal_3222 = 0;
	var uLocal_3223 = 0;
	var uLocal_3224 = 15;
	var uLocal_3225 = 0;
	var uLocal_3226 = 0;
	var uLocal_3227 = 0;
	var uLocal_3228 = 0;
	var uLocal_3229 = 0;
	var uLocal_3230 = 0;
	var uLocal_3231 = 0;
	var uLocal_3232 = 0;
	var uLocal_3233 = 0;
	var uLocal_3234 = 0;
	var uLocal_3235 = 0;
	var uLocal_3236 = 0;
	var uLocal_3237 = 0;
	var uLocal_3238 = 0;
	var uLocal_3239 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;

	fLocal_13 = 1f;
	fLocal_14 = 1f;
	iVar0 = 521;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(iVar0))
	{
		func_1(&Local_16, &(Local_16.f_529), &(Local_16.f_754), &(Local_16.f_1718));
	}
	func_2(&Local_16, -1);
	while (true)
	{
		if (func_3(&Local_16))
		{
			func_4(&Local_16, 4);
		}
		else
		{
			func_5(&Local_16, &(Local_16.f_529), &(Local_16.f_754));
			if (func_6(&Local_16) > 0)
			{
				func_7();
				func_8(&(Local_16.f_529));
				func_9(&Local_16, &(Local_16.f_529));
				func_10(&(Local_16.f_529), &(Local_16.f_754));
				func_11(&Local_16, &(Local_16.f_529), &(Local_16.f_754));
			}
		}
		switch (func_6(&Local_16))
		{
			case 0:
				func_12(&Local_16);
				break;
			case 1:
				func_13(&Local_16, &(Local_16.f_529), &(Local_16.f_754));
				break;
			case 2:
				func_14(&Local_16, &(Local_16.f_529), &(Local_16.f_754));
				break;
			case 3:
				func_15(&Local_16);
				break;
			case 4:
				func_16(&Local_16, &(Local_16.f_529), &(Local_16.f_754), &(Local_16.f_1718));
				break;
		}
		func_17(&(Local_16.f_529), &(Local_16.f_754));
		func_18(&(Local_16.f_1718));
		BUILTIN::WAIT(0);
	}
}

void func_1(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;

	func_19(uParam0, uParam1, uParam2, 0);
	func_20(&(uParam0->f_19));
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (uParam2->f_1[iVar0] == 0)
		{
			func_21(uParam1, uParam2, iVar0, 1, 0);
		}
		else
		{
			func_21(uParam1, uParam2, iVar0, 0, 0);
		}
		iVar0++;
	}
	func_22(uParam1);
	func_23(uParam1);
	func_24(uParam1);
	func_25(uParam1);
	func_26(uParam3);
	func_27(uParam0);
	func_28(0);
	func_29(uParam0, 0);
	func_30();
	func_31(0);
	func_32();
	HUD::_0x160825DADF1B04B3();
	func_33();
}

void func_2(var uParam0, int iParam1)
{
	if (func_34(uParam0, 2))
	{
		return;
	}
	func_35(uParam0, 2);
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
}

bool func_3(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		return true;
	}
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		func_36();
		return true;
	}
	if (func_37(1, 1))
	{
		func_36();
		return true;
	}
	if (func_34(uParam0, 1) && !func_38(uParam0->f_24))
	{
		uParam0->f_46 = func_39(PLAYER::PLAYER_PED_ID(), uParam0->f_24, 0);
		if (uParam0->f_46 > 15f)
		{
			return true;
		}
	}
	return false;
}

void func_4(var uParam0, int iParam1)
{
	if (func_6(uParam0) != iParam1)
	{
		uParam0->f_10 = iParam1;
	}
}

void func_5(var uParam0, var uParam1, var uParam2)
{
	if (func_34(uParam0, 1))
	{
		return;
	}
	func_35(uParam0, 1);
	func_30();
	func_28(1);
	func_29(uParam0, 1);
	func_40(&(uParam0->f_82), 1);
	func_41(uParam0);
	func_42(uParam1);
	func_43(uParam1, uParam2, -1);
	uParam0->f_27[0 /*3*/] = { 0f, 0f, 0f };
	uParam0->f_27[1 /*3*/] = { -20f, 20f, 0f };
	uParam0->f_27[2 /*3*/] = { -20f, 50f, 0f };
	uParam0->f_27[3 /*3*/] = { 20f, 50f, 0f };
	uParam0->f_27[4 /*3*/] = { 20f, 20f, 0f };
	uParam0->f_24 = { Global_35 };
}

int func_6(var uParam0)
{
	return uParam0->f_10;
}

void func_7()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && func_44())
	{
		Global_1903071.f_35 = TASK::_0xF3735ACD11ACD500(PLAYER::PLAYER_PED_ID(), &(Global_1903071.f_5));
	}
	else
	{
		Global_1903071.f_5 = 1;
		Global_1903071.f_35 = 0;
	}
}

void func_8(var uParam0)
{
	uParam0->f_4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false) };
	uParam0->f_7 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
}

void func_9(var uParam0, var uParam1)
{
	POPULATION::_0x8EC7CD701F872F87(2f, 512, 0, 0, -1, -1);
	POPULATION::_0x8EC7CD701F872F87(0.1f, 1024, 0, 0, -1, -1);
	if (func_6(uParam0) == 0)
	{
		return;
	}
	func_45(uParam0);
	if (func_46())
	{
		func_47(uParam0);
	}
	if (func_48(2))
	{
		func_49(0);
		func_50(2);
	}
	if (func_48(4))
	{
		func_49(1);
		func_50(4);
	}
	if (func_51(&(uParam0->f_79)))
	{
		if (func_52(&(uParam0->f_79)) < 500)
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
		}
		else
		{
			func_53(&(uParam0->f_79));
		}
	}
	if (func_44())
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			if (Global_1903071.f_35 == 1 && PED::_0x5407B7288D0478B7(PLAYER::PLAYER_PED_ID(), 256) == 0)
			{
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 134, true);
			}
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1.5f);
		}
		POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
		func_54();
		CAM::_0x8910C24B7E0046EC();
		if (Global_1903071.f_35 == 1)
		{
			if (Global_1903071.f_5 > 1 && Global_1903071.f_5 != 12)
			{
				func_55(0);
			}
			if (Global_1903071.f_5 > 1)
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPRINT"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
			}
			if (Global_1903071.f_5 == 12)
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_REVEAL_HUD"), false);
			}
		}
		if ((Global_1903071.f_5 > 1 && Global_1903071.f_5 != 6) || func_56(uParam1, 4096))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
		}
		uParam0->f_24 = { Global_35 };
	}
}

void func_10(var uParam0, var uParam1)
{
	if (Global_1903071.f_35 == 1 && (((Global_1903071.f_5 == 4 || Global_1903071.f_5 == 6) || Global_1903071.f_5 == 7) || Global_1903071.f_5 == 10))
	{
		func_57(uParam0);
		func_58(uParam0);
		if (Global_1903071.f_5 == 7)
		{
			func_59(uParam0, uParam1);
		}
	}
	else
	{
		uParam0->f_12 = -99999f;
		uParam0->f_13 = -99999f;
		uParam0->f_14 = -99999f;
		uParam0->f_15 = -99999f;
		uParam0->f_16 = -99999f;
		uParam0->f_17 = -99999f;
	}
}

void func_11(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	var uVar1[15];
	var uVar17[15];
	var uVar33[15];
	int iVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	bool bVar53;
	int iVar54;
	int iVar55;

	func_60(uParam0, uParam2);
	uParam2->f_797 = 0;
	uParam2->f_798 = 0;
	iVar54 = 0;
	iVar54 = 0;
	while (iVar54 < 30)
	{
		bVar53 = ENTITY::IS_ENTITY_DEAD(uParam2->f_123[iVar54]);
		if (bVar53 == 0)
		{
			iVar0++;
			if (func_61(uParam2->f_247[iVar54]))
			{
				uVar33[uParam2->f_247[iVar54]]++;
				if (uParam2->f_340[iVar54] == 1)
				{
					uVar17[uParam2->f_247[iVar54]]++;
				}
				else
				{
					uVar1[uParam2->f_247[iVar54]]++;
				}
				if (func_62(uParam2->f_247[iVar54]))
				{
					iVar51++;
				}
				else
				{
					iVar52++;
				}
			}
			if (uParam2->f_1[iVar54] == 1)
			{
				iVar49++;
			}
			else
			{
				iVar50++;
			}
		}
		if ((uParam2->f_154[iVar54] >= 3 && uParam2->f_154[iVar54] < 10) && bVar53 == 1)
		{
			func_21(uParam1, uParam2, iVar54, 0, 0);
		}
		switch (uParam2->f_154[iVar54])
		{
			case 0:
				func_63(uParam2, iVar54);
				break;
			case 1:
				func_64(uParam0, uParam2, iVar54);
				break;
			case 2:
				func_65(uParam1, uParam2, iVar54);
				break;
			case 3:
				func_66(uParam1, uParam2, iVar54);
				break;
			case 4:
				func_67(uParam0, uParam1, uParam2, iVar54);
				break;
			case 5:
				func_68(uParam0, uParam1, uParam2, iVar54);
				break;
			case 6:
			case 7:
				func_69(uParam0, uParam1, uParam2, iVar54);
				break;
			case 8:
				func_70(uParam1, uParam2, iVar54);
				break;
			case 9:
				func_71(uParam2, iVar54);
				break;
			case 10:
				func_72(uParam1, uParam2, iVar54);
				break;
		}
		iVar54++;
	}
	uParam2->f_471 = iVar0;
	iVar55 = 0;
	iVar55 = 0;
	while (iVar55 < 15)
	{
		uParam2->f_472[iVar55] = uVar1[iVar55];
		uParam2->f_488[iVar55] = uVar17[iVar55];
		uParam2->f_504[iVar55] = uVar33[iVar55];
		iVar55++;
	}
	uParam2->f_520 = iVar49;
	uParam2->f_521 = iVar50;
	uParam2->f_522 = iVar51;
	uParam2->f_523 = iVar52;
	uParam2->f_799++;
	if (uParam2->f_799 >= 30)
	{
		uParam2->f_799 = 0;
	}
}

void func_12(var uParam0)
{
	if (!func_34(uParam0, 1))
	{
		return;
	}
	func_73();
	if (func_74(uParam0))
	{
		func_4(uParam0, 1);
	}
}

void func_13(var uParam0, var uParam1, var uParam2)
{
	if (func_44())
	{
		func_19(uParam0, uParam1, uParam2, 1);
		func_4(uParam0, 2);
	}
}

void func_14(var uParam0, var uParam1, var uParam2)
{
	if (func_75(uParam0, uParam1, uParam2))
	{
		func_19(uParam0, uParam1, uParam2, 0);
		func_4(uParam0, 3);
	}
	else
	{
		func_76(uParam0, uParam1, uParam2);
	}
}

void func_15(var uParam0)
{
	func_4(uParam0, 1);
}

void func_16(var uParam0, var uParam1, var uParam2, var uParam3)
{
	func_1(uParam0, uParam1, uParam2, uParam3);
}

void func_17(var uParam0, var uParam1)
{
	int iVar0;

	if ((!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && func_44()) && Global_1903071.f_35 == 1)
	{
		iVar0 = func_77(uParam0);
		if (func_78(uParam1, iVar0))
		{
			Global_1903071.f_5.f_7 = 0;
			Global_1903071.f_5.f_8 = func_79(uParam0, uParam1);
			Global_1903071.f_5.f_9 = 0f;
			Global_1903071.f_5.f_18 = uParam1->f_309[iVar0];
			if (uParam0->f_163 == 0)
			{
				Global_1903071.f_5.f_19 = uParam1->f_962;
			}
			else
			{
				Global_1903071.f_5.f_19 = uParam1->f_963;
			}
			Global_1903071.f_5.f_17 = 0f;
			Global_1903071.f_5.f_13 = 0f;
			Global_1903071.f_5.f_20 = 0f;
			Global_1903071.f_5.f_21 = 0f;
		}
		else if (func_80(uParam1, iVar0))
		{
			Global_1903071.f_5.f_7 = uParam1->f_123[iVar0];
			Global_1903071.f_5.f_8 = func_79(uParam0, uParam1);
			Global_1903071.f_5.f_9 = uParam0->f_202;
			Global_1903071.f_5.f_18 = uParam1->f_309[iVar0];
			if (func_81(uParam1, iVar0))
			{
				Global_1903071.f_5.f_17 = 1f;
			}
			else
			{
				Global_1903071.f_5.f_17 = 0f;
			}
			Global_1903071.f_5.f_13 = func_82(uParam0);
			Global_1903071.f_5.f_20 = func_83(uParam0);
			Global_1903071.f_5.f_21 = func_84(uParam0);
		}
		else
		{
			Global_1903071.f_5.f_7 = 0;
			Global_1903071.f_5.f_8 = 0f;
			Global_1903071.f_5.f_9 = 0f;
			Global_1903071.f_5.f_17 = 0f;
			Global_1903071.f_5.f_13 = 0f;
			Global_1903071.f_5.f_20 = 0f;
			Global_1903071.f_5.f_21 = 0f;
		}
		TASK::_0xF3735ACD11ACD501(PLAYER::PLAYER_PED_ID(), &(Global_1903071.f_5));
	}
}

void func_18(int* iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (iVar1 != PLAYER::PLAYER_ID())
		{
			if (((!MISC::IS_BIT_SET(*iParam0, iVar0) && func_85(iVar1, 1, 1)) && !ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(iVar1))) && func_86(PLAYER::GET_PLAYER_PED(iVar1)))
			{
				MISC::SET_BIT(iParam0, iVar0);
			}
			if (MISC::IS_BIT_SET(*iParam0, iVar0))
			{
				if (func_85(iVar1, 1, 1) && func_86(PLAYER::GET_PLAYER_PED(iVar1)))
				{
					func_87(&(iParam0->f_1[iVar0 /*47*/]), PLAYER::GET_PLAYER_PED(iVar1), iVar0);
				}
				else
				{
					MISC::CLEAR_BIT(iParam0, iVar0);
					func_88(&(iParam0->f_1[iVar0 /*47*/]), iVar0);
				}
			}
		}
		iVar0++;
	}
}

void func_19(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (iParam3 == 1)
	{
		func_89(13);
		func_90();
		func_91();
		func_92();
		func_93(&(uParam0->f_12));
		func_93(&(uParam0->f_15));
		if (MAP::IS_WAYPOINT_ACTIVE())
		{
			MAP::SET_WAYPOINT_OFF();
		}
		func_25(uParam1);
		func_94(1);
		func_95(1);
		func_96(uParam1, 1);
		func_97(uParam0);
		func_98();
		func_99(uParam0, 1);
		func_100(uParam0, uParam1);
		func_101();
		func_32();
		func_103(func_102());
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 174, true);
		VEHICLE::SET_RANDOM_TRAINS(false);
		uParam0->f_528 = TASK::_0x5952DFA38FA529FE();
	}
	else
	{
		func_104(0);
		func_105();
		func_106(0, 0);
		if (!func_107(uParam0->f_82[55]))
		{
			func_108();
		}
		func_40(&(uParam0->f_82), 1);
		func_47(uParam0);
		func_20(&(uParam0->f_19));
		func_109(uParam0, 0);
		func_99(uParam0, 0);
		func_95(0);
		func_110(uParam1);
		func_111(uParam0, uParam1, uParam2, 0, 0);
		func_25(uParam1);
		func_94(0);
		uParam0->f_24 = { Global_35 };
		uParam0->f_18 = 0;
		func_112(uParam0);
		func_113(uParam0);
		WATER::_0xA33F5069B0CB89B8();
		func_114(uParam1, 0);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 174, false);
		VEHICLE::SET_RANDOM_TRAINS(true);
	}
}

void func_20(var uParam0)
{
	if (uParam0->f_2 == 0)
	{
		return;
	}
	if (UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(uParam0->f_3))
	{
		UISTATEMACHINE::_UISTATEMACHINE_DESTROY(-1295789154);
		UISTATEMACHINE::_UIFLOWBLOCK_RELEASE(&(uParam0->f_3));
	}
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_4);
}

void func_21(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_123[iParam2]))
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(uParam1->f_123[iParam2]) || !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uParam1->f_123[iParam2], false))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam1->f_123[iParam2], true, true);
		}
		PED::SET_PED_RESET_FLAG(uParam1->f_123[iParam2], 169, false);
		ENTITY::SET_ENTITY_INVINCIBLE(uParam1->f_123[iParam2], false);
		PED::SET_PED_CONFIG_FLAG(uParam1->f_123[iParam2], 17, false);
		if (func_48(16))
		{
			ENTITY::SET_ENTITY_PROOFS(uParam1->f_123[iParam2], 0, false);
		}
	}
	DECORATOR::DECOR_REMOVE(uParam1->f_123[iParam2], "Fish_Prevent_Tasking");
	DECORATOR::DECOR_REMOVE(uParam1->f_123[iParam2], "Fish_Weight");
	iVar0 = func_115(uParam0, iParam2);
	if (iVar0 != -1)
	{
		func_43(uParam0, uParam1, -1);
	}
	if (uParam1->f_371[iParam2] == 1)
	{
		iParam3 = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_123[iParam2]))
	{
		if (iParam3 == 1 && iParam4 == 1)
		{
			func_116(&(uParam1->f_123[iParam2]));
		}
		else
		{
			func_117(&(uParam1->f_123[iParam2]), 1, 1, 1);
		}
	}
	if (uParam1->f_216[iParam2] != 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam1->f_216[iParam2]);
	}
	func_118(uParam1, iParam2);
}

void func_22(var uParam0)
{
	if (!AUDIO::_0x84848E1C0FC67DBB(uParam0->f_69))
	{
		AUDIO::_0x3210BCB36AF7621B(uParam0->f_69);
	}
}

void func_23(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!AUDIO::_0x84848E1C0FC67DBB(uParam0->f_62[iVar0]))
		{
			AUDIO::_0x3210BCB36AF7621B(uParam0->f_62[iVar0]);
		}
		iVar0++;
	}
}

void func_24(var uParam0)
{
	if (!AUDIO::_0x84848E1C0FC67DBB(uParam0->f_68))
	{
		AUDIO::_0x3210BCB36AF7621B(uParam0->f_68);
	}
}

void func_25(var uParam0)
{
	func_119(&(uParam0->f_8));
	uParam0->f_8 = 0;
}

void func_26(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		func_88(&(uParam0->f_1[iVar0 /*47*/]), iVar0);
		iVar0++;
	}
}

void func_27(var uParam0)
{
	HUD::_TEXT_DATABASE_DELETE("MGFSH");
	STREAMING::REMOVE_PTFX_ASSET();
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	AUDIO::_0x531A78D6BF27014B(*uParam0);
}

void func_28(int iParam0)
{
	if (iParam0 == 1)
	{
		POPULATION::_0x247F86595D396344(1493307657);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(953996926, 313480217, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(953996926, -1227780828, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(953996926, -1604520857, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(953996926, -1688703117, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(753476326, -1510975932, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(753476326, 168569674, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(753476326, -1725785792, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(753476326, -1732578984, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(1097366826, 611346020, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(1097366826, -1266430074, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(1097366826, 190319331, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(-1095210956, -1095210956, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(-1482332679, -1482332679, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(1404193962, 1404193962, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(-252502713, -252502713, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(207807619, 207807619, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(-1477335493, -1477335493, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(-1738466917, -1738466917, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(-1839535975, -1839535975, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(638269552, 638269552, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(-1881610067, -1563248673, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(-1881610067, 1729337451, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(-1881610067, 1031264513, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(809951616, -1563248673, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(809951616, 1729337451, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(809951616, 1031264513, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(718901240, -1563248673, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(718901240, -1387587743, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(718901240, 1119319615, 3);
	}
	else
	{
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(953996926, 313480217);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(953996926, -1227780828);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(953996926, -1604520857);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(953996926, -1688703117);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(753476326, -1510975932);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(753476326, 168569674);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(753476326, -1725785792);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(753476326, -1732578984);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(1097366826, 611346020);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(1097366826, -1266430074);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(1097366826, 190319331);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(-1095210956, -1095210956);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(-1482332679, -1482332679);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(1404193962, 1404193962);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(-252502713, -252502713);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(207807619, 207807619);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(-1477335493, -1477335493);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(-1738466917, -1738466917);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(-1839535975, -1839535975);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(638269552, 638269552);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(-1881610067, -1563248673);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(-1881610067, 1729337451);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(-1881610067, 1031264513);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(809951616, -1563248673);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(809951616, 1729337451);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(809951616, 1031264513);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(718901240, -1563248673);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(718901240, -1387587743);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(718901240, 1119319615);
		POPULATION::_0x324AB2A68AD8AEE5();
	}
}

void func_29(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 31;
	if (iParam1 == 1)
	{
		if (!func_34(uParam0, 8))
		{
			NETWORK::RESERVE_NETWORK_CLIENT_MISSION_PEDS(iVar0);
			PED::_0xED9582B3DA8F02B4(iVar0);
			func_35(uParam0, 8);
		}
	}
	else if (func_34(uParam0, 8))
	{
		PED::_0x7D4E70A67A651C71(iVar0);
		func_120(uParam0, 8);
	}
}

void func_30()
{
	func_50(1);
	Global_1903071.f_39 = 0;
	Global_1903071.f_41 = 0;
	Global_1903071.f_43 = 0;
	Global_1903071.f_36 = 0;
	Global_1903071.f_2 = 0;
	Global_1903071.f_5.f_6 = 0;
	Global_1903071.f_5.f_5 = 0;
}

void func_31(int iParam0)
{
	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_34, joaat("WEAPON_FISHINGROD"), 0, false))
	{
		return;
	}
	Global_1903071.f_4 = iParam0;
}

void func_32()
{
	func_121(4);
	func_50(2);
}

void func_33()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_34(var uParam0, int iParam1)
{
	return func_122(uParam0->f_11, iParam1);
}

void func_35(var uParam0, int iParam1)
{
	if (!func_34(uParam0, iParam1))
	{
		func_123(&(uParam0->f_11), iParam1);
	}
}

void func_36()
{
	if (CAM::IS_SCREEN_FADED_IN())
	{
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), false, 0, false, false);
	}
	else
	{
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true, 0, false, false);
	}
}

bool func_37(bool bParam0, bool bParam1)
{
	int iVar0;

	if (Global_1572887.f_12)
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (bParam1 && NETWORK::_0xF2CBC969C4F090C7())
		{
		}
		else if (bParam1 && NETWORK::NETWORK_IS_SESSION_ACTIVE())
		{
		}
		else if (bParam1 && Global_1572887 < 39)
		{
		}
		else
		{
			return true;
		}
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return true;
	}
	if (SCRIPTS::_0x9E4EF615E307FBBE())
	{
		switch (SCRIPTS::_0x54AE4FDEEFEAB77E())
		{
			case 0:
				return true;
			case 1:
				return true;
			case 2:
				if (!bParam0)
				{
					return true;
				}
				break;
			case 4:
				return true;
			case 3:
				return true;
			default:
				return true;
		}
	}
	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		if (SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0) == 1976253964)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_38(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

float func_39(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

void func_40(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 73)
	{
		iVar0 = iVar1;
		if (iParam1 == 1 || !func_124(iVar0))
		{
			func_125(uParam0, iVar0);
		}
		iVar1++;
	}
}

void func_41(var uParam0)
{
	*uParam0 = "MGFSH_Sounds";
	uParam0->f_1 = "Minigame_Fishing_Scenes";
	uParam0->f_2 = "None";
	uParam0->f_3 = uParam0->f_2;
	uParam0->f_4 = "Rod_Equipped";
	uParam0->f_5 = "Cast";
	uParam0->f_6 = "Reel_In";
	uParam0->f_7 = "Fish_On_Line";
	uParam0->f_8 = "Snap";
	uParam0->f_9 = "Caught";
}

void func_42(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		uParam0->f_57[iVar0] = AUDIO::GET_SOUND_ID();
		uParam0->f_62[iVar0] = AUDIO::GET_SOUND_ID();
		iVar0++;
	}
	uParam0->f_67 = AUDIO::GET_SOUND_ID();
	uParam0->f_68 = AUDIO::GET_SOUND_ID();
	uParam0->f_69 = AUDIO::GET_SOUND_ID();
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		uParam0->f_70[iVar0] = AUDIO::GET_SOUND_ID();
		iVar0++;
	}
}

void func_43(var uParam0, var uParam1, int iParam2)
{
	if (func_77(uParam0) != iParam2)
	{
		uParam0->f_2 = iParam2;
		if (func_126(iParam2) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_123[iParam2]))
		{
			Global_1903071.f_37 = uParam1->f_247[iParam2];
			Global_1903071.f_38 = uParam1->f_278[iParam2];
		}
		else
		{
			Global_1903071.f_38 = 0f;
		}
	}
}

bool func_44()
{
	int iVar0;
	bool bVar1;

	bVar1 = WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true, 0, true);
	return (bVar1 == 1 && iVar0 == joaat("WEAPON_FISHINGROD"));
}

void func_45(var uParam0)
{
	if (((func_127() != 0 || func_128() != 0) || func_129() != 0) || func_130() != 0)
	{
		func_93(&(uParam0->f_12));
	}
	if (func_131())
	{
		func_93(&(uParam0->f_15));
	}
}

bool func_46()
{
	return Global_1896738.f_382;
}

void func_47(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		func_132(uParam0, iVar0);
		iVar0++;
	}
}

bool func_48(int iParam0)
{
	return func_122(Global_1903071.f_1, iParam0);
}

void func_49(int iParam0)
{
	if (func_48(8))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1903071.f_47, iParam0);
	}
}

void func_50(int iParam0)
{
	if (func_48(iParam0))
	{
		func_133(&(Global_1903071.f_1), iParam0);
	}
}

bool func_51(var uParam0)
{
	return func_134(*uParam0, 1);
}

int func_52(var uParam0)
{
	if (!func_51(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_1 * 1000f));
	}
	if (func_135(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000f));
	}
	return (func_136() - BUILTIN::ROUND((uParam0->f_1 * 1000f)));
}

void func_53(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_54()
{
	Global_1904651.f_8685 = 1;
}

void func_55(bool bParam0)
{
	if (bParam0)
	{
		func_137(4);
	}
	func_137(2);
	MISC::SET_BIT(&(Global_1957959.f_1), 0);
}

bool func_56(var uParam0, int iParam1)
{
	return func_122(uParam0->f_1, iParam1);
}

void func_57(var uParam0)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	bool bVar5;
	bool bVar6;

	if (ENTITY::DOES_ENTITY_EXIST(func_138()))
	{
		vVar2 = { func_139() };
		bVar5 = WATER::TEST_VERTICAL_PROBE_AGAINST_ALL_WATER(func_140(vVar2, 1092616192 /* Float: 10f */), 0, &fVar0);
		bVar6 = MISC::GET_GROUND_Z_FOR_3D_COORD(func_140(vVar2, 1092616192 /* Float: 10f */), &fVar1, false);
		if (bVar5 == 1 && bVar6 == 1)
		{
			uParam0->f_12 = (vVar2.z - fVar0);
			uParam0->f_13 = (fVar0 - fVar1);
		}
		else
		{
			uParam0->f_12 = -99999f;
			uParam0->f_13 = -99999f;
		}
	}
}

void func_58(var uParam0)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	bool bVar5;
	bool bVar6;

	if (ENTITY::DOES_ENTITY_EXIST(func_141()))
	{
		vVar2 = { func_142() };
		bVar5 = WATER::TEST_VERTICAL_PROBE_AGAINST_ALL_WATER(func_140(vVar2, 1092616192 /* Float: 10f */), 0, &fVar0);
		bVar6 = MISC::GET_GROUND_Z_FOR_3D_COORD(func_140(vVar2, 1092616192 /* Float: 10f */), &fVar1, false);
		if (bVar5 == 1 && bVar6 == 1)
		{
			uParam0->f_14 = (vVar2.z - fVar0);
			uParam0->f_15 = (fVar0 - fVar1);
		}
		else
		{
			uParam0->f_14 = -99999f;
			uParam0->f_15 = -99999f;
		}
	}
}

void func_59(var uParam0, var uParam1)
{
	vector3 vVar0;
	int iVar3;
	float fVar4;
	float fVar5;
	bool bVar6;
	bool bVar7;

	iVar3 = func_77(uParam0);
	if (func_126(iVar3) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_123[iVar3]))
	{
		vVar0 = { func_143(uParam1, iVar3) };
	}
	if (!func_38(vVar0))
	{
		bVar6 = WATER::TEST_VERTICAL_PROBE_AGAINST_ALL_WATER(func_140(vVar0, 1092616192 /* Float: 10f */), 0, &fVar4);
		bVar7 = MISC::GET_GROUND_Z_FOR_3D_COORD(func_140(vVar0, 1092616192 /* Float: 10f */), &fVar5, false);
		if (bVar6 == 1 && bVar7 == 1)
		{
			uParam0->f_16 = (vVar0.z - fVar4);
			uParam0->f_17 = (fVar4 - fVar5);
		}
		else
		{
			uParam0->f_16 = -99999f;
			uParam0->f_17 = -99999f;
		}
	}
}

void func_60(var uParam0, var uParam1)
{
	int iVar0;

	if (func_34(uParam0, 4))
	{
		return;
	}
	func_35(uParam0, 4);
	uParam1->f_470 = 54.25f;
	func_144(&(uParam1->f_800));
	func_93(&(uParam1->f_436));
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		func_118(uParam1, iVar0);
		iVar0++;
	}
}

bool func_61(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 14);
}

bool func_62(int iParam0)
{
	if (((((iParam0 == 0 || iParam0 == 1) || iParam0 == 2) || iParam0 == 9) || iParam0 == 10) || iParam0 == 11)
	{
		return true;
	}
	return false;
}

void func_63(var uParam0, int iParam1)
{
	func_145(uParam0, iParam1, 2);
}

void func_64(var uParam0, var uParam1, int iParam2)
{
	if (func_146(uParam0, uParam1, iParam2))
	{
		func_145(uParam1, iParam2, 3);
	}
}

void func_65(var uParam0, var uParam1, int iParam2)
{
	if (func_147(uParam0, uParam1, iParam2))
	{
		func_145(uParam1, iParam2, 3);
	}
	else if (func_148(uParam1, iParam2) && func_149(uParam1))
	{
		func_93(&(uParam1->f_436));
		func_145(uParam1, iParam2, 1);
	}
}

void func_66(var uParam0, var uParam1, int iParam2)
{
	if (func_150(uParam1, iParam2))
	{
		func_151(uParam0, uParam1, iParam2);
	}
}

void func_67(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (!func_148(uParam2, iParam3) || !func_152(uParam2, iParam3))
	{
		return;
	}
	if (func_153(uParam1, &(uParam2->f_123[iParam3])))
	{
		func_145(uParam2, iParam3, 10);
	}
	else if (func_154(uParam1, uParam2, iParam3))
	{
		func_155(uParam0, uParam1, uParam2, iParam3);
	}
	else if (((!func_156(uParam2->f_123[iParam3], 1139527981) && !func_156(uParam2->f_123[iParam3], 518218985)) && !func_156(uParam2->f_123[iParam3], -773337285)) && !PED::IS_PED_FLEEING(uParam2->f_123[iParam3]))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam2->f_123[iParam3], false);
		TASK::TASK_ANIMAL_UNALERTED(uParam2->f_123[iParam3], -1, 0, 0, 0);
	}
}

void func_68(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_115(uParam1, iParam3);
	if (iVar0 == -1)
	{
		func_155(uParam0, uParam1, uParam2, iParam3);
	}
	else if (iVar0 != -1 && !func_156(uParam2->f_123[iParam3], 1227113341))
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(uParam2->f_123[iParam3]) || !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uParam2->f_123[iParam3], false))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam2->f_123[iParam3], true, true);
		}
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam2->f_123[iParam3], true);
		TASK::CLEAR_PED_TASKS(uParam2->f_123[iParam3], true, false);
		TASK::TASK_GO_TO_ENTITY(uParam2->f_123[iParam3], func_141(), -1, 0f, 2f, 0f, 0);
	}
}

void func_69(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	PED::SET_PED_RESET_FLAG(uParam2->f_123[iParam3], 64, true);
	uParam1->f_224++;
	iVar0 = func_115(uParam1, iParam3);
	if (iVar0 != -1 && Global_1903071.f_5 == 7)
	{
		func_157(uParam0, uParam1, uParam2, iParam3);
		func_158(uParam1, uParam2, iParam3);
		func_159(uParam0, uParam1, uParam2, iParam3);
		func_160(uParam0, uParam1, uParam2, iParam3);
	}
}

void func_70(var uParam0, var uParam1, int iParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(uParam1->f_123[iParam2]))
	{
		func_145(uParam1, iParam2, 10);
		return;
	}
	if ((uParam1->f_439[iParam2] == 0 && func_161(&(uParam1->f_524[iParam2 /*3*/])) >= 6f) || (uParam1->f_439[iParam2] == 1 && func_161(&(uParam1->f_524[iParam2 /*3*/])) >= 20f))
	{
		TASK::CLEAR_PED_TASKS(uParam1->f_123[iParam2], true, false);
		if (ENTITY::_0x88AD6CC10D8D35B2(uParam1->f_123[iParam2]) || ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uParam1->f_123[iParam2], false))
		{
			DECORATOR::DECOR_SET_BOOL(uParam1->f_123[iParam2], "Fish_Prevent_Tasking", false);
		}
		func_151(uParam0, uParam1, iParam2);
	}
	else if (!func_51(&(uParam1->f_615[iParam2 /*3*/])) || func_52(&(uParam1->f_615[iParam2 /*3*/])) >= 250)
	{
		func_93(&(uParam1->f_615[iParam2 /*3*/]));
		if ((!func_156(uParam1->f_123[iParam2], 518218985) && !func_156(uParam1->f_123[iParam2], -773337285)) && !PED::IS_PED_FLEEING(uParam1->f_123[iParam2]))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam1->f_123[iParam2], true);
			TASK::CLEAR_PED_TASKS(uParam1->f_123[iParam2], true, false);
			if (uParam1->f_439[iParam2] == 1)
			{
				TASK::TASK_SMART_FLEE_COORD(uParam1->f_123[iParam2], uParam1->f_706[iParam2 /*3*/], 40f, 20000, 8, 1077936128);
			}
			else
			{
				TASK::TASK_SMART_FLEE_COORD(uParam1->f_123[iParam2], uParam1->f_706[iParam2 /*3*/], 10f, 6000, 8, 1077936128);
			}
		}
	}
}

void func_71(var uParam0, int iParam1)
{
	if (func_156(uParam0->f_123[iParam1], 1227113341))
	{
		TASK::CLEAR_PED_TASKS(uParam0->f_123[iParam1], true, false);
	}
	PED::SET_PED_RESET_FLAG(uParam0->f_123[iParam1], 64, true);
}

void func_72(var uParam0, var uParam1, int iParam2)
{
	if (func_148(uParam1, iParam2))
	{
		func_21(uParam0, uParam1, iParam2, 1, 0);
	}
}

void func_73()
{
	HUD::_TEXT_DATABASE_REQUEST("MGFSH");
	STREAMING::REQUEST_PTFX_ASSET();
}

bool func_74(var uParam0)
{
	if (!func_34(uParam0, 1))
	{
		return false;
	}
	if ((!MISC::IS_STRING_NULL_OR_EMPTY("MGFSH") && HUD::_DOES_TEXT_DATABASE_EXIST("MGFSH")) && !HUD::_TEXT_DATABASE_HAS_LOADED("MGFSH"))
	{
		return false;
	}
	if (!STREAMING::HAS_PTFX_ASSET_LOADED())
	{
		return false;
	}
	if (!AUDIO::_0xD9130842D7226045(*uParam0, 1))
	{
		return false;
	}
	if (!PED::_0x5E420FF293EE5472())
	{
	}
	return true;
}

bool func_75(var uParam0, var uParam1, var uParam2)
{
	if (!func_44())
	{
		func_162(uParam1, uParam2);
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(func_163()))
	{
		return true;
	}
	if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0))
	{
		func_162(uParam1, uParam2);
		if (func_44())
		{
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), false, 0, false, false);
		}
		return true;
	}
	if (Global_1903071.f_3 == 0)
	{
		if (func_44())
		{
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), false, 0, false, false);
		}
		return true;
	}
	if (Global_1940144.f_25 == 1)
	{
		Global_1940144.f_25 = 0;
		func_93(&(uParam0->f_79));
		if (func_44())
		{
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), false, 0, false, false);
		}
		return true;
	}
	return false;
}

void func_76(var uParam0, var uParam1, var uParam2)
{
	func_164(uParam1, uParam2);
	switch (Global_1903071.f_5)
	{
		case 0:
			func_165(uParam0);
			break;
		case 1:
			func_166(uParam0, uParam1, uParam2);
			break;
		case 2:
			func_167(uParam0, uParam1, uParam2);
			break;
		case 3:
			func_168(uParam0);
			break;
		case 4:
			func_169(uParam0, uParam1);
			break;
		case 5:
			func_170();
			break;
		case 6:
			func_171(uParam0, uParam1, uParam2);
			break;
		case 7:
			func_172(uParam0, uParam1, uParam2);
			break;
		case 8:
			func_173(uParam0);
			break;
		case 9:
			func_174(uParam0, uParam1, uParam2);
			break;
		case 10:
			func_175(uParam0, uParam1, uParam2);
			break;
		case 11:
			func_176(uParam0, uParam1, uParam2);
			break;
		case 12:
			func_177(uParam0, uParam1, uParam2);
			break;
		case 13:
			func_178(uParam0);
			break;
	}
	HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(9);
	func_99(uParam0, 1);
	func_179(uParam0);
	if (PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_TOGGLE_HOLSTER")))
	{
		func_180(32768, 1);
	}
	if (!func_181())
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
	}
}

int func_77(var uParam0)
{
	if (uParam0->f_2 >= 30)
	{
	}
	return uParam0->f_2;
}

bool func_78(var uParam0, int iParam1)
{
	if (func_182(1))
	{
		return false;
	}
	if ((Global_1903071.f_5 == 6 && func_126(iParam1)) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_123[iParam1]))
	{
		return true;
	}
	return false;
}

float func_79(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = func_77(uParam0);
	if (!func_126(iVar0))
	{
		return 0f;
	}
	return (uParam1->f_278[iVar0] / uParam1->f_470);
}

bool func_80(var uParam0, int iParam1)
{
	if (((Global_1903071.f_5 == 7 || Global_1903071.f_5 == 12) && func_126(iParam1)) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_123[iParam1]))
	{
		return true;
	}
	return false;
}

bool func_81(var uParam0, int iParam1)
{
	return uParam0->f_154[iParam1] == 6;
}

float func_82(var uParam0)
{
	return func_183((BUILTIN::TO_FLOAT(uParam0->f_172) / 200f), 0f, 1f);
}

float func_83(var uParam0)
{
	return func_183((BUILTIN::TO_FLOAT(uParam0->f_173) / 200f), 0f, 1f);
}

float func_84(var uParam0)
{
	return func_183((BUILTIN::TO_FLOAT(uParam0->f_174) / 200f), 0f, 1f);
}

bool func_85(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return false;
	}
	if (bParam1)
	{
		if (!PLAYER::IS_PLAYER_PLAYING(iParam0))
		{
			return false;
		}
	}
	if (bParam2)
	{
		if (NETWORK::NETWORK_IS_IN_SESSION())
		{
			iVar0 = iParam0;
			if (iVar0 < 0 || iVar0 >= 32)
			{
				return false;
			}
			if (!Global_1051215.f_1[iVar0])
			{
				return false;
			}
		}
	}
	return true;
}

bool func_86(int iParam0)
{
	int iVar0;
	bool bVar1;

	bVar1 = WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, true, 0, true);
	return (bVar1 == 1 && iVar0 == joaat("WEAPON_FISHINGROD"));
}

void func_87(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_30 = TASK::_0xF3735ACD11ACD500(iParam1, uParam0);
	func_184(uParam0, iParam1);
	switch (*uParam0)
	{
		case 0:
			func_185(uParam0, iParam1, iParam2);
			break;
		case 1:
			func_186(uParam0, iParam1, iParam2);
			break;
		case 2:
			func_187(uParam0, iParam1, iParam2);
			break;
		case 3:
			func_188(uParam0, iParam1, iParam2);
			break;
		case 4:
			func_189(uParam0, iParam1, iParam2);
			break;
		case 5:
			func_190(uParam0, iParam1, iParam2);
			break;
		case 6:
			func_191(uParam0, iParam1, iParam2);
			break;
		case 7:
			func_192(uParam0, iParam1, iParam2);
			break;
		case 8:
			func_193(uParam0, iParam1, iParam2);
			break;
		case 9:
			func_194(uParam0, iParam1, iParam2);
			break;
		case 10:
			func_195(uParam0, iParam1, iParam2);
			break;
		case 11:
			func_196(uParam0, iParam1, iParam2);
			break;
		case 12:
			func_197(uParam0, iParam1, iParam2);
			break;
		case 13:
			func_198(uParam0, iParam1, iParam2);
			break;
	}
}

void func_88(var uParam0, int iParam1)
{
	uParam0->f_30 = 0;
	func_199(uParam0);
}

void func_89(int iParam0)
{
	int iVar0;
	int iVar1;

	if ((Global_1900688.f_1 == 2 || Global_1900688.f_1 == 5) || Global_1900688.f_1 == 3)
	{
		return;
	}
	iVar0 = 0;
	if (func_200() != -1)
	{
		iVar0 = 1;
	}
	iVar1 = func_201(Global_1893587.f_2);
	Global_1900688.f_1 = 3;
	Global_1900688.f_2 = 0;
	Global_1900688.f_7 = iVar0;
	Global_1900688.f_8 = iParam0;
	Global_1900688.f_9 = iVar1;
	if (Global_1900688.f_9 != -1 && Global_1900688.f_9 != 0)
	{
		func_202(Global_1900688.f_7, Global_1900688.f_8, Global_1900688.f_9);
	}
	else if (Global_1900688.f_11 != -1)
	{
		func_202(Global_1900688.f_7, Global_1900688.f_8, Global_1900688.f_11);
	}
}

void func_90()
{
	int iVar0;
	char* sVar1;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		sVar1 = func_203(iVar0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			DECORATOR::DECOR_SET_FLOAT(PLAYER::PLAYER_PED_ID(), sVar1, 0f);
		}
		iVar0++;
	}
}

void func_91()
{
	int iVar0;

	iVar0 = func_204();
	if (func_205(iVar0))
	{
		func_206(-1, -1, iVar0, 1, -1, 0);
	}
}

void func_92()
{
	Global_1903071.f_39 = 0;
	Global_1903071.f_41 = 0;
	Global_1903071.f_43 = 0;
	Global_1903071.f_36 = 0;
}

void func_93(var uParam0)
{
	func_207(uParam0, 0f);
}

void func_94(int iParam0)
{
	if (iParam0 == 1)
	{
		PED::SET_RAGDOLL_BLOCKING_FLAGS(PLAYER::PLAYER_PED_ID(), 16);
		PED::SET_RAGDOLL_BLOCKING_FLAGS(PLAYER::PLAYER_PED_ID(), 8192);
		PED::SET_RAGDOLL_BLOCKING_FLAGS(PLAYER::PLAYER_PED_ID(), 16384);
		PED::SET_RAGDOLL_BLOCKING_FLAGS(PLAYER::PLAYER_PED_ID(), 32768);
		PED::SET_RAGDOLL_BLOCKING_FLAGS(PLAYER::PLAYER_PED_ID(), 262144);
	}
	else
	{
		PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(PLAYER::PLAYER_PED_ID(), 16);
		PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(PLAYER::PLAYER_PED_ID(), 8192);
		PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(PLAYER::PLAYER_PED_ID(), 16384);
		PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(PLAYER::PLAYER_PED_ID(), 32768);
		PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(PLAYER::PLAYER_PED_ID(), 262144);
	}
}

void func_95(int iParam0)
{
	char* sVar0;

	if (!MISC::GET_MISSION_FLAG())
	{
		if (iParam0 == 1)
		{
			sVar0 = "MMFSH";
			MISC::_0x1096603B519C905F(sVar0);
		}
		else
		{
			MISC::_0x1096603B519C905F("");
		}
	}
}

void func_96(var uParam0, int iParam1)
{
	if (func_56(uParam0, iParam1))
	{
		func_133(&(uParam0->f_1), iParam1);
	}
}

void func_97(var uParam0)
{
	if (!MISC::ARE_STRINGS_EQUAL(uParam0->f_3, uParam0->f_4))
	{
		uParam0->f_3 = uParam0->f_4;
		AUDIO::_0x6339C1EA3979B5F7(uParam0->f_3, uParam0->f_1);
	}
}

void func_98()
{
	if (!func_208(0) || func_209())
	{
		if ((((!func_210(joaat("UPGRADE_FSH_BAIT_BREAD"), 1) || !func_210(joaat("UPGRADE_FSH_BAIT_CORN"), 1)) || !func_210(joaat("UPGRADE_FSH_BAIT_CHEESE"), 1)) || !func_210(joaat("UPGRADE_FSH_LURE_NONE"), 1)) || !func_210(joaat("UPGRADE_FSH_BAIT_NONE"), 1))
		{
			func_211(2047322594, 1, 255, 0, 0);
		}
		func_212();
	}
}

void func_99(var uParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		if (uParam0->f_71 == 0)
		{
			uParam0->f_71 = 1;
			HUD::_HIDE_HUD_COMPONENT(100665617);
		}
	}
	else if (uParam0->f_71 == 1)
	{
		uParam0->f_71 = 0;
		HUD::_DISPLAY_HUD_COMPONENT(100665617);
	}
}

void func_100(var uParam0, var uParam1)
{
	if (func_213(Global_39.f_5803) && func_210(Global_39.f_5803, 1))
	{
		func_214(uParam0, uParam1, Global_39.f_5803, 0, 1);
	}
	else
	{
		func_214(uParam0, uParam1, joaat("UPGRADE_FSH_BAIT_NONE"), 0, 1);
	}
}

void func_101()
{
	char* sVar0;
	char[] cVar1[8];
	int iVar2;

	if (func_48(8))
	{
		sVar0 = func_216(func_215(Global_39.f_5803), joaat("COLOR_PURE_WHITE"));
		if (func_213(Global_39.f_5803))
		{
			StringIntConCat(&cVar1, func_217(Global_39.f_5803, 0, 0, 0), 8);
		}
		iVar2 = -973584697;
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1903071.f_48, sVar0);
		if (func_218(Global_39.f_5803))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1903071.f_49, "");
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1903071.f_49, &cVar1);
		}
		if (func_219(Global_39.f_5803) || func_220(Global_39.f_5803))
		{
			iVar2 = 1048406616;
		}
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1903071.f_50, iVar2);
	}
}

int func_102()
{
	return 1;
}

void func_103(int iParam0)
{
	if (func_48(8))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1903071.f_51, iParam0);
	}
}

void func_104(bool bParam0)
{
	int iVar0;

	if (Global_1900688.f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_200() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1900688.f_2 == 4 && Global_1900688.f_12 != Global_1900688.f_13) && !bParam0)
	{
		Global_1900688.f_1 = Global_1900688.f_2;
		Global_1900688.f_12 = Global_1900688.f_13;
		func_221(iVar0, Global_1900688.f_12);
	}
	else
	{
		Global_1900688.f_1 = 0;
		Global_1900688.f_7 = iVar0;
		Global_1900688.f_8 = func_222();
		Global_1900688.f_9 = func_201(Global_1893587.f_2);
		Global_1900688.f_11 = func_223(Global_1896622.f_41);
		if (Global_1900688.f_9 != -1 && Global_1900688.f_9 != 0)
		{
			func_202(Global_1900688.f_7, Global_1900688.f_8, Global_1900688.f_9);
		}
		else if (Global_1900688.f_11 != -1)
		{
			func_202(Global_1900688.f_7, Global_1900688.f_8, Global_1900688.f_11);
		}
		else
		{
			func_202(Global_1900688.f_7, Global_1900688.f_8, Global_1900688.f_9);
		}
	}
	Global_1900688.f_2 = 0;
}

void func_105()
{
	int iVar0;
	char* sVar1;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		sVar1 = func_203(iVar0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			DECORATOR::DECOR_REMOVE(PLAYER::PLAYER_PED_ID(), sVar1);
		}
		iVar0++;
	}
}

void func_106(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 <= 0 || iParam1 <= 0)
	{
		PAD::SET_PAD_SHAKE(0, 0, 0);
		PAD::_0x14D29BB12D47F68C(0, 0, 0, 0, 0);
	}
	else
	{
		PAD::SET_PAD_SHAKE(0, iParam0, iParam1);
		iVar0 = BUILTIN::ROUND((BUILTIN::TO_FLOAT(iParam1) / 2f));
		PAD::_0x14D29BB12D47F68C(0, 0, 0, iParam0, func_224(iVar0, 0, 255));
	}
}

bool func_107(int iParam0)
{
	int iVar0;

	iVar0 = 6;
	if (func_225(iParam0))
	{
		iVar0 = UIFEED::_0x59FA676177DBE4C9(iParam0);
	}
	return iVar0 != 6;
}

void func_108()
{
	func_226(1);
}

void func_109(var uParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		if (uParam0->f_72 == 0)
		{
			uParam0->f_72 = 1;
			HUD::_HIDE_HUD_COMPONENT(-859384195);
		}
	}
	else if (uParam0->f_72 == 1)
	{
		uParam0->f_72 = 0;
		HUD::_DISPLAY_HUD_COMPONENT(-859384195);
	}
}

void func_110(var uParam0)
{
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam0->f_18))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(uParam0->f_18, false);
	}
}

void func_111(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	int iVar0;

	iVar0 = func_77(uParam1);
	if (func_126(iVar0))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(uParam2->f_123[iVar0], false);
		PED::SET_PED_CONFIG_FLAG(uParam2->f_123[iVar0], 17, false);
		uParam2->f_706[iVar0 /*3*/] = { Global_35 };
		func_155(uParam0, uParam1, uParam2, iVar0);
		if (iParam4 == 1)
		{
			uParam2->f_402[iVar0] = uParam1->f_202;
		}
	}
	else
	{
		func_227(uParam0, uParam1);
		func_228(512);
	}
	func_22(uParam1);
	func_23(uParam1);
	if (iParam3 == 1)
	{
		func_229(uParam0, uParam1, uParam2, 2);
	}
	uParam1->f_167 = 0;
}

void func_112(var uParam0)
{
	if (!MISC::ARE_STRINGS_EQUAL(uParam0->f_3, uParam0->f_2))
	{
		uParam0->f_3 = uParam0->f_2;
		AUDIO::_0x9428447DED71FC7E(uParam0->f_1);
	}
}

void func_113(var uParam0)
{
	if (!func_34(uParam0, 32))
	{
		return;
	}
	if (func_230("BOB_FISHING_STOP", 0, 1))
	{
		func_120(uParam0, 32);
	}
}

void func_114(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		iVar1 = iVar0;
		func_231(uParam0, iVar1);
		if (iParam1 == 1)
		{
			func_232(uParam0, iVar1, 0);
		}
		else
		{
			func_232(uParam0, iVar1, 2);
		}
		func_53(&(uParam0->f_109[iVar0 /*3*/]));
		iVar0++;
	}
}

int func_115(var uParam0, int iParam1)
{
	if (func_77(uParam0) == iParam1)
	{
		return 0;
	}
	return -1;
}

void func_116(int* iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (ENTITY::_0xA7E51B53309EAC97(*iParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, false);
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, false))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, 0);
	}
	PED::DELETE_PED(iParam0);
}

void func_117(int* iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (ENTITY::_0xA7E51B53309EAC97(*iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, false))
	{
		return;
	}
	if (!PED::IS_PED_INJURED(*iParam0))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, 0);
		if (!bParam3)
		{
			TASK::CLEAR_PED_SECONDARY_TASK(*iParam0);
		}
		PED::SET_PED_KEEP_TASK(*iParam0, bParam1);
		if (bParam2)
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
		}
	}
	ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
}

void func_118(var uParam0, int iParam1)
{
	func_145(uParam0, iParam1, 0);
	uParam0->f_216[iParam1] = 0;
	uParam0->f_247[iParam1] = 15;
	uParam0->f_278[iParam1] = 0f;
	uParam0->f_309[iParam1] = 0;
	uParam0->f_340[iParam1] = 0;
	uParam0->f_371[iParam1] = 0;
	uParam0->f_32[iParam1 /*3*/] = { 0f, 0f, 0f };
}

void func_119(int* iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, false);
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, false))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(*iParam0))
	{
		ENTITY::DETACH_ENTITY(*iParam0, true, true);
	}
	OBJECT::DELETE_OBJECT(iParam0);
}

void func_120(var uParam0, int iParam1)
{
	if (func_34(uParam0, iParam1))
	{
		func_133(&(uParam0->f_11), iParam1);
	}
}

void func_121(int iParam0)
{
	if (!func_48(iParam0))
	{
		func_123(&(Global_1903071.f_1), iParam0);
	}
}

bool func_122(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_123(var uParam0, int iParam1)
{
	func_233(uParam0, iParam1);
}

bool func_124(int iParam0)
{
	if (((((((((((((((((((((((((((((((((((iParam0 == 59 || iParam0 == 60) || iParam0 == 61) || iParam0 == 62) || iParam0 == 63) || iParam0 == 64) || iParam0 == 65) || iParam0 == 66) || iParam0 == 67) || iParam0 == 68) || iParam0 == 69) || iParam0 == 70) || iParam0 == 71) || iParam0 == 22) || iParam0 == 23) || iParam0 == 25) || iParam0 == 27) || iParam0 == 29) || iParam0 == 37) || iParam0 == 30) || iParam0 == 31) || iParam0 == 32) || iParam0 == 33) || iParam0 == 34) || iParam0 == 41) || iParam0 == 42) || iParam0 == 43) || iParam0 == 45) || iParam0 == 46) || iParam0 == 47) || iParam0 == 72) || iParam0 == 49) || iParam0 == 39) || iParam0 == 55) || iParam0 == 57) || iParam0 == 56)
	{
		return true;
	}
	return false;
}

void func_125(var uParam0, int iParam1)
{
	if ((*uParam0)[iParam1] != 0)
	{
		(*uParam0)[iParam1] = 0;
		uParam0->f_74[iParam1] = 0;
	}
}

bool func_126(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 30);
}

int func_127()
{
	return BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(0, joaat("INPUT_MINIGAME_FISHING_LEFT_AXIS_X")) * 127f));
}

int func_128()
{
	return BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(0, joaat("INPUT_MINIGAME_FISHING_LEFT_AXIS_Y")) * 127f));
}

int func_129()
{
	return BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(0, joaat("INPUT_MINIGAME_FISHING_RIGHT_AXIS_X")) * 127f));
}

int func_130()
{
	return BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(0, joaat("INPUT_MINIGAME_FISHING_RIGHT_AXIS_Y")) * 127f));
}

bool func_131()
{
	return Global_1903071.f_5.f_4 > 0f;
}

void func_132(var uParam0, int iParam1)
{
	if (iParam1 == 3)
	{
		if (HUD::_UIPROMPT_IS_VALID(uParam0->f_70))
		{
			HUD::_UIPROMPT_DELETE(uParam0->f_70);
		}
	}
	else if (func_234(uParam0->f_60[iParam1]))
	{
		func_235(&(uParam0->f_60[iParam1]), 0, 1);
	}
}

void func_133(var uParam0, int iParam1)
{
	func_236(uParam0, iParam1);
}

bool func_134(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_135(var uParam0)
{
	return func_134(*uParam0, 2);
}

int func_136()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

void func_137(int iParam0)
{
	Global_1903136.f_302 = (Global_1903136.f_302 || iParam0);
}

int func_138()
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_1903071.f_5.f_11) && Global_1903071.f_35 == 1)
	{
		return Global_1903071.f_5.f_11;
	}
	return 0;
}

Vector3 func_139()
{
	if (ENTITY::DOES_ENTITY_EXIST(func_138()))
	{
		return ENTITY::GET_ENTITY_COORDS(func_138(), true, false);
	}
	return 0f, 0f, 0f;
}

Vector3 func_140(vector3 vParam0, float fParam3)
{
	vector3 vVar0;

	vVar0 = { vParam0 };
	vVar0.f_2 = (vVar0.z + fParam3);
	return vVar0;
}

int func_141()
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_1903071.f_5.f_12) && Global_1903071.f_35 == 1)
	{
		return Global_1903071.f_5.f_12;
	}
	return 0;
}

Vector3 func_142()
{
	if (ENTITY::DOES_ENTITY_EXIST(func_141()))
	{
		return ENTITY::GET_ENTITY_COORDS(func_141(), true, false);
	}
	return 0f, 0f, 0f;
}

Vector3 func_143(var uParam0, int iParam1)
{
	if (func_126(iParam1) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_123[iParam1]))
	{
		return ENTITY::GET_ENTITY_COORDS(uParam0->f_123[iParam1], true, false);
	}
	return 0f, 0f, 0f;
}

void func_144(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		(*uParam0)[iVar0 /*10*/] = 1;
		(uParam0[iVar0 /*10*/])->f_1[0] = 1;
		iVar0++;
	}
	(*uParam0)[0 /*10*/] = 4;
	(uParam0[0 /*10*/])->f_1[0] = 0;
	(uParam0[0 /*10*/])->f_1[1] = 1;
	(uParam0[0 /*10*/])->f_1[2] = 0;
	(uParam0[0 /*10*/])->f_1[3] = 1;
	(*uParam0)[1 /*10*/] = 5;
	(uParam0[1 /*10*/])->f_1[0] = 0;
	(uParam0[1 /*10*/])->f_1[1] = 0;
	(uParam0[1 /*10*/])->f_1[2] = 0;
	(uParam0[1 /*10*/])->f_1[3] = 1;
	(uParam0[1 /*10*/])->f_1[4] = 1;
	(*uParam0)[2 /*10*/] = 4;
	(uParam0[2 /*10*/])->f_1[0] = 1;
	(uParam0[2 /*10*/])->f_1[1] = 0;
	(uParam0[2 /*10*/])->f_1[2] = 0;
	(uParam0[2 /*10*/])->f_1[3] = 1;
	(*uParam0)[3 /*10*/] = 6;
	(uParam0[3 /*10*/])->f_1[0] = 0;
	(uParam0[3 /*10*/])->f_1[1] = 0;
	(uParam0[3 /*10*/])->f_1[2] = 0;
	(uParam0[3 /*10*/])->f_1[3] = 1;
	(uParam0[3 /*10*/])->f_1[4] = 1;
	(uParam0[3 /*10*/])->f_1[5] = 1;
	(*uParam0)[4 /*10*/] = 8;
	(uParam0[4 /*10*/])->f_1[0] = 0;
	(uParam0[4 /*10*/])->f_1[1] = 0;
	(uParam0[4 /*10*/])->f_1[2] = 0;
	(uParam0[4 /*10*/])->f_1[3] = 0;
	(uParam0[4 /*10*/])->f_1[4] = 1;
	(uParam0[4 /*10*/])->f_1[5] = 1;
	(uParam0[4 /*10*/])->f_1[6] = 1;
	(uParam0[4 /*10*/])->f_1[7] = 1;
	(*uParam0)[5 /*10*/] = 4;
	(uParam0[5 /*10*/])->f_1[0] = 1;
	(uParam0[5 /*10*/])->f_1[1] = 1;
	(uParam0[5 /*10*/])->f_1[2] = 1;
	(uParam0[5 /*10*/])->f_1[3] = 0;
	(*uParam0)[6 /*10*/] = 8;
	(uParam0[6 /*10*/])->f_1[0] = 0;
	(uParam0[6 /*10*/])->f_1[1] = 0;
	(uParam0[6 /*10*/])->f_1[2] = 0;
	(uParam0[6 /*10*/])->f_1[3] = 0;
	(uParam0[6 /*10*/])->f_1[4] = 0;
	(uParam0[6 /*10*/])->f_1[5] = 0;
	(uParam0[6 /*10*/])->f_1[6] = 0;
	(uParam0[6 /*10*/])->f_1[7] = 1;
	(*uParam0)[7 /*10*/] = 8;
	(uParam0[7 /*10*/])->f_1[0] = 1;
	(uParam0[7 /*10*/])->f_1[1] = 0;
	(uParam0[7 /*10*/])->f_1[2] = 1;
	(uParam0[7 /*10*/])->f_1[3] = 1;
	(uParam0[7 /*10*/])->f_1[4] = 0;
	(uParam0[7 /*10*/])->f_1[5] = 1;
	(uParam0[7 /*10*/])->f_1[6] = 1;
	(uParam0[7 /*10*/])->f_1[7] = 1;
	(*uParam0)[8 /*10*/] = 7;
	(uParam0[8 /*10*/])->f_1[0] = 1;
	(uParam0[8 /*10*/])->f_1[1] = 1;
	(uParam0[8 /*10*/])->f_1[2] = 1;
	(uParam0[8 /*10*/])->f_1[3] = 1;
	(uParam0[8 /*10*/])->f_1[4] = 1;
	(uParam0[8 /*10*/])->f_1[5] = 1;
	(uParam0[8 /*10*/])->f_1[6] = 1;
	(*uParam0)[9 /*10*/] = 2;
	(uParam0[9 /*10*/])->f_1[0] = 0;
	(uParam0[9 /*10*/])->f_1[1] = 1;
	(*uParam0)[10 /*10*/] = 3;
	(uParam0[10 /*10*/])->f_1[0] = 0;
	(uParam0[10 /*10*/])->f_1[1] = 1;
	(uParam0[10 /*10*/])->f_1[2] = 1;
	(*uParam0)[11 /*10*/] = 4;
	(uParam0[11 /*10*/])->f_1[0] = 0;
	(uParam0[11 /*10*/])->f_1[1] = 1;
	(uParam0[11 /*10*/])->f_1[2] = 1;
	(uParam0[11 /*10*/])->f_1[3] = 1;
	(*uParam0)[12 /*10*/] = 4;
	(uParam0[12 /*10*/])->f_1[0] = 0;
	(uParam0[12 /*10*/])->f_1[1] = 0;
	(uParam0[12 /*10*/])->f_1[2] = 1;
	(uParam0[12 /*10*/])->f_1[3] = 1;
	(*uParam0)[13 /*10*/] = 3;
	(uParam0[13 /*10*/])->f_1[0] = 1;
	(uParam0[13 /*10*/])->f_1[1] = 0;
	(uParam0[13 /*10*/])->f_1[2] = 1;
	(*uParam0)[14 /*10*/] = 6;
	(uParam0[14 /*10*/])->f_1[0] = 0;
	(uParam0[14 /*10*/])->f_1[1] = 1;
	(uParam0[14 /*10*/])->f_1[2] = 1;
	(uParam0[14 /*10*/])->f_1[3] = 1;
	(uParam0[14 /*10*/])->f_1[4] = 1;
	(uParam0[14 /*10*/])->f_1[5] = 0;
}

void func_145(var uParam0, int iParam1, int iParam2)
{
	if (uParam0->f_154[iParam1] != iParam2)
	{
		uParam0->f_154[iParam1] = iParam2;
		uParam0->f_185[iParam1] = iParam2;
	}
}

bool func_146(var uParam0, var uParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;

	if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_123[iParam2]))
	{
		return true;
	}
	if (uParam1->f_216[iParam2] == 0)
	{
		func_237(uParam1, iParam2);
	}
	if (uParam1->f_216[iParam2] != 0 && func_38(uParam1->f_32[iParam2 /*3*/]))
	{
		if (func_38(uParam1->f_32[iParam2 /*3*/]))
		{
			vVar3 = { Global_35 };
			vVar0.x = (vVar3.x + MISC::GET_RANDOM_FLOAT_IN_RANGE(-30f, 30f));
			vVar0.f_1 = (vVar3.y + MISC::GET_RANDOM_FLOAT_IN_RANGE(-30f, 30f));
			vVar0.f_2 = vVar3.z;
			if (func_38(vVar0))
			{
				return false;
			}
			else if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar3, vVar0, false) < 10f)
			{
				return false;
			}
			else if (!func_238(uParam0, vVar0))
			{
				return false;
			}
			else if (func_239(vVar0))
			{
				return false;
			}
			else if (!func_240(vVar0, uParam1->f_216[iParam2], &(vVar0.f_2)))
			{
				return false;
			}
			else
			{
				uParam1->f_32[iParam2 /*3*/] = { vVar0 };
			}
		}
	}
	if ((uParam1->f_797 == 0 && uParam1->f_216[iParam2] != 0) && !func_38(uParam1->f_32[iParam2 /*3*/]))
	{
		STREAMING::REQUEST_MODEL(uParam1->f_216[iParam2], false);
		if (STREAMING::HAS_MODEL_LOADED(uParam1->f_216[iParam2]))
		{
			uParam1->f_123[iParam2] = func_241(uParam1->f_216[iParam2], uParam1->f_32[iParam2 /*3*/], 0f, 1, 1, 0, 1, 1, 1, 0, 0);
			uParam1->f_1[iParam2] = 0;
			FLOCK::_0x8B6F0F59B1B99801(uParam1->f_123[iParam2], 0);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam1->f_216[iParam2]);
			uParam1->f_797 = 1;
		}
	}
	return !ENTITY::IS_ENTITY_DEAD(uParam1->f_123[iParam2]);
}

bool func_147(var uParam0, var uParam1, int iParam2)
{
	var uVar0[15];
	int iVar16;
	int iVar17;
	int iVar18;

	if (func_51(&(uParam1->f_433)) && func_52(&(uParam1->f_433)) < (200 + uParam1->f_471 * 20))
	{
		return false;
	}
	func_93(&(uParam1->f_433));
	iVar16 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1, 8);
	if (iVar16 == 0)
	{
		return false;
	}
	iVar18 = 0;
	iVar18 = 0;
	while (iVar18 < iVar16)
	{
		if (((!ENTITY::IS_ENTITY_DEAD(uVar0[iVar18]) && func_242(uVar0[iVar18])) && !func_243(uParam1, &(uVar0[iVar18]))) && !func_153(uParam0, &(uVar0[iVar18])))
		{
			uParam1->f_123[iParam2] = uVar0[iVar18];
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam1->f_123[iParam2], true, false);
			uParam1->f_1[iParam2] = 1;
			iVar17 = PED::_GET_PED_META_OUTFIT_HASH(uParam1->f_123[iParam2]);
			if ((((iVar17 == joaat("META_OUTFIT_ANIMAL_POISON_BLUEGIL") || iVar17 == joaat("META_OUTFIT_ANIMAL_POISON_CHAINPICKEREL")) || iVar17 == joaat("META_OUTFIT_ANIMAL_POISON_LAKESTURGEON")) || iVar17 == joaat("META_OUTFIT_ANIMAL_POISON_REDFIN")) || iVar17 == joaat("META_OUTFIT_ANIMAL_POISON_ROCKBASS"))
			{
				uParam1->f_340[iParam2] = 1;
			}
			else
			{
				uParam1->f_340[iParam2] = 0;
			}
			func_93(&(uParam1->f_436));
			return true;
		}
		iVar18++;
	}
	return false;
}

bool func_148(var uParam0, int iParam1)
{
	return iParam1 == uParam0->f_799;
}

bool func_149(var uParam0)
{
	if (((uParam0->f_471 < 5 && func_244(&(uParam0->f_436)) > 15000) && !func_48(64)) && Global_1903071.f_5 == 6)
	{
		return true;
	}
	return false;
}

bool func_150(var uParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;

	if ((uParam0->f_798 == 1 || ENTITY::IS_ENTITY_DEAD(uParam0->f_123[iParam1])) || !PED::_0xA0BC8FAED8CFEB3C(uParam0->f_123[iParam1]))
	{
		return false;
	}
	func_245(uParam0->f_123[iParam1]);
	bVar0 = DECORATOR::DECOR_EXIST_ON(uParam0->f_123[iParam1], "Fish_Prevent_Tasking");
	bVar1 = DECORATOR::DECOR_EXIST_ON(uParam0->f_123[iParam1], "Fish_Weight");
	uParam0->f_216[iParam1] = ENTITY::GET_ENTITY_MODEL(uParam0->f_123[iParam1]);
	uParam0->f_247[iParam1] = func_246(uParam0->f_216[iParam1]);
	if (bVar1 == 0)
	{
		uParam0->f_278[iParam1] = func_247(uParam0->f_247[iParam1]);
		DECORATOR::DECOR_SET_FLOAT(uParam0->f_123[iParam1], "Fish_Weight", uParam0->f_278[iParam1]);
	}
	else
	{
		uParam0->f_278[iParam1] = DECORATOR::DECOR_GET_FLOAT(uParam0->f_123[iParam1], "Fish_Weight");
	}
	uParam0->f_309[iParam1] = func_248(uParam0->f_216[iParam1]);
	uParam0->f_402[iParam1] = 0f;
	func_249(uParam0->f_123[iParam1], 0);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_123[iParam1], false);
	func_250(uParam0, iParam1);
	PED::SET_PED_RESET_FLAG(uParam0->f_123[iParam1], 169, true);
	if (bVar0 == 0)
	{
		DECORATOR::DECOR_SET_BOOL(uParam0->f_123[iParam1], "Fish_Prevent_Tasking", false);
		if (func_48(16))
		{
			ENTITY::SET_ENTITY_PROOFS(uParam0->f_123[iParam1], 20, false);
		}
		if (((!func_156(uParam0->f_123[iParam1], 1139527981) && !func_156(uParam0->f_123[iParam1], 518218985)) && !func_156(uParam0->f_123[iParam1], -773337285)) && !PED::IS_PED_FLEEING(uParam0->f_123[iParam1]))
		{
			TASK::TASK_ANIMAL_UNALERTED(uParam0->f_123[iParam1], -1, 0, 0, 0);
		}
	}
	uParam0->f_798 = 1;
	return true;
}

void func_151(var uParam0, var uParam1, int iParam2)
{
	int iVar0;

	uParam1->f_706[iParam2 /*3*/] = { 0f, 0f, 0f };
	uParam1->f_439[iParam2] = 0;
	iVar0 = func_115(uParam0, iParam2);
	if (iVar0 != -1)
	{
		func_43(uParam0, uParam1, -1);
	}
	func_145(uParam1, iParam2, 4);
}

bool func_152(var uParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_123[iParam1]))
	{
		if (DECORATOR::DECOR_EXIST_ON(uParam0->f_123[iParam1], "Fish_Prevent_Tasking"))
		{
			if (DECORATOR::DECOR_GET_BOOL(uParam0->f_123[iParam1], "Fish_Prevent_Tasking") == 0)
			{
				return true;
			}
		}
		else
		{
			DECORATOR::DECOR_SET_BOOL(uParam0->f_123[iParam1], "Fish_Prevent_Tasking", false);
		}
	}
	return false;
}

bool func_153(var uParam0, var uParam1)
{
	if ((!func_38(uParam0->f_4) && !ENTITY::IS_ENTITY_DEAD(*uParam1)) && func_39(*uParam1, uParam0->f_4, 0) < 50f)
	{
		return false;
	}
	return true;
}

bool func_154(var uParam0, var uParam1, int iParam2)
{
	if (PED::IS_PED_FLEEING(uParam1->f_123[iParam2]))
	{
		return false;
	}
	if (func_56(uParam0, 512) && func_39(func_138(), func_143(uParam1, iParam2), 0) < 5f)
	{
		uParam1->f_706[iParam2 /*3*/] = { func_139() };
		return true;
	}
	return false;
}

void func_155(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = 1;
	iVar1 = func_115(uParam1, iParam3);
	if (iVar1 != -1)
	{
		func_251();
		func_227(uParam0, uParam1);
		func_228(512);
		func_43(uParam1, uParam2, -1);
		Global_1903071.f_5.f_7 = 0;
	}
	else if (func_38(uParam2->f_706[iParam3 /*3*/]))
	{
		uParam2->f_706[iParam3 /*3*/] = { Global_35 };
	}
	func_93(&(uParam2->f_524[iParam3 /*3*/]));
	func_53(&(uParam2->f_615[iParam3 /*3*/]));
	if (!ENTITY::IS_ENTITY_DEAD(uParam2->f_123[iParam3]))
	{
		func_250(uParam2, iParam3);
		ENTITY::SET_ENTITY_INVINCIBLE(uParam2->f_123[iParam3], false);
		PED::SET_PED_CONFIG_FLAG(uParam2->f_123[iParam3], 17, false);
	}
	if (iVar0 == 1)
	{
		func_145(uParam2, iParam3, 8);
	}
	else
	{
		func_145(uParam2, iParam3, 4);
	}
}

bool func_156(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (iParam1 == 2104565373 && TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(iParam0))
			{
				return true;
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true) == 0)
			{
				return true;
			}
		}
	}
	return false;
}

void func_157(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (uParam2->f_154[iParam3] == 6)
	{
		func_252(uParam1, uParam2, iParam3);
		func_253(uParam0, uParam1, uParam2, iParam3);
		if (func_254(uParam1) || func_255(uParam1))
		{
			if (!func_256(uParam0, uParam2, iParam3))
			{
				uParam2->f_154[iParam3] = 7;
			}
		}
	}
	else
	{
		func_257(uParam1, uParam2, iParam3);
		func_22(uParam1);
		if ((func_258(uParam1) || func_259(uParam0, uParam1)) || func_256(uParam0, uParam2, iParam3))
		{
			uParam2->f_154[iParam3] = 6;
		}
	}
	if (uParam2->f_185[iParam3] != uParam2->f_154[iParam3])
	{
		uParam2->f_185[iParam3] = uParam2->f_154[iParam3];
		uParam1->f_176 = 0;
		TASK::CLEAR_PED_TASKS(uParam2->f_123[iParam3], true, false);
	}
}

void func_158(var uParam0, var uParam1, int iParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;

	if (((uParam0->f_200 == 0 || uParam0->f_200 == 6) || uParam0->f_200 == 7) || uParam0->f_200 == 8)
	{
		uParam0->f_201 = 0;
		if (func_51(&(uParam0->f_188)))
		{
			func_260(&(uParam0->f_188));
		}
		if (func_51(&(uParam0->f_191)))
		{
			func_260(&(uParam0->f_191));
		}
		return;
	}
	fVar0 = ENTITY::GET_ENTITY_HEADING(uParam1->f_123[iParam2]);
	fVar1 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
	fVar2 = (fVar0 - fVar1);
	if (fVar2 < 0f)
	{
		fVar2 = (fVar2 + 360f);
	}
	if (fVar2 >= 180f)
	{
		uParam0->f_201 = 4;
	}
	else
	{
		uParam0->f_201 = 3;
	}
	if (uParam0->f_201 == 4)
	{
		if (IntToFloat(func_127()) < -25f && func_261())
		{
			if (func_81(uParam1, iParam2))
			{
				if (func_51(&(uParam0->f_188)))
				{
					func_262(&(uParam0->f_188));
				}
				else
				{
					func_93(&(uParam0->f_188));
				}
			}
			else if (func_51(&(uParam0->f_191)))
			{
				func_262(&(uParam0->f_191));
			}
			else
			{
				func_93(&(uParam0->f_191));
			}
		}
		else
		{
			if (func_51(&(uParam0->f_188)))
			{
				func_260(&(uParam0->f_188));
			}
			if (func_51(&(uParam0->f_191)))
			{
				func_260(&(uParam0->f_191));
			}
		}
	}
	else if (uParam0->f_201 == 3)
	{
		if (IntToFloat(func_127()) > 25f && func_261())
		{
			if (func_81(uParam1, iParam2))
			{
				if (func_51(&(uParam0->f_188)))
				{
					func_262(&(uParam0->f_188));
				}
				else
				{
					func_93(&(uParam0->f_188));
				}
			}
			else if (func_51(&(uParam0->f_191)))
			{
				func_262(&(uParam0->f_191));
			}
			else
			{
				func_93(&(uParam0->f_191));
			}
		}
		else
		{
			if (func_51(&(uParam0->f_188)))
			{
				func_260(&(uParam0->f_188));
			}
			if (func_51(&(uParam0->f_191)))
			{
				func_260(&(uParam0->f_191));
			}
		}
	}
	else
	{
		if (func_51(&(uParam0->f_188)))
		{
			func_260(&(uParam0->f_188));
		}
		if (func_51(&(uParam0->f_191)))
		{
			func_260(&(uParam0->f_191));
		}
	}
}

void func_159(var uParam0, var uParam1, var uParam2, int iParam3)
{
	vector3 vVar0;

	if (func_263(uParam1, 0))
	{
		if (func_156(uParam2->f_123[iParam3], 1227113341))
		{
			TASK::CLEAR_PED_TASKS(uParam2->f_123[iParam3], true, false);
		}
		return;
	}
	if (!func_264(uParam1))
	{
		return;
	}
	vVar0 = { func_143(uParam2, iParam3) };
	uParam1->f_218 = 0;
	if (uParam1->f_17 < 0.1f)
	{
		uParam1->f_200 = 7;
	}
	else if (func_265(uParam1, uParam2, iParam3))
	{
		uParam1->f_200 = 8;
	}
	else if (!func_238(uParam0, vVar0))
	{
		func_266(uParam1, uParam2, iParam3);
	}
	else if (func_267(uParam1, uParam2, iParam3))
	{
		func_268(uParam0, uParam1, uParam2, iParam3, vVar0);
	}
	if (((uParam1->f_200 == 8 || uParam1->f_200 == 7) || uParam1->f_200 == 6) || uParam1->f_200 == 0)
	{
		uParam1->f_222 = 0f;
		uParam1->f_223 = 0;
		uParam1->f_224 = 0;
		if (func_156(uParam2->f_123[iParam3], 1227113341))
		{
			TASK::CLEAR_PED_TASKS(uParam2->f_123[iParam3], true, false);
		}
	}
	else
	{
		func_269(uParam1, uParam2, iParam3);
		if (uParam1->f_223 == 1 || !func_156(uParam2->f_123[iParam3], 1227113341))
		{
			if (!ENTITY::_0x88AD6CC10D8D35B2(uParam2->f_123[iParam3]) || !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uParam2->f_123[iParam3], false))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam2->f_123[iParam3], true, true);
			}
			TASK::TASK_GO_TO_ENTITY(uParam2->f_123[iParam3], uParam1->f_8, -1, 0.1f, uParam1->f_222, 0.1f, 1);
			uParam1->f_223 = 0;
			uParam1->f_224 = 0;
		}
	}
	if (uParam1->f_200 == 7)
	{
		if (!func_51(&(uParam1->f_219)))
		{
			func_93(&(uParam1->f_219));
		}
		if (func_135(&(uParam1->f_219)))
		{
			func_262(&(uParam1->f_219));
		}
	}
	else if (func_51(&(uParam1->f_219)) && !func_135(&(uParam1->f_219)))
	{
		func_260(&(uParam1->f_219));
	}
}

void func_160(var uParam0, var uParam1, var uParam2, int iParam3)
{
	vector3 vVar0;
	float fVar3;

	if (((func_51(&(uParam1->f_196)) && func_52(&(uParam1->f_196)) < uParam1->f_199) || !func_81(uParam2, iParam3)) || !func_270(uParam1))
	{
		return;
	}
	vVar0 = { func_271(func_143(uParam2, iParam3), 0) };
	if (func_38(vVar0))
	{
		return;
	}
	func_93(&(uParam1->f_196));
	if (func_82(uParam1) > 0.8f)
	{
		uParam1->f_199 = MISC::GET_RANDOM_INT_IN_RANGE(150, 250);
	}
	else
	{
		uParam1->f_199 = MISC::GET_RANDOM_INT_IN_RANGE(250, 350);
	}
	fVar3 = 1f;
	if (uParam2->f_309[iParam3] == 0)
	{
		fVar3 = 0.8f;
	}
	else if (uParam2->f_309[iParam3] == 1)
	{
		fVar3 = 0.9f;
	}
	else if (uParam2->f_309[iParam3] == 2)
	{
		fVar3 = 1f;
	}
	else if (uParam2->f_309[iParam3] == 3)
	{
		fVar3 = 1.1f;
	}
	else if (uParam2->f_309[iParam3] == 4)
	{
		fVar3 = 1.2f;
	}
	GRAPHICS::START_NETWORKED_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_mg_fish_struggle", vVar0, 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f), fVar3, 0, 0, 0);
	func_272(uParam0, uParam1, uParam2, iParam3);
}

float func_161(var uParam0)
{
	if (!func_51(uParam0))
	{
		return 0f;
	}
	if (func_135(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_273() - uParam0->f_1);
}

void func_162(var uParam0, var uParam1)
{
	int iVar0;

	if (func_56(uParam0, 32))
	{
		iVar0 = func_77(uParam0);
		if (func_126(iVar0) && uParam1->f_309[iVar0] != 4)
		{
			if (uParam1->f_154[iVar0] == 9)
			{
				func_21(uParam0, uParam1, iVar0, 1, 1);
			}
		}
	}
}

int func_163()
{
	if (func_44())
	{
		return WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(PLAYER::PLAYER_PED_ID(), 0);
	}
	return 0;
}

void func_164(var uParam0, var uParam1)
{
	bool bVar0;
	int iVar1;

	bVar0 = ENTITY::DOES_ENTITY_EXIST(func_141());
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (((Global_1903071.f_5 == 6 || Global_1903071.f_5 == 10) && bVar0 == 1) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_123[iVar1]))
		{
			uParam0->f_23[iVar1] = func_274(func_143(uParam1, iVar1), func_142());
		}
		else
		{
			uParam0->f_23[iVar1] = 99999f;
		}
		iVar1++;
	}
}

void func_165(var uParam0)
{
	func_47(uParam0);
	uParam0->f_18 = 0;
}

void func_166(var uParam0, var uParam1, var uParam2)
{
	func_275(uParam0, uParam1, uParam2);
	func_96(uParam1, 1024);
	if (func_276() || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_OPEN_WHEEL_MENU")))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
		if (func_277())
		{
			func_108();
		}
		UIFEED::_0xDD1232B332CBB9E7(2, 1, 0);
		func_47(uParam0);
	}
	else
	{
		func_278(&(uParam0->f_82), 25, 0);
		func_278(&(uParam0->f_82), 27, 0);
		func_278(&(uParam0->f_82), 29, 0);
		if (func_279())
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
		}
		else if (func_213(Global_39.f_5803))
		{
			if (PAD::_IS_USING_KEYBOARD(0) && PLAYER::_0xF4CB347D7B5EB0FD())
			{
				func_280(uParam0, 23, 0, -1, 1);
			}
			else
			{
				func_280(uParam0, 22, 0, -1, 1);
			}
		}
		if (func_281())
		{
			func_282(uParam0, 7, 0, 1);
		}
		func_283(uParam0, uParam1, uParam2);
	}
	func_284(uParam0, uParam1);
}

void func_167(var uParam0, var uParam1, var uParam2)
{
	func_275(uParam0, uParam1, uParam2);
	func_285(uParam1);
	if (func_279())
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
	}
	func_278(&(uParam0->f_82), 22, 0);
	func_278(&(uParam0->f_82), 23, 0);
	func_278(&(uParam0->f_82), 27, 0);
	func_278(&(uParam0->f_82), 29, 0);
	func_286(uParam0);
	func_47(uParam0);
}

void func_168(var uParam0)
{
	func_278(&(uParam0->f_82), 22, 0);
	func_278(&(uParam0->f_82), 23, 0);
	func_278(&(uParam0->f_82), 25, 0);
	func_280(uParam0, 27, 1, -1, 1);
}

void func_169(var uParam0, var uParam1)
{
	func_47(uParam0);
	func_278(&(uParam0->f_82), 27, 0);
	func_278(&(uParam0->f_82), 29, 0);
	func_287(uParam0, uParam0->f_5);
	func_288(uParam0);
	func_289(uParam1);
	func_96(uParam1, 1);
}

void func_170()
{
}

void func_171(var uParam0, var uParam1, var uParam2)
{
	if (func_182(1))
	{
		return;
	}
	func_290(uParam0, uParam1);
	func_291(uParam1);
	func_289(uParam1);
	func_264(uParam1);
	func_292(uParam0, uParam1);
	if (!func_56(uParam1, 4096) && !func_293())
	{
		func_295(uParam0, func_294(uParam0));
		func_296(uParam0, uParam1);
		func_297(uParam0, uParam1, uParam2);
	}
	func_298(uParam0, uParam1);
	func_299(uParam0, uParam1, uParam2);
	if (func_300(uParam0, uParam1))
	{
		func_301(uParam1, 4096);
		func_180(128, 1);
		func_302(8);
		func_23(uParam1);
		func_229(uParam0, uParam1, uParam2, 2);
		func_287(uParam0, uParam0->f_6);
		func_47(uParam0);
		if ((!func_213(Global_39.f_5803) && uParam1->f_54 == 0) && uParam1->f_3 == 1)
		{
			func_280(uParam0, 54, 1, -2, 1);
		}
		else if (func_277())
		{
			func_108();
		}
	}
	else if (func_303(uParam0, uParam1, uParam2))
	{
	}
	else
	{
		func_304(uParam1);
	}
}

void func_172(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	func_302(1);
	if (!func_51(&(uParam1->f_179)))
	{
		func_93(&(uParam1->f_179));
	}
	func_278(&(uParam0->f_82), 30, 0);
	func_278(&(uParam0->f_82), 37, 0);
	func_278(&(uParam0->f_82), 31, 0);
	func_278(&(uParam0->f_82), 32, 0);
	func_278(&(uParam0->f_82), 33, 0);
	func_278(&(uParam0->f_82), 34, 0);
	func_278(&(uParam0->f_82), 39, 0);
	func_297(uParam0, uParam1, uParam2);
	if (!func_293())
	{
		func_282(uParam0, 4, 0, 1);
	}
	iVar0 = func_77(uParam1);
	if (func_126(iVar0) && !func_81(uParam2, iVar0))
	{
		if (func_51(&(uParam0->f_82.f_148[57 /*3*/])))
		{
			func_280(uParam0, 57, 0, -2, 0);
		}
		if (func_51(&(uParam0->f_82.f_148[56 /*3*/])) && !TASK::_0x5952DFA38FA529FE())
		{
			func_280(uParam0, 56, 0, -2, 0);
		}
	}
	if (func_263(uParam1, 1))
	{
		func_180(8, 1);
	}
	else if (func_305(uParam0, uParam1, uParam2))
	{
		func_306(uParam0, uParam1, uParam2);
		func_180(2, 1);
	}
	else
	{
		func_307(uParam0, uParam1, uParam2);
	}
}

void func_173(var uParam0)
{
	func_47(uParam0);
	uParam0->f_18 = 0;
}

void func_174(var uParam0, var uParam1, var uParam2)
{
	if (func_308(256, 1))
	{
		func_309(uParam0, uParam1, uParam2);
	}
}

void func_175(var uParam0, var uParam1, var uParam2)
{
	func_228(1);
	func_171(uParam0, uParam1, uParam2);
	func_278(&(uParam0->f_82), 30, 0);
	func_278(&(uParam0->f_82), 37, 0);
	func_278(&(uParam0->f_82), 31, 0);
	func_278(&(uParam0->f_82), 32, 0);
	func_278(&(uParam0->f_82), 33, 0);
	func_278(&(uParam0->f_82), 34, 0);
	func_278(&(uParam0->f_82), 39, 0);
}

void func_176(var uParam0, var uParam1, var uParam2)
{
	func_306(uParam0, uParam1, uParam2);
	func_278(&(uParam0->f_82), 43, 0);
	func_278(&(uParam0->f_82), 45, 0);
	func_278(&(uParam0->f_82), 46, 0);
	func_278(&(uParam0->f_82), 47, 0);
	func_278(&(uParam0->f_82), 72, 0);
	func_278(&(uParam0->f_82), 49, 0);
	func_287(uParam0, uParam0->f_8);
}

void func_177(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	func_310(uParam0, uParam1, uParam2);
	if (!func_56(uParam1, 32768) && func_308(32, 1))
	{
		func_301(uParam1, 32768);
	}
	if ((func_56(uParam1, 32768) && !func_56(uParam1, 64)) && !func_56(uParam1, 32))
	{
		func_311(uParam1, uParam2);
		func_312(uParam0, uParam1);
		iVar0 = func_77(uParam1);
		if (func_126(iVar0))
		{
			func_313(&(uParam0->f_19), uParam2->f_340[iVar0]);
		}
		if (func_308(4, 1))
		{
			func_314(uParam0, uParam1, uParam2);
			func_132(uParam0, 5);
			func_132(uParam0, 6);
		}
		else if (!func_126(iVar0))
		{
			func_314(uParam0, uParam1, uParam2);
			func_132(uParam0, 5);
			func_132(uParam0, 6);
		}
		else if (ENTITY::IS_ENTITY_DEAD(uParam2->f_123[iVar0]))
		{
			func_314(uParam0, uParam1, uParam2);
			func_132(uParam0, 5);
			func_132(uParam0, 6);
		}
		else
		{
			func_315(uParam0, uParam1, uParam2);
		}
	}
	func_316(uParam1);
	func_317(uParam1);
	func_318(uParam0, uParam1, uParam2);
	func_319();
	func_320(uParam0, uParam1, uParam2);
}

void func_178(var uParam0)
{
	func_47(uParam0);
	uParam0->f_18 = 0;
	func_321(uParam0);
}

void func_179(var uParam0)
{
	if ((Global_1903071.f_5 <= 1 || Global_1903071.f_5 == 9) || Global_1903071.f_5 == 13)
	{
		func_109(uParam0, 0);
	}
	else
	{
		func_109(uParam0, 1);
	}
}

void func_180(int iParam0, int iParam1)
{
	if (!func_322(iParam0))
	{
		func_123(&(Global_1903071.f_5.f_6), iParam0);
		if (iParam1 == 1)
		{
		}
	}
}

bool func_181()
{
	if (Global_1903071.f_5 == 1)
	{
		return true;
	}
	return false;
}

bool func_182(int iParam0)
{
	return func_122(Global_1903071.f_2, iParam0);
}

float func_183(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_184(var uParam0, int iParam1)
{
	char* sVar0;
	float fVar1;
	int iVar2;

	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 15)
	{
		sVar0 = func_203(iVar2);
		fVar1 = 0f;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0) && DECORATOR::DECOR_EXIST_ON(iParam1, sVar0))
		{
			fVar1 = DECORATOR::DECOR_GET_FLOAT(iParam1, sVar0);
		}
		if (fVar1 > 0f && ENTITY::DOES_ENTITY_EXIST(uParam0->f_12))
		{
			func_323(uParam0, iVar2, fVar1);
		}
		else
		{
			func_324(uParam0, iVar2);
		}
		iVar2++;
	}
}

void func_185(var uParam0, int iParam1, int iParam2)
{
}

void func_186(var uParam0, int iParam1, int iParam2)
{
}

void func_187(var uParam0, int iParam1, int iParam2)
{
}

void func_188(var uParam0, int iParam1, int iParam2)
{
}

void func_189(var uParam0, int iParam1, int iParam2)
{
}

void func_190(var uParam0, int iParam1, int iParam2)
{
}

void func_191(var uParam0, int iParam1, int iParam2)
{
}

void func_192(var uParam0, int iParam1, int iParam2)
{
}

void func_193(var uParam0, int iParam1, int iParam2)
{
}

void func_194(var uParam0, int iParam1, int iParam2)
{
}

void func_195(var uParam0, int iParam1, int iParam2)
{
}

void func_196(var uParam0, int iParam1, int iParam2)
{
}

void func_197(var uParam0, int iParam1, int iParam2)
{
}

void func_198(var uParam0, int iParam1, int iParam2)
{
}

void func_199(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_324(uParam0, iVar0);
		iVar0++;
	}
}

int func_200()
{
	return Global_1572887.f_13;
}

int func_201(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 112;
		case 2:
			return 113;
		case 3:
			return 2;
		case 4:
			return 3;
		case 5:
			return 4;
		case 6:
			return 5;
		case 8:
			return 7;
		case 9:
			return 8;
		case 10:
			return 9;
		case 11:
			return 10;
		case 12:
			return 11;
		case 15:
			return 12;
		case 16:
			return 13;
		case 17:
			return 15;
		case 19:
			return 17;
		case 20:
			return 18;
		case 21:
			return 19;
		case 22:
			return 20;
		case 23:
			return 21;
		case 25:
			return 23;
		case 26:
			return 25;
		case 27:
			return 26;
		case 28:
			return 62;
		case 30:
			return 27;
		case 52:
			return 28;
		case 31:
			return 29;
		case 32:
			return 30;
		case 33:
			return 31;
		case 127:
			return 32;
		case 131:
			return 33;
		case 132:
			return 34;
		case 35:
			return 35;
		case 88:
			return 40;
		case 37:
			return 42;
		case 38:
			return 43;
		case 94:
			return 44;
		case 121:
			return 46;
		case 39:
			return 47;
		case 40:
			return 48;
		case 41:
			return 49;
		case 42:
			return 50;
		case 53:
			return 51;
		case 44:
			return 52;
		case 55:
			return 53;
		case 45:
			return 54;
		case 47:
			return 57;
		case 51:
			return 61;
		case 60:
			return 63;
		case 62:
			return 64;
		case 63:
			return 65;
		case 64:
			return 66;
		case 65:
			return 67;
		case 66:
			return 68;
		case 135:
			return 69;
		case 136:
			return 70;
		case 67:
			return 71;
		case 82:
			return 72;
		case 69:
			return 73;
		case 70:
			return 74;
		case 72:
			return 76;
		case 73:
			return 78;
		case 74:
			return 79;
		case 75:
			return 80;
		case 76:
			return 81;
		case 77:
			return 82;
		case 80:
			return 84;
		case 81:
			return 85;
		case 123:
			return 86;
		case 83:
			return 87;
		case 84:
			return 88;
		case 85:
			return 90;
		case 86:
			return 91;
		case 87:
			return 92;
		case 92:
			return 96;
		case 93:
			return 97;
		case 98:
			return 99;
		case 99:
			return 100;
		case 100:
			return 101;
		case 101:
			return 102;
		case 102:
			return 103;
		case 103:
			return 104;
		case 104:
			return 105;
		case 105:
			return 106;
		case 106:
			return 107;
		case 110:
			return 114;
		case 111:
			return 115;
		case 113:
			return 118;
		case 115:
			return 119;
		case 116:
			return 120;
		case 117:
			return 121;
		case 118:
			return 122;
		case 139:
			return 123;
		default:
			break;
	}
	return 0;
}

void func_202(var uParam0, var uParam1, var uParam2)
{
	vector3 vVar0;

	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	NETWORK::NETWORK_SET_RICH_PRESENCE(3, &vVar0, 3, 3);
}

char* func_203(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "Fish_Attractor_Bluegill";
		case 1:
			return "Fish_Attractor_BullheadCatfish";
		case 2:
			return "Fish_Attractor_ChainPickerel";
		case 3:
			return "Fish_Attractor_ChannelCatfish";
		case 4:
			return "Fish_Attractor_LakeSturgeon";
		case 5:
			return "Fish_Attractor_LargemouthBass";
		case 6:
			return "Fish_Attractor_LongnoseGar";
		case 7:
			return "Fish_Attractor_Muskie";
		case 8:
			return "Fish_Attractor_NorthernPike";
		case 9:
			return "Fish_Attractor_Perch";
		case 10:
			return "Fish_Attractor_RedfinPickerel";
		case 11:
			return "Fish_Attractor_RockBass";
		case 12:
			return "Fish_Attractor_SmallmouthBass";
		case 13:
			return "Fish_Attractor_SockeyeSalmon";
		case 14:
			return "Fish_Attractor_SteelheadTrout";
		default:
			break;
	}
	return "";
}

int func_204()
{
	return ZONE::_GET_WATER_MAP_ZONE_AT_COORDS(Global_35);
}

bool func_205(int iParam0)
{
	return (iParam0 != -1 && iParam0 != 0);
}

void func_206(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	bool bVar0;
	char* sVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	char[] cVar6[8];
	float fVar7;
	char* sVar8;
	char* sVar9;
	char[] cVar10[8];

	if (!func_325())
	{
		return;
	}
	sVar1 = func_326(iParam0, iParam1, iParam2, iParam4, bParam5, bParam3, &bVar0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		if (bParam3)
		{
			return;
		}
		sVar1 = "DISTRICT_GRIZZLIES";
	}
	if (!func_327(iParam4))
	{
		if (func_328(iParam0))
		{
			iParam4 = func_330(func_329(iParam0));
		}
		else
		{
			iParam4 = func_330(iParam1);
		}
	}
	if (func_327(iParam4))
	{
		iVar3 = func_331(iParam4);
	}
	if (bVar0 && bParam3)
	{
		sVar2 = func_333(func_332(iParam2));
	}
	else if ((func_334(iParam1, 2) || func_335(iParam4, 2)) && !Global_1893587.f_9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_MALE(PLAYER::PLAYER_PED_ID()))
			{
				sVar2 = MISC::_CREATE_VAR_STRING(2, "LAW_UI_FULL_D_OR_A_M");
			}
			else
			{
				sVar2 = MISC::_CREATE_VAR_STRING(2, "LAW_UI_FULL_D_OR_A_F");
			}
		}
		Global_1893587.f_9 = 1;
	}
	else if ((func_328(iParam0) && func_336(iParam0, 16777216)) && !Global_1893587.f_9)
	{
		sVar2 = MISC::_CREATE_VAR_STRING(2, "LAW_UI_RESTRICTED_AREA");
		Global_1893587.f_9 = 1;
	}
	else if (iVar3 >= 1 && !Global_1893587.f_9)
	{
		sVar2 = MISC::_CREATE_VAR_STRING(2, "REGION_BOUNTY", iVar3);
		Global_1893587.f_9 = 1;
	}
	else
	{
		iVar4 = func_338(func_337());
		iVar5 = func_339(func_337());
		if (iVar5 < 10)
		{
			StringConCat(&cVar6, "0", 8);
		}
		StringIntConCat(&cVar6, iVar5, 8);
		fVar7 = MISC::_GET_TEMPERATURE_AT_COORDS(Global_35);
		if (!MISC::_SHOULD_USE_24_HOUR_CLOCK())
		{
			sVar9 = "AM";
			if (iVar4 >= 12)
			{
				sVar9 = "PM";
				if (iVar4 > 12)
				{
					iVar4 = (iVar4 - 12);
				}
			}
			else if (iVar4 == 0)
			{
				iVar4 = 12;
			}
			sVar8 = "TIME_AND_TEMP_C";
			if (!MISC::_SHOULD_USE_METRIC_TEMPERATURE())
			{
				fVar7 = func_340(fVar7);
				sVar8 = "TIME_AND_TEMP_F";
			}
			IntToString(&cVar10, BUILTIN::ROUND(fVar7), 8);
			sVar2 = MISC::_CREATE_VAR_STRING(674, sVar8, iVar4, func_216(&cVar6, joaat("COLOR_PURE_WHITE")), sVar9, func_216(&cVar10, joaat("COLOR_PURE_WHITE")));
		}
		else
		{
			sVar8 = "TIME_AND_TEMP_C_24";
			if (!MISC::_SHOULD_USE_METRIC_TEMPERATURE())
			{
				fVar7 = func_340(fVar7);
				sVar8 = "TIME_AND_TEMP_F_24";
			}
			IntToString(&cVar10, BUILTIN::ROUND(fVar7), 8);
			sVar2 = MISC::_CREATE_VAR_STRING(162, sVar8, iVar4, func_216(&cVar6, joaat("COLOR_PURE_WHITE")), func_216(&cVar10, joaat("COLOR_PURE_WHITE")));
		}
		Global_1893587.f_9 = 0;
	}
	Global_1939161.f_145 = func_341(sVar1, sVar2, 4000, 0, 0, 0, 0, 1);
}

void func_207(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_273() - fParam1);
	func_342(uParam0, 1);
	func_343(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_208(bool bParam0)
{
	if (func_200() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_344(bParam0));
}

bool func_209()
{
	if (INVENTORY::_INVENTORY_GET_PED_INVENTORY_ID(PLAYER::PLAYER_PED_ID()) != 3)
	{
		return false;
	}
	return INVENTORY::_0xFC7563F482781A3D();
}

bool func_210(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_345(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_346(iParam0);
	switch (iVar0)
	{
		case joaat("WEAPON"):
			if (WEAPON::HAS_PED_GOT_WEAPON(Global_34, iParam0, 0, false))
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case joaat("AMMO"):
			if (!func_347(iParam0, 1))
			{
				return false;
			}
			break;
		case joaat("CLOTHING"):
			if (func_348(iParam0))
			{
				return true;
			}
			break;
	}
	return func_217(iParam0, 0, 0, 0) >= iParam1;
}

int func_211(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<2> Var0;
	struct<2> Var12;
	var uVar25;

	Var0.f_1 = 10;
	Var12.f_1 = 11;
	return func_349(iParam0, &uVar25, &Var12, &Var0, iParam1, iParam2, iParam3, bParam4);
}

void func_212()
{
	int iVar0;
	struct<5> Var1;
	struct<4> Var6;
	int iVar10;
	struct<5> Var11;
	struct<4> Var16;

	if ((((((!func_210(joaat("UPGRADE_FSH_BAIT_LURE_LAKE"), 1) && !func_210(joaat("UPGRADE_FSH_BAIT_LURE_RIVER"), 1)) && !func_210(joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"), 1)) && !func_210(joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"), 1)) && !func_210(joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"), 1)) && !func_210(joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"), 1)) && !func_210(joaat("UPGRADE_FSH_BAIT_SPINNER_FRESHWATER_LEG"), 1))
	{
		iVar0 = func_344(0);
		Var1 = { func_350(joaat("UPGRADE_FSH_LURE_NONE"), 0, 0) };
		Var6 = { func_351(joaat("UPGRADE_FSH_LURE_NONE"), Var1, Var1.f_4, 0) };
		if (INVENTORY::_0xF9933164965533B7(iVar0, &Var6))
		{
			INVENTORY::_0xD740F11FBC8AEF43(iVar0, &Var6, 0);
		}
	}
	else
	{
		iVar10 = func_344(0);
		Var11 = { func_350(joaat("UPGRADE_FSH_LURE_NONE"), 0, 0) };
		Var16 = { func_351(joaat("UPGRADE_FSH_LURE_NONE"), Var11, Var11.f_4, 0) };
		if (!INVENTORY::_0xF9933164965533B7(iVar10, &Var16))
		{
			INVENTORY::_0xD740F11FBC8AEF43(iVar10, &Var16, 1);
		}
	}
}

bool func_213(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if ((((((((((((iParam0 == joaat("UPGRADE_FSH_BAIT_WORM") || iParam0 == joaat("UPGRADE_FSH_BAIT_BREAD")) || iParam0 == joaat("UPGRADE_FSH_BAIT_CORN")) || iParam0 == joaat("UPGRADE_FSH_BAIT_CHEESE")) || iParam0 == joaat("UPGRADE_FSH_BAIT_CRICKET")) || iParam0 == joaat("UPGRADE_FSH_BAIT_CRAYFISH")) || iParam0 == joaat("UPGRADE_FSH_BAIT_LURE_RIVER")) || iParam0 == joaat("UPGRADE_FSH_BAIT_LURE_LAKE")) || iParam0 == joaat("UPGRADE_FSH_BAIT_LURE_SWAMP")) || iParam0 == joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER")) || iParam0 == joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE")) || iParam0 == joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP")) || iParam0 == joaat("UPGRADE_FSH_BAIT_SPINNER_FRESHWATER_LEG"))
	{
		return true;
	}
	return false;
}

void func_214(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	char* sVar1;

	if (Global_39.f_5803 != iParam2 || iParam4 == 1)
	{
		Global_39.f_5803 = iParam2;
		uParam1->f_55 = 0;
		uParam1->f_56 = 0;
		func_352(uParam1, Global_39.f_5803);
		iVar0 = func_353(uParam1);
		sVar1 = func_354(Global_39.f_5803);
		if (iParam3 == 1)
		{
			TASK::TASK_SWAP_FISHING_BAIT(PLAYER::PLAYER_PED_ID(), sVar1, iVar0);
		}
		else
		{
			TASK::_0x9B0C7FA063E67629(PLAYER::PLAYER_PED_ID(), sVar1, iVar0, 1);
		}
		func_355(uParam0);
		func_212();
		uParam0->f_58 = 0;
		func_356();
		func_101();
		func_357(uParam0);
	}
}

char* func_215(int iParam0)
{
	int iVar0;

	if (!func_345(iParam0, 0))
	{
		return "";
	}
	iVar0 = func_358(iParam0);
	if (iVar0 == 0)
	{
		return "";
	}
	return HUD::_GET_LABEL_TEXT_BY_HASH(iVar0);
}

char* func_216(char* sParam0, int iParam1)
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_359(MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

int func_217(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;

	iVar0 = 0;
	if (!func_345(iParam0, 0))
	{
		return 0;
	}
	iVar1 = func_346(iParam0);
	if (iVar1 == joaat("AMMO") || (bParam1 && iVar1 == joaat("WEAPON")))
	{
		iVar2 = func_360(iParam0, 1);
		if (iVar2 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iVar2);
		}
	}
	else if (iVar1 == joaat("WEAPON"))
	{
		return func_361(iParam0, 0);
	}
	if (func_362(iParam0, joaat("DEFAULT")) != 0)
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_344(bParam2), iParam0, iParam3);
	}
	else
	{
		Var3 = { func_363(iParam0, bParam2) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var3))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_344(bParam2), &Var3, iParam3);
	}
	return iVar0;
}

bool func_218(int iParam0)
{
	if (((((iParam0 == joaat("UPGRADE_FSH_BAIT_BREAD") || iParam0 == joaat("UPGRADE_FSH_BAIT_CORN")) || iParam0 == joaat("UPGRADE_FSH_BAIT_CHEESE")) || func_220(iParam0)) || iParam0 == joaat("UPGRADE_FSH_BAIT_NONE")) || iParam0 == joaat("UPGRADE_FSH_LURE_NONE"))
	{
		return true;
	}
	return false;
}

bool func_219(int iParam0)
{
	if ((iParam0 == joaat("UPGRADE_FSH_BAIT_LURE_RIVER") || iParam0 == joaat("UPGRADE_FSH_BAIT_LURE_LAKE")) || iParam0 == joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"))
	{
		return true;
	}
	return false;
}

bool func_220(int iParam0)
{
	if (((iParam0 == joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER") || iParam0 == joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE")) || iParam0 == joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP")) || iParam0 == joaat("UPGRADE_FSH_BAIT_SPINNER_FRESHWATER_LEG"))
	{
		return true;
	}
	return false;
}

void func_221(int iParam0, var uParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(4, &Var0, 2, 2);
}

int func_222()
{
	float fVar0;

	fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
	if (fVar0 < 0.01f)
	{
		return 19;
	}
	if (fVar0 < 0.16f)
	{
		return 15;
	}
	if (fVar0 < 0.31f)
	{
		return 17;
	}
	if (fVar0 < 0.46f)
	{
		return 16;
	}
	if (fVar0 < 0.61f)
	{
		return 18;
	}
	return 0;
}

int func_223(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 170;
		case 1:
			return 171;
		case 2:
			return 172;
		case 3:
			return 173;
		case 4:
			return 174;
		case 5:
			return 175;
		case 6:
			return 175;
		case 7:
			return 175;
		case 8:
			return 176;
		case 9:
			return 177;
		case 10:
			return 178;
		case 11:
			return 179;
		case 12:
			return 180;
		case 13:
			return 181;
		case 14:
			return 182;
		case 15:
			return 183;
		case 16:
			return 184;
		default:
			break;
	}
	return -1;
}

int func_224(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

bool func_225(int iParam0)
{
	return iParam0 != 0;
}

void func_226(int iParam0)
{
	UIFEED::_0xDD1232B332CBB9E7(1, iParam0, 0);
}

void func_227(var uParam0, var uParam1)
{
	uParam1->f_165 = MISC::GET_RANDOM_INT_IN_RANGE(uParam0->f_52, uParam0->f_53 + 1);
	func_93(&(uParam1->f_203));
}

void func_228(int iParam0)
{
	if (func_322(iParam0))
	{
		func_133(&(Global_1903071.f_5.f_6), iParam0);
	}
}

void func_229(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	char* sVar1;
	char* sVar2;

	if (func_56(uParam1, 8192) && func_56(uParam1, 16384))
	{
		return;
	}
	if (uParam1->f_163 == 0)
	{
		return;
	}
	if ((func_51(&(uParam1->f_160)) && func_52(&(uParam1->f_160)) > uParam1->f_166) && iParam3 != 0)
	{
		return;
	}
	iVar0 = func_77(uParam1);
	if (!func_126(iVar0))
	{
		return;
	}
	if (iParam3 == 0)
	{
		sVar1 = "LARGE_BITE_FISH_END";
		sVar2 = "LARGE_BITE_ROD_END";
	}
	else if (iParam3 == 1)
	{
		sVar1 = "LARGE_BITE_FISH_HOOKED";
		sVar2 = "LARGE_BITE_ROD_HOOKED";
	}
	else
	{
		sVar1 = "LARGE_BITE_FISH_FLEE";
		sVar2 = "LARGE_BITE_ROD_FLEE";
	}
	if (!func_56(uParam1, 8192) && AUDIO::_0x84848E1C0FC67DBB(uParam1->f_67))
	{
		AUDIO::_0xF1C5310FEAA36B48(uParam1->f_67, sVar1, func_138(), *uParam0, 0, 0);
		AUDIO::_0x503703EC1781B7D6(uParam1->f_67, "FishSize", uParam2->f_278[iVar0]);
		func_301(uParam1, 8192);
	}
	if (!func_56(uParam1, 16384) && AUDIO::_0x84848E1C0FC67DBB(uParam1->f_68))
	{
		AUDIO::_0xF1C5310FEAA36B48(uParam1->f_68, sVar2, PLAYER::PLAYER_PED_ID(), *uParam0, 0, 0);
		AUDIO::_0x503703EC1781B7D6(uParam1->f_68, "FishSize", uParam2->f_278[iVar0]);
		func_301(uParam1, 16384);
	}
}

bool func_230(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	var uVar1;

	iVar0 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	if (((iVar0 == Global_1071686.f_22971.f_1 || Global_1071686.f_22971.f_1 == 0) || iParam1 > Global_1071686.f_22971) || iParam1 == 4)
	{
		if (bParam2)
		{
			uVar1 = -1;
			MISC::_COPY_MEMORY(&(Global_1071686.f_22971), &uVar1, 2);
		}
		else
		{
			Global_1071686.f_22971.f_1 = SCRIPTS::GET_ID_OF_THIS_THREAD();
			Global_1071686.f_22971 = iParam1;
		}
		if (AUDIO::TRIGGER_MUSIC_EVENT(sParam0))
		{
		}
		return true;
	}
	return false;
}

void func_231(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_364(iParam1);
	if (func_365(iVar0) && FLOCK::_0x19870C40C7EE15BE(iVar0, uParam0->f_77[iParam1]))
	{
		FLOCK::_0xC3D581A34BC0A1F0(iVar0, uParam0->f_77[iParam1]);
		func_366(iParam1, 0f);
	}
}

void func_232(var uParam0, int iParam1, int iParam2)
{
	if (uParam0->f_93[iParam1] != iParam2)
	{
		uParam0->f_93[iParam1] = iParam2;
	}
}

void func_233(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_234(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 > 60)
	{
		return false;
	}
	if (Global_1951255[iParam0 /*23*/].f_1 & 2 == 0)
	{
		return false;
	}
	return HUD::_UIPROMPT_IS_VALID(Global_1951255[iParam0 /*23*/].f_3);
}

void func_235(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_234(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_367(*uParam0);
	if (Global_1951255[iVar0 /*23*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_368(iVar0);
	*uParam0 = 0;
}

void func_236(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_237(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_369();
	if (func_61(iVar0))
	{
		iVar1 = func_370(iVar0);
		uParam0->f_216[iParam1] = iVar1;
	}
}

bool func_238(var uParam0, vector3 vParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_371(uParam0, vParam1);
	iVar1 = func_372(vParam1);
	return (iVar0 == 1 && iVar1 == 1);
}

bool func_239(vector3 vParam0)
{
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, 2331.62f, -1216.34f, 45f, false) < 15f || MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, 210.38f, 1876.39f, 200.66f, false) < 125f)
	{
		return true;
	}
	return false;
}

bool func_240(vector3 vParam0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	bool bVar5;

	bVar4 = WATER::TEST_VERTICAL_PROBE_AGAINST_ALL_WATER(func_140(vParam0, 1092616192 /* Float: 10f */), 0, &fVar0);
	bVar5 = MISC::GET_GROUND_Z_FOR_3D_COORD(func_140(vParam0, 1092616192 /* Float: 10f */), &fVar1, false);
	fVar2 = (fVar0 - fVar1);
	fVar3 = func_373(uParam3);
	if ((bVar4 == 1 && bVar5 == 1) && fVar2 > fVar3)
	{
		if (fVar2 > 2f)
		{
			fVar2 = 2f;
		}
		*uParam4 = (fVar0 - (fVar2 / 2f));
		return true;
	}
	return false;
}

int func_241(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, false, false);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_374(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

bool func_242(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0) && FLOCK::GET_ANIMAL_TUNING_BOOL_PARAM(iParam0, 64))
	{
		return true;
	}
	return false;
}

bool func_243(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_123[iVar0]) && uParam0->f_123[iVar0] == *uParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_244(var uParam0)
{
	if (!func_51(uParam0))
	{
		return 0;
	}
	if (func_135(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000f));
	}
	return (func_136() - BUILTIN::ROUND((uParam0->f_1 * 1000f)));
}

void func_245(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iParam0))
	{
		NETWORK::NETWORK_REGISTER_ENTITY_AS_NETWORKED(iParam0);
	}
}

int func_246(int iParam0)
{
	int iVar0;

	iVar0 = 15;
	switch (iParam0)
	{
		case joaat("A_C_FISHBLUEGIL_01_SM"):
		case joaat("A_C_FISHBLUEGIL_01_MS"):
			iVar0 = 0;
			break;
		case joaat("A_C_FISHBULLHEADCAT_01_MS"):
		case joaat("A_C_FISHBULLHEADCAT_01_SM"):
			iVar0 = 1;
			break;
		case joaat("A_C_FISHCHAINPICKEREL_01_MS"):
		case joaat("A_C_FISHCHAINPICKEREL_01_SM"):
			iVar0 = 2;
			break;
		case joaat("A_C_FISHCHANNELCATFISH_01_XL"):
		case joaat("A_C_FISHCHANNELCATFISH_01_LG"):
			iVar0 = 3;
			break;
		case joaat("A_C_FISHLAKESTURGEON_01_LG"):
			iVar0 = 4;
			break;
		case joaat("A_C_FISHLARGEMOUTHBASS_01_MS"):
		case joaat("A_C_FISHLARGEMOUTHBASS_01_LG"):
			iVar0 = 5;
			break;
		case joaat("A_C_FISHLONGNOSEGAR_01_LG"):
			iVar0 = 6;
			break;
		case joaat("A_C_FISHMUSKIE_01_LG"):
			iVar0 = 7;
			break;
		case joaat("A_C_FISHNORTHERNPIKE_01_LG"):
			iVar0 = 8;
			break;
		case joaat("A_C_FISHPERCH_01_MS"):
		case joaat("A_C_FISHPERCH_01_SM"):
			iVar0 = 9;
			break;
		case joaat("A_C_FISHREDFINPICKEREL_01_MS"):
		case joaat("A_C_FISHREDFINPICKEREL_01_SM"):
			iVar0 = 10;
			break;
		case joaat("A_C_FISHROCKBASS_01_MS"):
		case joaat("A_C_FISHROCKBASS_01_SM"):
			iVar0 = 11;
			break;
		case joaat("A_C_FISHSMALLMOUTHBASS_01_LG"):
		case joaat("A_C_FISHSMALLMOUTHBASS_01_MS"):
			iVar0 = 12;
			break;
		case joaat("A_C_FISHSALMONSOCKEYE_01_MS"):
		case joaat("A_C_FISHSALMONSOCKEYE_01_LG"):
			iVar0 = 13;
			break;
		case joaat("A_C_FISHRAINBOWTROUT_01_LG"):
		case joaat("A_C_FISHRAINBOWTROUT_01_MS"):
			iVar0 = 14;
			break;
		default:
			break;
	}
	return iVar0;
}

float func_247(int iParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;

	fVar0 = func_375(iParam0, 1);
	fVar1 = func_376(iParam0, 1);
	fVar2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(fVar0, fVar1);
	fVar3 = func_377(fVar2);
	return fVar3;
}

int func_248(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("A_C_FISHBLUEGIL_01_SM"):
		case joaat("A_C_FISHROCKBASS_01_SM"):
		case joaat("A_C_FISHCHAINPICKEREL_01_SM"):
		case joaat("A_C_FISHREDFINPICKEREL_01_SM"):
		case joaat("A_C_FISHPERCH_01_SM"):
		case joaat("A_C_FISHBULLHEADCAT_01_SM"):
			iVar0 = 0;
			break;
		case joaat("A_C_FISHROCKBASS_01_MS"):
		case joaat("A_C_FISHCHAINPICKEREL_01_MS"):
		case joaat("A_C_FISHPERCH_01_MS"):
		case joaat("A_C_FISHREDFINPICKEREL_01_MS"):
		case joaat("A_C_FISHSALMONSOCKEYE_01_MS"):
		case joaat("A_C_FISHLARGEMOUTHBASS_01_MS"):
		case joaat("A_C_FISHRAINBOWTROUT_01_MS"):
		case joaat("A_C_FISHBULLHEADCAT_01_MS"):
		case joaat("A_C_FISHSMALLMOUTHBASS_01_MS"):
		case joaat("A_C_FISHBLUEGIL_01_MS"):
			iVar0 = 1;
			break;
		case joaat("A_C_FISHCHANNELCATFISH_01_XL"):
		case joaat("A_C_FISHSMALLMOUTHBASS_01_LG"):
		case joaat("A_C_FISHMUSKIE_01_LG"):
		case joaat("A_C_FISHLONGNOSEGAR_01_LG"):
		case joaat("A_C_FISHLAKESTURGEON_01_LG"):
		case joaat("A_C_FISHRAINBOWTROUT_01_LG"):
		case joaat("A_C_FISHLARGEMOUTHBASS_01_LG"):
		case joaat("A_C_FISHSALMONSOCKEYE_01_LG"):
		case joaat("A_C_FISHNORTHERNPIKE_01_LG"):
		case joaat("A_C_FISHCHANNELCATFISH_01_LG"):
			iVar0 = 4;
			break;
		default:
			break;
	}
	return iVar0;
}

void func_249(int iParam0, int iParam1)
{
	func_378(iParam0, iParam1);
}

void func_250(var uParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(func_138()))
	{
		ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(uParam0->f_123[iParam1], func_138(), false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(func_141()))
	{
		ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(uParam0->f_123[iParam1], func_141(), false);
	}
}

void func_251()
{
	if (ENTITY::DOES_ENTITY_EXIST(func_141()) && ENTITY::IS_ENTITY_ATTACHED(func_141()))
	{
		ENTITY::DETACH_ENTITY(func_141(), true, true);
	}
}

void func_252(var uParam0, var uParam1, int iParam2)
{
	if (func_51(&(uParam0->f_182)))
	{
		return;
	}
	if (!func_61(uParam1->f_247[iParam2]))
	{
		return;
	}
	if (uParam0->f_177 == 0)
	{
		uParam0->f_194 = func_379(uParam1, iParam2);
	}
	else
	{
		uParam0->f_194 = BUILTIN::ROUND((IntToFloat(uParam0->f_194) * 0.95f));
	}
	if (uParam0->f_194 < 4000)
	{
		uParam0->f_194 = 4000;
	}
	if (uParam0->f_177 > 0)
	{
		func_380(uParam0);
	}
	uParam0->f_177++;
	func_53(&(uParam0->f_185));
	func_53(&(uParam0->f_191));
	func_93(&(uParam0->f_182));
	func_53(&(uParam0->f_188));
	func_53(&(uParam0->f_196));
}

void func_253(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (!func_126(iParam3))
	{
		return;
	}
	if (AUDIO::_0x84848E1C0FC67DBB(uParam1->f_69))
	{
		AUDIO::_0xF1C5310FEAA36B48(uParam1->f_69, "STRUGGLE", uParam2->f_123[iParam3], *uParam0, 0, 0);
		AUDIO::_0x503703EC1781B7D6(uParam1->f_69, "FishSize", uParam2->f_278[iParam3]);
	}
}

int func_254(var uParam0)
{
	int iVar0;
	int iVar1;

	if (func_51(&(uParam0->f_188)))
	{
		iVar0 = BUILTIN::ROUND((BUILTIN::TO_FLOAT(func_52(&(uParam0->f_188))) / 2f));
	}
	iVar1 = (uParam0->f_194 - iVar0);
	if (iVar1 < 4000)
	{
		iVar1 = 4000;
	}
	if (func_51(&(uParam0->f_182)) && func_52(&(uParam0->f_182)) >= iVar1)
	{
		return 1;
	}
	return 0;
}

int func_255(var uParam0)
{
	if (func_263(uParam0, 0) || uParam0->f_200 == 7)
	{
		return 1;
	}
	return 0;
}

bool func_256(var uParam0, var uParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_381(uParam1, iParam2);
	iVar0 = BUILTIN::ROUND((IntToFloat(iVar0) * 0.95f));
	return BUILTIN::TO_FLOAT(func_244(&(uParam0->f_12))) >= IntToFloat(iVar0 * 1000);
}

void func_257(var uParam0, var uParam1, int iParam2)
{
	if (func_51(&(uParam0->f_185)))
	{
		return;
	}
	if (!func_61(uParam1->f_247[iParam2]))
	{
		return;
	}
	if (uParam0->f_178 == 0)
	{
		uParam0->f_195 = func_382(uParam1, iParam2);
	}
	else
	{
		uParam0->f_195 = BUILTIN::ROUND((IntToFloat(uParam0->f_195) / 0.98f));
	}
	if (uParam0->f_195 > 10000)
	{
		uParam0->f_195 = 10000;
	}
	uParam0->f_178++;
	func_53(&(uParam0->f_182));
	func_53(&(uParam0->f_188));
	func_93(&(uParam0->f_185));
	func_53(&(uParam0->f_191));
}

int func_258(var uParam0)
{
	int iVar0;
	int iVar1;

	if (func_51(&(uParam0->f_191)))
	{
		iVar0 = BUILTIN::ROUND((BUILTIN::TO_FLOAT(func_52(&(uParam0->f_191))) / 2f));
	}
	iVar1 = (uParam0->f_195 + iVar0);
	if (iVar1 > 10000)
	{
		iVar1 = 10000;
	}
	if ((((func_51(&(uParam0->f_185)) && func_52(&(uParam0->f_185)) >= iVar1) && !func_263(uParam0, 0)) && uParam0->f_200 != 7) && func_270(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_259(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = BUILTIN::ROUND((BUILTIN::TO_FLOAT(uParam1->f_195) / 2f));
	if ((((((func_51(&(uParam1->f_185)) && func_52(&(uParam1->f_185)) >= iVar0) && func_51(&(uParam0->f_12))) && func_52(&(uParam0->f_12)) >= iVar0) && !func_263(uParam1, 0)) && uParam1->f_200 != 7) && func_270(uParam1))
	{
		return 1;
	}
	return 0;
}

void func_260(var uParam0)
{
	if (!func_51(uParam0))
	{
	}
	if (!func_135(uParam0))
	{
		uParam0->f_2 = (func_273() - uParam0->f_1);
		func_342(uParam0, 2);
	}
}

bool func_261()
{
	return true;
}

void func_262(var uParam0)
{
	if (!func_51(uParam0))
	{
	}
	if (func_135(uParam0))
	{
		uParam0->f_1 = (func_273() - uParam0->f_2);
		uParam0->f_2 = 0f;
		func_343(uParam0, 2);
	}
}

bool func_263(var uParam0, int iParam1)
{
	if (func_308(2, 1))
	{
		if (iParam1 == 1)
		{
		}
		return true;
	}
	else if (Global_1903071.f_5.f_2 <= 1f)
	{
		if (iParam1 == 1)
		{
		}
		return true;
	}
	else if (uParam0->f_200 == 8)
	{
		if (iParam1 == 1)
		{
		}
		return true;
	}
	return false;
}

bool func_264(var uParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_8))
	{
		iVar0 = func_383(joaat("UPGRADE_FSH_BAIT_BREAD"));
		if (iVar0 != 0)
		{
			STREAMING::REQUEST_MODEL(iVar0, false);
			if (STREAMING::HAS_MODEL_LOADED(iVar0))
			{
				uParam0->f_8 = OBJECT::CREATE_OBJECT(iVar0, Global_35, false, false, false, false, false);
				ENTITY::SET_ENTITY_VISIBLE(uParam0->f_8, false);
				ENTITY::SET_ENTITY_COLLISION(uParam0->f_8, false, false);
				ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_8, true);
				OBJECT::SET_OBJECT_TARGETTABLE(uParam0->f_8, false);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
			}
		}
	}
	return ENTITY::DOES_ENTITY_EXIST(uParam0->f_8);
}

bool func_265(var uParam0, var uParam1, int iParam2)
{
	float fVar0;

	if (uParam0->f_16 != -99999f)
	{
		fVar0 = func_274(Global_35, func_143(uParam1, iParam2));
		if ((fVar0 < 5f && uParam0->f_16 > 0.01f) || (fVar0 < 10f && uParam0->f_16 > 0.05f))
		{
			return true;
		}
	}
	return false;
}

void func_266(var uParam0, var uParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	float fVar7;
	vector3 vVar8;

	if (uParam0->f_200 != 5)
	{
		vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, 15f, 0f) };
		vVar0.x = (vVar0.x + MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f));
		vVar0.f_1 = (vVar0.y + MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f));
		vVar3 = { func_271(vVar0, 0) };
		if (!func_38(vVar3))
		{
			fVar6 = func_384(vVar3, 0);
			fVar7 = func_373(ENTITY::GET_ENTITY_MODEL(uParam1->f_123[iParam2]));
			if (fVar6 > fVar7 && !func_385(vVar3))
			{
				vVar8 = { vVar3 };
				vVar8.f_2 = (vVar8.z - 0.25f);
				func_386(uParam0, vVar8);
				uParam0->f_200 = 5;
				uParam0->f_223 = 1;
			}
			else
			{
				uParam0->f_200 = 6;
			}
		}
		else
		{
			uParam0->f_200 = 6;
		}
	}
}

bool func_267(var uParam0, var uParam1, int iParam2)
{
	if (!func_270(uParam0))
	{
		return false;
	}
	if (func_387(uParam0, uParam1, iParam2))
	{
		return true;
	}
	if (!func_156(uParam1->f_123[iParam2], 1227113341))
	{
		return true;
	}
	if (func_388(uParam1->f_123[iParam2], uParam0->f_8, 0, 1) < 1f)
	{
		return true;
	}
	if (uParam0->f_200 != 2 && func_388(PLAYER::PLAYER_PED_ID(), uParam1->f_123[iParam2], 0, 1) < 6f)
	{
		return true;
	}
	if (func_51(&(uParam0->f_215)) && func_52(&(uParam0->f_215)) > 3000)
	{
		if ((uParam0->f_201 == 4 && IntToFloat(func_127()) < -25f) || (uParam0->f_201 == 3 && IntToFloat(func_127()) > 25f))
		{
			uParam0->f_218 = 1;
			return true;
		}
	}
	return false;
}

void func_268(var uParam0, var uParam1, var uParam2, int iParam3, vector3 vParam4)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	vector3 vVar4;
	vector3 vVar7;
	float fVar10;
	vector3 vVar11;

	fVar0 = func_389(PLAYER::PLAYER_PED_ID(), uParam2->f_123[iParam3], 1);
	iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
	fVar3 = func_373(ENTITY::GET_ENTITY_MODEL(uParam2->f_123[iParam3]));
	if (uParam1->f_218 == 1)
	{
		if (func_127() < 0)
		{
			iVar2 = 0;
		}
		else
		{
			iVar2 = 1;
		}
	}
	if (func_388(PLAYER::PLAYER_PED_ID(), uParam2->f_123[iParam3], 0, 1) < 6f)
	{
		uParam1->f_200 = 2;
	}
	else if (!func_81(uParam2, iParam3))
	{
		fVar1 = (fVar0 + IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(-10, 10)));
		uParam1->f_200 = 1;
	}
	else if (func_390(iVar2))
	{
		fVar1 = (fVar0 - IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(65, 85)));
		uParam1->f_200 = 4;
	}
	else if (func_391(iVar2))
	{
		fVar1 = (fVar0 + IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(65, 85)));
		uParam1->f_200 = 3;
	}
	else
	{
		fVar1 = (fVar0 + IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(-10, 10)));
		uParam1->f_200 = 1;
	}
	if (uParam1->f_200 == 2)
	{
		vVar4 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, (6f + 1f), 0f) };
		vVar7 = { func_271(vVar4, 0) };
	}
	else
	{
		vVar4 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam4, fVar1, 0f, 2.5f, 0f) };
		vVar7 = { func_271(vVar4, 0) };
	}
	if (!func_38(vVar7))
	{
		fVar10 = func_384(vVar7, 0);
		if ((!func_392(uParam1, fVar10, fVar3) || !func_238(uParam0, vVar7)) || func_385(vVar7))
		{
			uParam1->f_200 = 6;
		}
		else
		{
			vVar11 = { vVar7 };
			vVar11.f_2 = (vVar11.z - 0.25f);
			func_386(uParam1, vVar11);
		}
	}
}

void func_269(var uParam0, var uParam1, int iParam2)
{
	if (func_131())
	{
		uParam0->f_222 = 1f;
	}
	else if (func_393())
	{
		uParam0->f_222 = 1.5f;
	}
	else if (func_81(uParam1, iParam2))
	{
		uParam0->f_222 = 3f;
	}
	else
	{
		uParam0->f_222 = 1.5f;
	}
}

bool func_270(var uParam0)
{
	return (uParam0->f_16 != -99999f && uParam0->f_16 < 0.03f);
}

Vector3 func_271(vector3 vParam0, int iParam3)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	float fVar5;
	bool bVar6;
	bool bVar7;

	iVar0 = 1;
	if (iParam3 == 1)
	{
		iVar0 = 0;
	}
	vVar1 = { 0f, 0f, 0f };
	bVar6 = WATER::TEST_VERTICAL_PROBE_AGAINST_ALL_WATER(func_140(vParam0, 1092616192 /* Float: 10f */), iVar0, &fVar4);
	bVar7 = MISC::GET_GROUND_Z_FOR_3D_COORD(func_140(vParam0, 1092616192 /* Float: 10f */), &fVar5, false);
	if ((bVar6 == 1 || bVar7 == 0) || fVar4 > fVar5)
	{
		vVar1.x = vParam0.x;
		vVar1.f_1 = vParam0.y;
		vVar1.f_2 = fVar4;
	}
	return vVar1;
}

void func_272(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	if (!func_126(iParam3))
	{
		return;
	}
	iVar0 = func_394(uParam1);
	if (iVar0 > -1)
	{
		AUDIO::_0xDCF5BA95BBF0FABA(uParam1->f_70[iVar0], "VFX_SPLASH", func_139(), *uParam0, 0, 0, 1);
		AUDIO::_0x503703EC1781B7D6(uParam1->f_70[iVar0], "FishSize", uParam2->f_278[iParam3]);
	}
}

float func_273()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

float func_274(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

void func_275(var uParam0, var uParam1, var uParam2)
{
	if (func_56(uParam1, 1))
	{
		return;
	}
	func_110(uParam1);
	if (func_56(uParam1, 128))
	{
		func_395(uParam1, uParam2);
		func_111(uParam0, uParam1, uParam2, 0, 0);
	}
	func_43(uParam1, uParam2, -1);
	func_228(512);
	uParam1->f_1 = 0;
	func_301(uParam1, 1);
	Global_1903071.f_5.f_6 = 0;
	func_302(1);
	func_302(2);
	func_302(4);
	func_302(8);
	func_302(16);
	func_302(32);
	uParam1->f_167 = 0;
	uParam1->f_194 = 0;
	uParam1->f_195 = 0;
	uParam1->f_177 = 0;
	uParam1->f_178 = 0;
	uParam1->f_200 = 0;
	uParam1->f_202 = 0f;
	uParam1->f_172 = 0;
	uParam1->f_173 = 0;
	uParam1->f_174 = 0;
	uParam1->f_175 = 0;
	uParam1->f_176 = 0;
	uParam1->f_156 = 0;
	uParam1->f_3 = 0;
	uParam1->f_168 = 1f;
	func_53(&(uParam1->f_169));
	func_53(&(uParam1->f_203));
	func_53(&(uParam1->f_182));
	func_53(&(uParam1->f_185));
	func_53(&(uParam1->f_188));
	func_53(&(uParam1->f_191));
	func_53(&(uParam1->f_179));
	func_53(&(uParam1->f_160));
	func_114(uParam1, 0);
	func_40(&(uParam0->f_82), 0);
	func_287(uParam0, uParam0->f_4);
	func_47(uParam0);
	func_120(uParam0, 16);
	func_20(&(uParam0->f_19));
	func_53(&(uParam0->f_73));
	func_53(&(uParam0->f_76));
	uParam0->f_47 = func_204();
	uParam0->f_48 = func_332(uParam0->f_47);
	func_357(uParam0);
	func_22(uParam1);
	func_23(uParam1);
	func_24(uParam1);
	func_212();
}

bool func_276()
{
	return ((func_396() || func_397()) || func_398());
}

bool func_277()
{
	int iVar0;

	iVar0 = UIFEED::_0xC17F69E1418CD11F(1);
	return (iVar0 != 0 && UIFEED::_0x59FA676177DBE4C9(iVar0) == 4);
}

void func_278(var uParam0, int iParam1, int iParam2)
{
	if (func_107((*uParam0)[iParam1]))
	{
		func_108();
		func_207(&(uParam0->f_442), 3f);
	}
	if (iParam2 == 1)
	{
		func_125(uParam0, iParam1);
	}
}

bool func_279()
{
	if (func_276())
	{
		return true;
	}
	return false;
}

int func_280(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (((((func_276() || func_399(&(uParam0->f_82), iParam1)) || func_107(uParam0->f_82[iParam1])) || func_400(&(uParam0->f_82), iParam1)) || ((iParam2 == 0 && func_51(&(uParam0->f_82.f_442))) && func_52(&(uParam0->f_82.f_442)) < 3000)) || (iParam2 == 0 && func_277()))
	{
		return 0;
	}
	func_108();
	if (iParam1 == 58)
	{
		uParam0->f_82[iParam1] = func_403(MISC::_CREATE_VAR_STRING(10, func_401(iParam1), func_402(Global_1903071.f_37)), iParam3, 0, 0, 0, 1);
	}
	else
	{
		uParam0->f_82[iParam1] = func_403(func_401(iParam1), iParam3, 0, 0, 0, 1);
	}
	if (iParam4 == 1)
	{
		uParam0->f_82.f_74[iParam1] = 1;
	}
	func_93(&(uParam0->f_82.f_442));
	return 1;
}

bool func_281()
{
	if (func_293())
	{
		return false;
	}
	return true;
}

void func_282(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (func_46())
	{
		return;
	}
	if (iParam1 == 3)
	{
		if (HUD::_UIPROMPT_IS_VALID(uParam0->f_70))
		{
			return;
		}
	}
	else if (func_234(uParam0->f_60[iParam1]))
	{
		return;
	}
	switch (iParam1)
	{
		case 0:
			uParam0->f_60[iParam1] = func_404("MGFSH_CTX_GRIP", joaat("INPUT_AIM"), 3, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
			func_405(uParam0->f_60[iParam1], 1);
			iVar0 = func_367(uParam0->f_60[iParam1]);
			if (HUD::_UIPROMPT_IS_VALID(Global_1951255[iVar0 /*23*/].f_3))
			{
				HUD::_UIPROMPT_SET_TAG(Global_1951255[iVar0 /*23*/].f_3, "CTX_GRIP");
			}
			break;
		case 1:
			if (Global_1903071.f_5 == 6 || Global_1903071.f_5 == 10)
			{
				uParam0->f_60[iParam1] = func_404("MGFSH_CTX_RESET", joaat("INPUT_MINIGAME_FISHING_RESET_CAST"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
			}
			else
			{
				uParam0->f_60[iParam1] = func_404("MGFSH_CTX_CUT_LINE", joaat("INPUT_MINIGAME_FISHING_RESET_CAST"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
			}
			break;
		case 2:
			uParam0->f_60[iParam1] = func_404("MGFSH_CTX_HOOK", joaat("INPUT_MINIGAME_FISHING_HOOK"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
			func_406(uParam0->f_60[iParam1], 0, 1, 1);
			func_405(uParam0->f_60[iParam1], 1);
			func_407(uParam0->f_60[iParam1], joaat("INPUT_ATTACK"));
			iVar0 = func_367(uParam0->f_60[iParam1]);
			if (HUD::_UIPROMPT_IS_VALID(Global_1951255[iVar0 /*23*/].f_3))
			{
				HUD::_UIPROMPT_SET_TAG(Global_1951255[iVar0 /*23*/].f_3, "CTX_HOOK");
			}
			break;
		case 3:
			uParam0->f_528 = TASK::_0x5952DFA38FA529FE();
			uParam0->f_70 = HUD::_UIPROMPT_REGISTER_BEGIN();
			HUD::_0xF4A5C4509BF923B1(uParam0->f_70, 0);
			if (PAD::_IS_USING_KEYBOARD(0) || uParam0->f_528 == 1)
			{
				HUD::_UIPROMPT_SET_CONTROL_ACTION(uParam0->f_70, joaat("INPUT_MINIGAME_FISHING_MANUAL_REEL_IN"));
			}
			else
			{
				HUD::_UIPROMPT_SET_CONTROL_ACTION(uParam0->f_70, joaat("INPUT_MINIGAME_FISHING_RIGHT_AXIS_X"));
				HUD::_UIPROMPT_SET_CONTROL_ACTION(uParam0->f_70, joaat("INPUT_MINIGAME_FISHING_RIGHT_AXIS_Y"));
				HUD::_UIPROMPT_SET_ROTATE_MODE(uParam0->f_70, 0f, 0);
			}
			HUD::_UIPROMPT_SET_ATTRIBUTE(uParam0->f_70, 10, 1);
			HUD::_UIPROMPT_SET_ATTRIBUTE(uParam0->f_70, 11, 1);
			HUD::_UIPROMPT_SET_ATTRIBUTE(uParam0->f_70, 18, 1);
			if (iParam2 == 1)
			{
				HUD::_UIPROMPT_SET_TEXT(uParam0->f_70, "MGFSH_CTX_REEL_LURE");
			}
			else
			{
				HUD::_UIPROMPT_SET_TEXT(uParam0->f_70, "MGFSH_CTX_REEL_IN");
			}
			HUD::_UIPROMPT_SET_TAG(uParam0->f_70, "CTX_REEL");
			HUD::_UIPROMPT_REGISTER_END(uParam0->f_70);
			break;
		case 4:
			uParam0->f_60[iParam1] = func_404("MGFSH_CTX_CONTROL", joaat("INPUT_MINIGAME_FISHING_LEFT_AXIS_X"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
			func_405(uParam0->f_60[iParam1], 1);
			break;
		case 5:
			uParam0->f_60[iParam1] = func_404("MGFSH_CTX_THROW_BACK", joaat("INPUT_MINIGAME_FISHING_RELEASE_FISH"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
			break;
		case 6:
			uParam0->f_60[iParam1] = func_404("MGFSH_CTX_KEEP", joaat("INPUT_MINIGAME_FISHING_KEEP_FISH"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
			if (iParam3 == 0)
			{
				func_406(uParam0->f_60[iParam1], 0, 1, 1);
			}
			break;
		case 7:
			uParam0->f_60[iParam1] = func_404("MGFSH_CTX_CHOOSE", joaat("INPUT_OPEN_WHEEL_MENU"), 3, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
			func_405(uParam0->f_60[iParam1], 1);
			func_407(uParam0->f_60[iParam1], joaat("INPUT_TOGGLE_HOLSTER"));
			func_407(uParam0->f_60[iParam1], joaat("INPUT_QUICK_EQUIP_ITEM"));
			break;
		case 8:
			uParam0->f_60[iParam1] = func_404(MISC::_CREATE_VAR_STRING(10, "MGFSH_CTX_EQUIP", func_216(func_215(uParam0->f_58), joaat("COLOR_PURE_WHITE"))), joaat("INPUT_MINIGAME_FISHING_QUICK_EQUIP"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
			break;
	}
}

void func_283(var uParam0, var uParam1, var uParam2)
{
	if ((!func_213(uParam0->f_57) || Global_39.f_5803 == uParam0->f_57) || func_293())
	{
		func_132(uParam0, 8);
		return;
	}
	if (!func_213(Global_39.f_5803))
	{
		if (uParam0->f_58 == 0)
		{
			if (func_210(uParam0->f_57, 1))
			{
				uParam0->f_58 = uParam0->f_57;
			}
			else if (func_210(joaat("UPGRADE_FSH_BAIT_BREAD"), 1))
			{
				uParam0->f_58 = joaat("UPGRADE_FSH_BAIT_BREAD");
			}
			else if (func_210(joaat("UPGRADE_FSH_BAIT_CORN"), 1))
			{
				uParam0->f_58 = joaat("UPGRADE_FSH_BAIT_CORN");
			}
			else if (func_210(joaat("UPGRADE_FSH_BAIT_CHEESE"), 1))
			{
				uParam0->f_58 = joaat("UPGRADE_FSH_BAIT_CHEESE");
			}
			else if (func_210(joaat("UPGRADE_FSH_BAIT_CRICKET"), 1))
			{
				uParam0->f_58 = joaat("UPGRADE_FSH_BAIT_CRICKET");
			}
			else if (func_210(joaat("UPGRADE_FSH_BAIT_WORM"), 1))
			{
				uParam0->f_58 = joaat("UPGRADE_FSH_BAIT_WORM");
			}
			else if (func_210(joaat("UPGRADE_FSH_BAIT_CRAYFISH"), 1))
			{
				uParam0->f_58 = joaat("UPGRADE_FSH_BAIT_CRAYFISH");
			}
			else if (func_210(joaat("UPGRADE_FSH_BAIT_LURE_RIVER"), 1))
			{
				uParam0->f_58 = joaat("UPGRADE_FSH_BAIT_LURE_RIVER");
			}
			else if (func_210(joaat("UPGRADE_FSH_BAIT_LURE_LAKE"), 1))
			{
				uParam0->f_58 = joaat("UPGRADE_FSH_BAIT_LURE_LAKE");
			}
			else if (func_210(joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"), 1))
			{
				uParam0->f_58 = joaat("UPGRADE_FSH_BAIT_LURE_SWAMP");
			}
			else if (func_210(joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"), 1))
			{
				uParam0->f_58 = joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER");
			}
			else if (func_210(joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"), 1))
			{
				uParam0->f_58 = joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE");
			}
			else if (func_210(joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"), 1))
			{
				uParam0->f_58 = joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP");
			}
			else if (func_210(joaat("UPGRADE_FSH_BAIT_SPINNER_FRESHWATER_LEG"), 1))
			{
				uParam0->f_58 = joaat("UPGRADE_FSH_BAIT_SPINNER_FRESHWATER_LEG");
			}
			else
			{
				uParam0->f_58 = 0;
			}
		}
		if (uParam0->f_58 == 0)
		{
			func_132(uParam0, 8);
		}
		else
		{
			func_282(uParam0, 8, 0, 1);
		}
	}
	if (func_408(uParam0->f_60[8], 1))
	{
		Global_1903071.f_36 = uParam0->f_58;
	}
}

void func_284(var uParam0, var uParam1)
{
	if (Global_1903071.f_36 != 0)
	{
		if (Global_1903071.f_36 != Global_39.f_5803 && func_213(Global_1903071.f_36))
		{
			func_214(uParam0, uParam1, Global_1903071.f_36, 1, 0);
		}
		Global_1903071.f_36 = 0;
	}
}

void func_285(var uParam0)
{
	if (!func_56(uParam0, 1024))
	{
		Global_1903071.f_5.f_1 = 30f;
		func_301(uParam0, 1024);
	}
}

void func_286(var uParam0)
{
	switch (Global_1903071.f_5.f_16)
	{
		case -1:
			func_278(&(uParam0->f_82), 15, 1);
			func_278(&(uParam0->f_82), 16, 1);
			func_278(&(uParam0->f_82), 17, 1);
			func_278(&(uParam0->f_82), 18, 1);
			func_278(&(uParam0->f_82), 19, 1);
			func_278(&(uParam0->f_82), 20, 1);
			func_278(&(uParam0->f_82), 21, 1);
			if (func_213(Global_39.f_5803))
			{
				func_280(uParam0, 25, 1, -1, 1);
			}
			break;
		case 1:
			if (PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_ATTACK")))
			{
				func_280(uParam0, 15, 1, -2, 0);
			}
			break;
		case 3:
			if (PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_ATTACK")))
			{
				func_280(uParam0, 16, 1, -2, 0);
			}
			break;
		case 2:
			if (PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_ATTACK")))
			{
				func_280(uParam0, 17, 1, -2, 0);
			}
			break;
		case 4:
			if (PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_ATTACK")))
			{
				func_280(uParam0, 18, 1, -2, 0);
			}
			break;
		case 5:
			if (PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_ATTACK")))
			{
				func_280(uParam0, 19, 1, -2, 0);
			}
			break;
		case 6:
			if (PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_ATTACK")))
			{
				func_280(uParam0, 20, 1, -2, 0);
			}
			break;
		case 7:
			if (PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_ATTACK")))
			{
				func_280(uParam0, 21, 1, -2, 0);
			}
			break;
	}
}

void func_287(var uParam0, char* sParam1)
{
	if (!MISC::ARE_STRINGS_EQUAL(uParam0->f_3, sParam1))
	{
		uParam0->f_3 = sParam1;
		AUDIO::_0xAC84686C06184B0D(uParam0->f_3, uParam0->f_1);
	}
}

void func_288(var uParam0)
{
	if (func_34(uParam0, 32))
	{
		return;
	}
	if (func_230("BOB_FISHING_START", 0, 0))
	{
		func_35(uParam0, 32);
	}
}

void func_289(var uParam0)
{
	if (!func_182(2))
	{
		if (func_308(16, 1) || func_409(uParam0))
		{
			func_93(&(uParam0->f_157));
			func_410(2);
		}
	}
}

void func_290(var uParam0, var uParam1)
{
	if (func_56(uParam1, 2))
	{
		return;
	}
	func_301(uParam1, 2);
	func_227(uParam0, uParam1);
	func_8(uParam1);
	func_114(uParam1, 1);
	uParam1->f_155++;
	func_47(uParam0);
	func_411(&(uParam0->f_82), 39, 30);
	if (ENTITY::DOES_ENTITY_EXIST(func_138()))
	{
		ENTITY::_0x978AA2323ED32209(func_138(), 0.1f);
	}
	if (ENTITY::DOES_ENTITY_EXIST(func_141()))
	{
		ENTITY::_0x978AA2323ED32209(func_141(), 0.1f);
	}
}

void func_291(var uParam0)
{
	if ((!func_56(uParam0, 512) && func_51(&(uParam0->f_169))) && func_412(&(uParam0->f_169)) < 6f)
	{
		uParam0->f_168 = 2f;
	}
	else
	{
		uParam0->f_168 = 1f;
	}
}

void func_292(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	if (!func_182(2))
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		iVar1 = iVar0;
		switch (uParam1->f_93[iVar0])
		{
			case 0:
				if (func_413(uParam0, uParam1, iVar1))
				{
					func_232(uParam1, iVar1, 1);
					func_93(&(uParam1->f_109[iVar0 /*3*/]));
				}
				else
				{
					func_231(uParam1, iVar1);
				}
				break;
			case 1:
				if (func_414(uParam0, uParam1, iVar1))
				{
					func_231(uParam1, iVar1);
					func_232(uParam1, iVar1, 0);
					func_93(&(uParam1->f_109[iVar0 /*3*/]));
				}
				else
				{
					func_415(uParam0, uParam1, iVar1);
				}
				break;
			case 2:
				func_231(uParam1, iVar1);
				break;
		}
		iVar0++;
	}
}

bool func_293()
{
	if (func_46())
	{
		return true;
	}
	return false;
}

int func_294(var uParam0)
{
	if (!func_51(&(uParam0->f_73)) || func_161(&(uParam0->f_73)) < 3f)
	{
		return 0;
	}
	if (func_213(Global_39.f_5803))
	{
		if (func_219(Global_39.f_5803) || func_220(Global_39.f_5803))
		{
			return 1;
		}
	}
	return 0;
}

void func_295(var uParam0, int iParam1)
{
	if (!PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_AIM")))
	{
		func_282(uParam0, 0, 0, 1);
		func_416(uParam0, 0, iParam1);
		if (!func_51(&(uParam0->f_73)))
		{
			func_93(&(uParam0->f_73));
		}
	}
	else
	{
		func_416(uParam0, 0, iParam1);
		func_132(uParam0, 0);
		func_53(&(uParam0->f_73));
	}
}

void func_296(var uParam0, var uParam1)
{
	if (uParam1->f_54 == 0 || uParam1->f_54 == 1)
	{
		func_282(uParam0, 2, 0, 1);
	}
	else
	{
		func_132(uParam0, 2);
	}
}

void func_297(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	vector3 vVar5;
	vector3 vVar8;
	float fVar11;
	float fVar12;

	if ((((((func_293() || (Global_1903071.f_5 == 6 && !func_182(2))) || (Global_1903071.f_5 == 6 && !PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_AIM")))) || (Global_1903071.f_5 == 10 && !func_182(2))) || (Global_1903071.f_5 == 10 && !PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_AIM")))) || PAD::_0x6CD79468A1E595C6(0)) || uParam0->f_528 != TASK::_0x5952DFA38FA529FE())
	{
		func_132(uParam0, 3);
		func_53(&(uParam0->f_76));
		uParam0->f_528 = TASK::_0x5952DFA38FA529FE();
		return;
	}
	if (!HUD::_UIPROMPT_IS_VALID(uParam0->f_70))
	{
		iVar0 = 0;
		if (Global_1903071.f_5 == 6)
		{
			if (func_219(Global_39.f_5803) || func_220(Global_39.f_5803))
			{
				iVar0 = 1;
			}
		}
		func_282(uParam0, 3, iVar0, 1);
	}
	if (!HUD::_UIPROMPT_IS_VALID(uParam0->f_70))
	{
		return;
	}
	fVar1 = 0f;
	if (Global_1903071.f_5.f_4 != 0f)
	{
		func_416(uParam0, 3, 0);
		func_53(&(uParam0->f_76));
		fVar1 = Global_1903071.f_5.f_4;
	}
	else if (Global_1903071.f_5 == 6 || Global_1903071.f_5 == 10)
	{
		if (uParam1->f_54 != 0)
		{
			if (func_417(uParam0))
			{
				func_416(uParam0, 3, 1);
			}
			else
			{
				func_416(uParam0, 3, 0);
			}
		}
		else
		{
			func_416(uParam0, 3, 0);
		}
	}
	else
	{
		iVar2 = func_77(uParam1);
		if (func_126(iVar2) && !func_81(uParam2, iVar2))
		{
			if (func_418(uParam0))
			{
				func_416(uParam0, 3, 1);
			}
			else
			{
				func_416(uParam0, 3, 0);
			}
		}
		else
		{
			func_416(uParam0, 3, 0);
			func_53(&(uParam0->f_76));
		}
	}
	fVar1 = func_183(fVar1, -1f, 1f);
	if (fVar1 > 0f)
	{
		fVar3 = PAD::GET_CONTROL_NORMAL(2, joaat("INPUT_MINIGAME_FISHING_RIGHT_AXIS_X"));
		fVar4 = PAD::GET_CONTROL_NORMAL(2, joaat("INPUT_MINIGAME_FISHING_RIGHT_AXIS_Y"));
		vVar5 = { func_419(fVar3, fVar4, 0f) };
		vVar8 = { 0f, -1f, 0f };
		fVar11 = MISC::GET_ANGLE_BETWEEN_2D_VECTORS(vVar5.x, vVar5.y, vVar8.x, vVar8.y);
		fVar12 = (fVar11 / 360f);
		if (fVar3 < 0f)
		{
			fVar12 = (1f - fVar12);
		}
		fVar12 = func_183(fVar12, 0f, 1f);
		fVar12 = (fVar12 + 0.5f);
		if (fVar12 > 1f)
		{
			fVar12 = (fVar12 - 1f);
		}
		if (!PAD::_IS_USING_KEYBOARD(0))
		{
			HUD::_UIPROMPT_SET_SPINNER_POSITION(uParam0->f_70, fVar12);
		}
	}
}

void func_298(var uParam0, var uParam1)
{
	if ((Global_1903071.f_5 == 6 && !func_56(uParam1, 4096)) && func_213(Global_39.f_5803))
	{
		if (uParam1->f_54 == 1)
		{
			func_280(uParam0, 30, 1, func_420(uParam0), 1);
			if (PAD::_IS_USING_KEYBOARD(0) && PLAYER::_0xF4CB347D7B5EB0FD())
			{
				if (TASK::_0x5952DFA38FA529FE())
				{
					func_280(uParam0, 34, 0, -2, 1);
				}
				else
				{
					func_280(uParam0, 33, 0, -2, 1);
				}
			}
			else if (TASK::_0x5952DFA38FA529FE())
			{
				func_280(uParam0, 32, 0, -2, 1);
			}
			else
			{
				func_280(uParam0, 31, 0, -2, 1);
			}
			func_280(uParam0, 37, 0, -2, 1);
			func_280(uParam0, 39, 0, -2, 1);
		}
		else
		{
			func_280(uParam0, 30, 1, func_420(uParam0), 1);
			func_280(uParam0, 37, 0, -2, 1);
			func_280(uParam0, 39, 0, -2, 1);
		}
	}
}

void func_299(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = func_77(uParam1);
	if ((!func_126(iVar0) && func_213(Global_39.f_5803)) && !func_293())
	{
		func_421(uParam0, uParam1, uParam2);
	}
	iVar0 = func_77(uParam1);
	if (func_126(iVar0))
	{
		if (!func_422(uParam0, uParam1, uParam2))
		{
			func_423(uParam0, uParam1, uParam2);
		}
		else
		{
			func_228(512);
			if (uParam1->f_163 == 1)
			{
				func_23(uParam1);
				if (func_51(&(uParam1->f_160)) && func_52(&(uParam1->f_160)) > uParam1->f_166)
				{
					func_229(uParam0, uParam1, uParam2, 0);
				}
				else
				{
					func_229(uParam0, uParam1, uParam2, 2);
				}
			}
			func_416(uParam0, 2, 0);
			func_424(uParam0, 2, 0);
			func_111(uParam0, uParam1, uParam2, 1, 0);
			uParam1->f_156 = 0;
			uParam1->f_55++;
			func_425(uParam0, uParam1, 1, 0);
		}
	}
}

bool func_300(var uParam0, var uParam1)
{
	if (func_56(uParam1, 4096))
	{
		return true;
	}
	else if (func_322(128))
	{
		return true;
	}
	else if (func_426(uParam0, uParam1))
	{
		return true;
	}
	else if (uParam1->f_54 == 0 && !func_213(Global_39.f_5803))
	{
		return true;
	}
	else if (func_427())
	{
		return true;
	}
	else if (func_182(8))
	{
		return true;
	}
	return false;
}

void func_301(var uParam0, int iParam1)
{
	if (!func_56(uParam0, iParam1))
	{
		func_123(&(uParam0->f_1), iParam1);
	}
}

void func_302(int iParam0)
{
	if (func_182(iParam0))
	{
		func_133(&(Global_1903071.f_2), iParam0);
	}
}

bool func_303(var uParam0, var uParam1, var uParam2)
{
	if (func_213(Global_39.f_5803))
	{
		if (func_408(uParam0->f_60[2], 1) || func_308(1, 1))
		{
			if (func_428(uParam0, uParam1, uParam2))
			{
				func_429(uParam0, uParam1, uParam2, func_77(uParam1));
				func_47(uParam0);
				func_287(uParam0, uParam0->f_7);
				return true;
			}
			else if (func_430(uParam1))
			{
				func_111(uParam0, uParam1, uParam2, 1, 0);
				if (uParam1->f_163 == 1)
				{
					func_280(uParam0, 41, 1, -2, 1);
				}
				else
				{
					func_280(uParam0, 42, 1, -2, 1);
				}
				uParam1->f_55++;
				func_425(uParam0, uParam1, 1, 0);
				func_180(1, 1);
				return true;
			}
		}
	}
	return false;
}

void func_304(var uParam0)
{
	if (!func_56(uParam0, 256))
	{
		if (func_308(1, 1))
		{
			func_301(uParam0, 256);
			if (func_51(&(uParam0->f_169)) && func_161(&(uParam0->f_169)) < 10f)
			{
				func_301(uParam0, 512);
			}
			else
			{
				func_96(uParam0, 512);
			}
			func_93(&(uParam0->f_169));
		}
		else if ((func_56(uParam0, 512) && func_51(&(uParam0->f_169))) && func_161(&(uParam0->f_169)) > 10f)
		{
			func_96(uParam0, 512);
		}
	}
	else if (!func_308(1, 0))
	{
		func_96(uParam0, 256);
	}
}

bool func_305(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = func_77(uParam1);
	if (func_126(iVar0))
	{
		func_431(uParam0, uParam1, uParam2, iVar0);
		func_432(uParam0, uParam1, uParam2, iVar0);
		func_433(uParam1);
	}
	else
	{
		uParam1->f_174 = 0;
		uParam1->f_173 = 0;
		uParam1->f_172 = 0;
	}
	if (func_434(uParam0, uParam1, uParam2, iVar0))
	{
		return true;
	}
	return false;
}

void func_306(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	if (func_56(uParam1, 524288))
	{
		return;
	}
	func_301(uParam1, 524288);
	func_47(uParam0);
	WATER::_0xA33F5069B0CB89B8();
	func_435();
	func_251();
	uParam1->f_56++;
	iVar0 = 0;
	iVar1 = func_77(uParam1);
	if (!func_126(iVar1) || ENTITY::IS_ENTITY_DEAD(uParam2->f_123[iVar1]))
	{
		iVar0 = 1;
	}
	func_425(uParam0, uParam1, 2, iVar0);
	func_111(uParam0, uParam1, uParam2, 0, 1);
}

void func_307(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_77(uParam1);
	if (func_126(iVar1))
	{
		if (func_81(uParam2, iVar1))
		{
			func_278(&(uParam0->f_82), 46, iVar0);
			func_278(&(uParam0->f_82), 47, iVar0);
			if (func_51(&(uParam1->f_182)) && func_52(&(uParam1->f_182)) < 4000)
			{
				if (uParam1->f_177 <= 1)
				{
					func_280(uParam0, 43, 1, 10000, 1);
				}
				else
				{
					func_280(uParam0, 45, 0, 10000, 1);
				}
			}
		}
		else
		{
			func_278(&(uParam0->f_82), 43, iVar0);
			func_278(&(uParam0->f_82), 45, iVar0);
			if (uParam1->f_178 > 0)
			{
				if (TASK::_0x5952DFA38FA529FE())
				{
					func_280(uParam0, 47, 1, 10000, 1);
				}
				else
				{
					func_280(uParam0, 46, 1, 10000, 1);
				}
				if (PAD::_IS_USING_KEYBOARD(0) && !TASK::_0x5952DFA38FA529FE())
				{
					func_280(uParam0, 72, 0, 10000, 1);
				}
			}
		}
	}
	else
	{
		func_278(&(uParam0->f_82), 43, iVar0);
		func_278(&(uParam0->f_82), 45, iVar0);
		func_278(&(uParam0->f_82), 46, iVar0);
		func_278(&(uParam0->f_82), 47, iVar0);
		func_278(&(uParam0->f_82), 72, iVar0);
	}
}

bool func_308(int iParam0, int iParam1)
{
	if (func_122(Global_1903071.f_5.f_5, iParam0))
	{
		if (iParam1 == 1)
		{
		}
		return true;
	}
	return false;
}

void func_309(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	if (func_56(uParam1, 131072))
	{
		return;
	}
	func_301(uParam1, 131072);
	func_436(uParam0, uParam1, uParam2);
	iVar0 = func_77(uParam1);
	if (func_126(iVar0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam2->f_123[iVar0]))
		{
			PED::_0x8AC1D721B2097B6E(uParam2->f_123[iVar0], 75f, 75f);
		}
		func_21(uParam1, uParam2, iVar0, 0, 0);
	}
	if (!func_48(16))
	{
		func_280(uParam0, 55, 1, -2, 1);
	}
}

void func_310(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_56(uParam1, 8))
	{
		return;
	}
	func_301(uParam1, 8);
	iVar0 = func_77(uParam1);
	if (!func_126(iVar0))
	{
	}
	else
	{
		Global_1903071.f_52 = Global_1903071.f_38;
		Global_1903071.f_53 = ENTITY::GET_ENTITY_MODEL(uParam2->f_123[iVar0]);
		func_145(uParam2, iVar0, 9);
		uParam0->f_59 = 1;
		iVar1 = func_437(uParam1);
		iVar2 = func_438(uParam2->f_247[iVar0], iVar1);
		if (func_439(iVar2) && uParam2->f_309[iVar0] != 4)
		{
			uParam0->f_59 = 0;
		}
	}
	func_47(uParam0);
	WATER::_0xA33F5069B0CB89B8();
	func_278(&(uParam0->f_82), 43, 0);
	func_278(&(uParam0->f_82), 45, 0);
	func_278(&(uParam0->f_82), 46, 0);
	func_278(&(uParam0->f_82), 47, 0);
	func_278(&(uParam0->f_82), 72, 0);
	func_278(&(uParam0->f_82), 49, 0);
	func_287(uParam0, uParam0->f_9);
	func_22(uParam1);
	func_440(uParam1);
	func_228(64);
	func_228(32);
	if (func_51(&(uParam1->f_219)))
	{
		if (!func_135(&(uParam1->f_219)))
		{
			func_260(&(uParam1->f_219));
		}
	}
}

void func_311(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	if (func_56(uParam0, 65536))
	{
		return;
	}
	iVar0 = func_77(uParam0);
	Global_1903071.f_40++;
	Global_1903071.f_39++;
	if (func_441(Global_39.f_5803))
	{
		iVar1 = joaat("FOOD");
	}
	else if (func_442(Global_39.f_5803))
	{
		iVar1 = joaat("LIVE_BAIT");
	}
	else if (func_219(Global_39.f_5803))
	{
		iVar1 = joaat("LURE");
	}
	else if (func_220(Global_39.f_5803))
	{
		iVar1 = joaat("LEGENDARY_LURE");
	}
	if (func_443(Global_1903071.f_37))
	{
		iVar2 = joaat("POTENT_PREDATOR_BAIT");
	}
	else
	{
		iVar2 = joaat("POTENT_HERBIVORE_BAIT");
	}
	if (func_126(iVar0))
	{
		uVar3 = uParam1->f_123[iVar0];
		STATS::_0xDA26263C87CCE9C1(uVar3, Global_1903071.f_38, iVar1, iVar2);
		COMPENDIUM::COMPENDIUM_FISH_CAUGHT(uVar3, Global_39.f_5803);
	}
	func_301(uParam0, 65536);
	func_410(64);
}

void func_312(var uParam0, var uParam1)
{
	if (func_56(uParam1, 262144))
	{
		return;
	}
	func_425(uParam0, uParam1, 3, 0);
	func_301(uParam1, 262144);
}

void func_313(var uParam0, int iParam1)
{
	bool bVar0;
	char* sVar1;
	char* sVar2;

	bVar0 = HUD::IS_PAUSE_MENU_ACTIVE();
	if (uParam0->f_2 == 1)
	{
		if (bVar0 == 1)
		{
			func_20(uParam0);
		}
		return;
	}
	if (bVar0 == 1)
	{
		return;
	}
	if (*uParam0 == 0)
	{
		if (!func_61(Global_1903071.f_37))
		{
			func_20(uParam0);
			return;
		}
		if (iParam1 == 1)
		{
			sVar1 = MISC::_CREATE_VAR_STRING(38, "MGFSH_CAUGHT_POI", Global_1903071.f_38, func_402(Global_1903071.f_37));
		}
		else
		{
			sVar1 = MISC::_CREATE_VAR_STRING(38, "ITEM_CAUGHT_PUMP", Global_1903071.f_38, func_402(Global_1903071.f_37));
		}
		sVar2 = func_444(Global_1903071.f_37);
		uParam0->f_3 = UISTATEMACHINE::_UIFLOWBLOCK_REQUEST(joaat("SHOP_BROWSING_MAIN_FLOW"));
		uParam0->f_4 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "InfoBox");
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_4, "isVisible", 1);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_4, "itemLabel", sVar1);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_4, "itemDescription", sVar2);
		*uParam0 = 1;
	}
	if ((((*uParam0 == 1 && uParam0->f_1 == 0) && UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(uParam0->f_3)) && UISTATEMACHINE::_UIFLOWBLOCK_ENTER(uParam0->f_3, -1645363952)) && UISTATEMACHINE::_UISTATEMACHINE_CREATE(-1295789154, uParam0->f_3))
	{
		uParam0->f_1 = 1;
		uParam0->f_2 = 1;
	}
}

void func_314(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	if (func_56(uParam1, 64) || func_56(uParam1, 32))
	{
		return;
	}
	func_301(uParam1, 64);
	if (func_182(4))
	{
		iVar0 = func_77(uParam1);
		if (func_126(iVar0))
		{
			uParam2->f_371[iVar0] = 1;
		}
	}
	func_445(uParam1, uParam2);
	func_20(&(uParam0->f_19));
	Global_1903071.f_43++;
	Global_1903071.f_44++;
	func_110(uParam1);
	func_301(uParam1, 128);
	func_180(64, 1);
}

void func_315(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	if (func_56(uParam1, 64) || func_56(uParam1, 32))
	{
		return;
	}
	iVar0 = func_77(uParam1);
	if (!func_293())
	{
		func_282(uParam0, 5, 0, 1);
		if (func_126(iVar0))
		{
			if (func_446(uParam2, iVar0))
			{
				func_282(uParam0, 6, 0, uParam0->f_59);
				if (uParam0->f_59 == 0)
				{
					func_280(uParam0, 58, 1, -2, 1);
				}
			}
		}
		if (func_234(uParam0->f_60[5]) && func_408(uParam0->f_60[5], 1))
		{
			func_314(uParam0, uParam1, uParam2);
			func_132(uParam0, 5);
			func_132(uParam0, 6);
		}
		else if ((func_234(uParam0->f_60[6]) && func_447(uParam0->f_60[6], 0)) && func_408(uParam0->f_60[6], 1))
		{
			func_436(uParam0, uParam1, uParam2);
			func_132(uParam0, 5);
			func_132(uParam0, 6);
		}
		else if (func_182(32))
		{
			func_436(uParam0, uParam1, uParam2);
			func_132(uParam0, 5);
			func_132(uParam0, 6);
			func_302(32);
		}
	}
}

void func_316(var uParam0)
{
	if ((GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam0->f_18) && func_51(&(uParam0->f_20))) && func_52(&(uParam0->f_20)) > 100)
	{
		func_93(&(uParam0->f_20));
		uParam0->f_19 = (uParam0->f_19 + 0.01f);
		if (uParam0->f_19 > 1f)
		{
			func_110(uParam0);
		}
		else
		{
			GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_18, "fade", uParam0->f_19, false);
		}
	}
}

void func_317(var uParam0)
{
	if (func_56(uParam0, 16))
	{
		return;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -1947554776))
	{
		func_301(uParam0, 16);
		if (ENTITY::DOES_ENTITY_EXIST(func_138()))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(func_138()))
			{
				ENTITY::DETACH_ENTITY(func_138(), true, true);
				PHYSICS::ACTIVATE_PHYSICS(func_138());
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(func_141()))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(func_141()))
			{
				ENTITY::DETACH_ENTITY(func_141(), true, true);
				PHYSICS::ACTIVATE_PHYSICS(func_141());
			}
		}
	}
}

void func_318(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	if (func_56(uParam1, 131072))
	{
		return;
	}
	if (func_308(64, 1))
	{
		func_301(uParam1, 131072);
		iVar0 = func_77(uParam1);
		if (func_126(iVar0))
		{
			func_21(uParam1, uParam2, iVar0, 1, 1);
		}
	}
	else if (func_308(256, 1))
	{
		func_309(uParam0, uParam1, uParam2);
	}
	else if (func_308(128, 1))
	{
		func_301(uParam1, 131072);
	}
}

void func_319()
{
	if (!func_182(4) && func_308(1024, 1))
	{
		func_410(4);
	}
}

void func_320(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	if (func_56(uParam1, 4))
	{
		return;
	}
	if (func_308(512, 1))
	{
		func_301(uParam1, 4);
		iVar0 = func_77(uParam1);
		if (func_126(iVar0) && !ENTITY::IS_ENTITY_DEAD(uParam2->f_123[iVar0]))
		{
			TASK::CLEAR_PED_TASKS(uParam2->f_123[iVar0], true, false);
			ENTITY::SET_ENTITY_INVINCIBLE(uParam2->f_123[iVar0], false);
			PED::SET_PED_CONFIG_FLAG(uParam2->f_123[iVar0], 17, false);
		}
		func_111(uParam0, uParam1, uParam2, 0, 0);
	}
}

void func_321(var uParam0)
{
	if (Global_39.f_5803 == joaat("UPGRADE_FSH_BAIT_CHEESE"))
	{
		func_280(uParam0, 59, 1, -2, 1);
	}
	else if (Global_39.f_5803 == joaat("UPGRADE_FSH_BAIT_BREAD"))
	{
		func_280(uParam0, 60, 1, -2, 1);
	}
	else if (Global_39.f_5803 == joaat("UPGRADE_FSH_BAIT_CORN"))
	{
		func_280(uParam0, 61, 1, -2, 1);
	}
	else if (Global_39.f_5803 == joaat("UPGRADE_FSH_BAIT_WORM"))
	{
		func_280(uParam0, 62, 1, -2, 1);
	}
	else if (Global_39.f_5803 == joaat("UPGRADE_FSH_BAIT_CRICKET"))
	{
		func_280(uParam0, 63, 1, -2, 1);
	}
	else if (Global_39.f_5803 == joaat("UPGRADE_FSH_BAIT_CRAYFISH"))
	{
		func_280(uParam0, 64, 1, -2, 1);
	}
	else if (Global_39.f_5803 == joaat("UPGRADE_FSH_BAIT_LURE_LAKE"))
	{
		func_280(uParam0, 65, 1, -2, 1);
	}
	else if (Global_39.f_5803 == joaat("UPGRADE_FSH_BAIT_LURE_RIVER"))
	{
		func_280(uParam0, 66, 1, -2, 1);
	}
	else if (Global_39.f_5803 == joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"))
	{
		func_280(uParam0, 67, 1, -2, 1);
	}
	else if (Global_39.f_5803 == joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"))
	{
		func_280(uParam0, 68, 1, -2, 1);
	}
	else if (Global_39.f_5803 == joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"))
	{
		func_280(uParam0, 69, 1, -2, 1);
	}
	else if (Global_39.f_5803 == joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"))
	{
		func_280(uParam0, 70, 1, -2, 1);
	}
	else if (Global_39.f_5803 == joaat("UPGRADE_FSH_BAIT_SPINNER_FRESHWATER_LEG"))
	{
		func_280(uParam0, 71, 1, -2, 1);
	}
}

bool func_322(int iParam0)
{
	return func_122(Global_1903071.f_5.f_6, iParam0);
}

void func_323(var uParam0, int iParam1, float fParam2)
{
	int iVar0;

	iVar0 = func_364(iParam1);
	if (func_365(iVar0) && !FLOCK::_0x19870C40C7EE15BE(iVar0, uParam0->f_31[iParam1]))
	{
		uParam0->f_31[iParam1] = FLOCK::_0xE93415B3307208E5(iVar0, uParam0->f_12, 0f, fParam2, 10000f, 0f, 0f, 0f, 1);
	}
}

void func_324(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_364(iParam1);
	if (func_365(iVar0) && FLOCK::_0x19870C40C7EE15BE(iVar0, uParam0->f_31[iParam1]))
	{
		FLOCK::_0xC3D581A34BC0A1F0(iVar0, uParam0->f_31[iParam1]);
	}
}

bool func_325()
{
	if (Global_13)
	{
		return false;
	}
	if (!func_448())
	{
		return false;
	}
	if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1939161.f_75.f_55))
	{
		return false;
	}
	if (func_449(-1 ^ 9, 0, 1))
	{
		return false;
	}
	return true;
}

char* func_326(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	char* sVar0;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1893587.f_162)))
	{
		sVar0 = func_450(Global_1893587.f_162);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0) && bParam4)
	{
		sVar0 = func_452(func_451(Global_35));
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		if (!func_453(iParam0) || func_454(44))
		{
			switch (iParam0)
			{
				case 2:
					sVar0 = "LANDMARK_MERKINS_WALLER";
					break;
				case 3:
					sVar0 = "SETTLEMENT_LAGRAS";
					break;
				case 4:
					sVar0 = "HIDEOUT_LAKAY";
					break;
				case 1:
					sVar0 = "LANDMARK_MACOMBS_END";
					break;
				case 6:
					sVar0 = "LANDMARK_HAGEN_ORCHARDS";
					break;
				case 5:
					sVar0 = "TOWN_SAINTDENIS";
					break;
				case 8:
					sVar0 = "SETTLEMENT_GRAND_KORRIGAN";
					break;
				case 9:
					sVar0 = "HIDEOUT_SHADY_BELLE";
					break;
				case 10:
					sVar0 = "LANDMARK_SILTWATER_STRAND";
					break;
				case 11:
					sVar0 = "SETTLEMENT_APPLESEED_TIMBER_CO";
					break;
				case 12:
					sVar0 = "LANDMARK_BERYLS_DREAM";
					break;
				case 15:
					sVar0 = "SETTLEMENT_FORT_RIGGS_HOLDING_CAMP";
					break;
				case 16:
					sVar0 = "HIDEOUT_HANGING_DOG_RANCH";
					break;
				case 17:
					sVar0 = "HOMESTEAD_LONE_MULE_STEAD";
					break;
				case 19:
					sVar0 = "LANDMARK_MONTOS_REST";
					break;
				case 20:
					sVar0 = "LANDMARK_OWANJILA_DAM";
					break;
				case 21:
					sVar0 = "HOMESTEAD_PAINTED_SKY";
					break;
				case 22:
					sVar0 = "SETTLEMENT_PRONGHORN_RANCH";
					break;
				case 23:
					sVar0 = "LANDMARK_RIGGS_STATION";
					break;
				case 25:
					sVar0 = "HOMESTEAD_SHEPHERDS_RISE";
					break;
				case 26:
					sVar0 = "TOWN_STRAWBERRY";
					break;
				case 27:
					sVar0 = "LANDMARK_VALLEY_VIEW";
					break;
				case 28:
					sVar0 = "LANDMARK_WALLACE_STATION";
					break;
				case 30:
					sVar0 = "HOMESTEAD_WATSONS_CABIN";
					break;
				case 31:
					sVar0 = "LANDMARK_CANEBREAK_MANOR";
					break;
				case 32:
					sVar0 = "LANDMARK_COPPERHEAD_LANDING";
					break;
				case 33:
					sVar0 = "SETTLEMENT_SISIKA_PENITENTIARY";
					break;
				case 127:
					sVar0 = "TOWN_ARMADILLO";
					break;
				case 128:
					sVar0 = "SETTLEMENT_COOTS_CHAPEL";
					break;
				case 131:
					sVar0 = "SETTLEMENT_RIDGEWOOD_FARM";
					break;
				case 130:
					sVar0 = "LANDMARK_RILEYS_CHARGE";
					break;
				case 132:
					sVar0 = "HIDEOUT_TWIN_ROCKS";
					break;
				case 35:
					sVar0 = "LANDMARK_BACCHUS_BRIDGE";
					break;
				case 36:
					sVar0 = "HOMESTEAD_FIRWOOD_RISE";
					break;
				case 37:
					sVar0 = "SETTLEMENT_FORT_WALLACE";
					break;
				case 38:
					sVar0 = "HIDEOUT_SIX_POINT_CABIN";
					break;
				case 120:
					sVar0 = "HIDEOUT_GAPTOOTH_BREACH";
					break;
				case 122:
					sVar0 = "SETTLEMENT_RATHSKELLER_FORK";
					break;
				case 121:
					sVar0 = "TOWN_TUMBLEWEED";
					break;
				case 39:
					sVar0 = "SETTLEMENT_BEECHERS_HOPE";
					break;
				case 40:
					sVar0 = "TOWN_BLACKWATER";
					break;
				case 41:
					sVar0 = "LANDMARK_QUAKERS_COVE";
					break;
				case 42:
					sVar0 = "HOMESTEAD_ADLER_RANCH";
					break;
				case 53:
					sVar0 = "LANDMARK_CALUMET_RAVINE";
					break;
				case 44:
					sVar0 = "HOMESTEAD_CHEZ_PORTER";
					break;
				case 45:
					sVar0 = "HIDEOUT_COLTER";
					break;
				case 43:
					sVar0 = "LANDMARK_WINDOW_ROCK";
					break;
				case 47:
					sVar0 = "LANDMARK_MILLESANI_CLAIM";
					break;
				case 51:
					sVar0 = "LANDMARK_TEMPEST_RIM";
					break;
				case 58:
					sVar0 = "LANDMARK_THE_LOFT";
					break;
				case 60:
					sVar0 = "SETTLEMENT_WAPITI";
					break;
				case 52:
					sVar0 = "LANDMARK_EWING_BASIN";
					break;
				case 62:
					sVar0 = "SETTLEMENT_AGUASDULCES";
					break;
				case 64:
					sVar0 = "LANDMARK_CINCO_TORRES";
					break;
				case 65:
					sVar0 = "LANDMARK_LA_CAPILLA";
					break;
				case 66:
					sVar0 = "TOWN_MANICATO";
					break;
				case 135:
					sVar0 = "TOWN_MACFARLANES_RANCH";
					break;
				case 136:
					sVar0 = "SETTLEMENT_THIEVES_LANDING";
					break;
				case 67:
					sVar0 = "LANDMARK_OLD_GREENBANK_MILL";
					break;
				case 69:
					sVar0 = "HOMESTEAD_CARMODY_DELL";
					break;
				case 70:
					sVar0 = "SETTLEMENT_CORNWALL_KEROSENE_TAR";
					break;
				case 71:
					sVar0 = "HOMESTEAD_GUTHRIE_FARM";
					break;
				case 72:
					sVar0 = "LANDMARK_CUMBERLAND_FALLS";
					break;
				case 73:
					sVar0 = "HOMESTEAD_DOWNES_RANCH";
					break;
				case 74:
					sVar0 = "SETTLEMENT_EMERALD_RANCH";
					break;
				case 75:
					sVar0 = "LANDMARK_GRANGERS_HOGGERY";
					break;
				case 77:
					sVar0 = "HOMESTEAD_LARNED_SOD";
					break;
				case 79:
					sVar0 = "LANDMARK_LUCKYS_CABIN";
					break;
				case 80:
					sVar0 = "LANDMARK_FLATNECK_STATION";
					break;
				case 81:
					sVar0 = "TOWN_VALENTINE";
					break;
				case 82:
					sVar0 = "HOMESTEAD_ABERDEEN_PIG_FARM";
					break;
				case 83:
					sVar0 = "TOWN_ANNESBURG";
					break;
				case 84:
					sVar0 = "HIDEOUT_BEAVER_HOLLOW";
					break;
				case 87:
					sVar0 = "SETTLEMENT_BUTCHER_CREEK";
					break;
				case 85:
					sVar0 = "LANDMARK_BLACK_BALSAM_RISE";
					break;
				case 86:
					sVar0 = "LANDMARK_BRANDYWINE_DROP";
					break;
				case 88:
					sVar0 = "HOMESTEAD_DOVERHILL";
					break;
				case 91:
					sVar0 = "HOMESTEAD_MACLEANS_HOUSE";
					break;
				case 92:
					sVar0 = "LANDMARK_MOSSY_FLATS";
					break;
				case 93:
					sVar0 = "LANDMARK_ROANOKE_VALLEY";
					break;
				case 94:
					sVar0 = "HOMESTEAD_WILLARDS_REST";
					break;
				case 98:
					sVar0 = "TOWN_VANHORN";
					break;
				case 123:
					sVar0 = "SETTLEMENT_BENEDICT_POINT";
					break;
				case 124:
					sVar0 = "HIDEOUT_FORT_MERCER";
					break;
				case 125:
					sVar0 = "SETTLEMENT_PLAINVIEW";
					break;
				case 99:
					sVar0 = "SETTLEMENT_BRAITHWAITE_MANOR";
					break;
				case 100:
					sVar0 = "LANDMARK_BOLGER_GLADE";
					break;
				case 101:
					sVar0 = "SETTLEMENT_CALIGA_HALL";
					break;
				case 102:
					sVar0 = "HOMESTEAD_CATFISH_JACKSONS";
					break;
				case 104:
					sVar0 = "HIDEOUT_CLEMENS_POINT";
					break;
				case 105:
					sVar0 = "HOMESTEAD_COMPSONS_STEAD";
					break;
				case 106:
					sVar0 = "HOMESTEAD_HILL_HAVEN_RANCH";
					break;
				case 108:
					sVar0 = "HOMESTEAD_LONNIES_SHACK";
					break;
				case 110:
					sVar0 = "LANDMARK_RADLEYS_PASTURE";
					break;
				case 111:
					sVar0 = "TOWN_RHODES";
					break;
				case 114:
					sVar0 = "LANDMARK_BEAR_CLAW";
					break;
				case 116:
					sVar0 = "SETTLEMENT_MANZANITA_POST";
					break;
				case 117:
					sVar0 = "LANDMARK_PACIFIC_UNION_RAILROAD";
					break;
				case 118:
					sVar0 = "LANDMARK_TANNERS_REACH";
					break;
				case 139:
					sVar0 = "SETTLEMENT_CENTRAL_UNION_RAILROAD_CAMP";
					break;
			}
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0) || bParam5)
	{
		switch (iParam2)
		{
			case joaat("WATER_ARROYO_DE_LA_VIBORA"):
				sVar0 = "WATER_ARROYO_DE_LA_VIBORA";
				*bParam6 = 1;
				break;
			case joaat("WATER_AURORA_BASIN"):
				sVar0 = "WATER_AURORA_BASIN";
				*bParam6 = 1;
				break;
			case joaat("WATER_BAHIA_DE_LA_PAZ"):
				sVar0 = "WATER_BAHIA_DE_LA_PAZ";
				*bParam6 = 1;
				break;
			case joaat("WATER_BARROW_LAGOON"):
				sVar0 = "WATER_BARROW_LAGOON";
				*bParam6 = 1;
				break;
			case joaat("WATER_BAYOU_NWA"):
				sVar0 = "DISTRICT_BAYOU_NWA";
				*bParam6 = 1;
				break;
			case joaat("WATER_CAIRN_LAKE"):
				sVar0 = "WATER_CAIRN_LAKE";
				*bParam6 = 1;
				break;
			case joaat("WATER_CATTIAL_POND"):
				sVar0 = "WATER_CATTAIL_POND";
				*bParam6 = 1;
				break;
			case joaat("WATER_DAKOTA_RIVER"):
				sVar0 = "WATER_DAKOTA_RIVER";
				*bParam6 = 1;
				break;
			case joaat("WATER_DEADBOOT_CREEK"):
				sVar0 = "WATER_DEADBOOT_CREEK";
				*bParam6 = 1;
				break;
			case joaat("WATER_ELYSIAN_POOL"):
				sVar0 = "WATER_ELYSIAN_POOL";
				*bParam6 = 1;
				break;
			case joaat("WATER_FLAT_IRON_LAKE"):
				sVar0 = "WATER_FLAT_IRON_LAKE";
				*bParam6 = 1;
				break;
			case joaat("WATER_HAWKS_EYE_CREEK"):
				sVar0 = "WATER_HAWKS_EYE_CREEK";
				*bParam6 = 1;
				break;
			case joaat("WATER_HEARTLANDS_OVERFLOW"):
				sVar0 = "LANDMARK_HEARTLAND_OVERFLOW";
				*bParam6 = 1;
				break;
			case joaat("WATER_HOT_SPRINGS"):
				sVar0 = "WATER_COTORRA_SPRINGS";
				*bParam6 = 1;
				break;
			case joaat("WATER_LAKE_DON_JULIO"):
				sVar0 = "WATER_LAKE_DON_JULIO";
				*bParam6 = 1;
				break;
			case joaat("WATER_LAKE_ISABELLA"):
				sVar0 = "WATER_LAKE_ISABELLA";
				*bParam6 = 1;
				break;
			case joaat("WATER_LANNAHECHEE_RIVER"):
				sVar0 = "WATER_LANNAHECHEE_RIVER";
				*bParam6 = 1;
				break;
			case joaat("WATER_LITTLE_CREEK_RIVER"):
				sVar0 = "WATER_LITTLE_CREEK_RIVER";
				*bParam6 = 1;
				break;
			case joaat("WATER_LOWER_MONTANA_RIVER"):
				sVar0 = "WATER_LOWER_MONTANA_RIVER";
				*bParam6 = 1;
				break;
			case joaat("WATER_MATTLOCK_POND"):
				sVar0 = "WATER_MATTOCK_POND";
				*bParam6 = 1;
				break;
			case joaat("WATER_MOONSTONE_POND"):
				sVar0 = "WATER_MOONSTONE_POND";
				*bParam6 = 1;
				break;
			case joaat("WATER_O_CREAGHS_RUN"):
				sVar0 = "WATER_OCREAGHS_RUN";
				*bParam6 = 1;
				break;
			case joaat("WATER_OWANJILA"):
				sVar0 = "WATER_OWANJILA";
				*bParam6 = 1;
				break;
			case joaat("WATER_RINGNECK_CREEK"):
				sVar0 = "WATER_RINGNECK_CREEK";
				*bParam6 = 1;
				break;
			case joaat("WATER_SEA_OF_CORONADO"):
				sVar0 = "WATER_SEA_OF_CORONADO";
				*bParam6 = 1;
				break;
			case joaat("WATER_SOUTHFIELD_FLATS"):
				sVar0 = "WATER_SOUTHFIELD_FLATS";
				*bParam6 = 1;
				break;
			case joaat("WATER_SPIDER_GORGE"):
				sVar0 = "WATER_SPIDER_GORGE";
				*bParam6 = 1;
				break;
			case joaat("WATER_STILLWATER_CREEK"):
				sVar0 = "WATER_STILLWATER_CREEK";
				*bParam6 = 1;
				break;
			case joaat("WATER_UPPER_MONTANA_RIVER"):
				sVar0 = "WATER_UPPER_MONTANA_RIVER";
				*bParam6 = 1;
				break;
			case joaat("WATER_WHINYARD_STRAIT"):
				sVar0 = "WATER_WHINYARD_STRAIT";
				*bParam6 = 1;
				break;
			case joaat("WATER_KAMASSA_RIVER"):
				if (iParam1 == 10)
				{
					sVar0 = "WATER_KAMASSA_RIVER";
				}
				else if (iParam1 == 2)
				{
					sVar0 = "WATER_KAMASSA_RIVER_BLUEWATER_MARSH";
				}
				else
				{
					sVar0 = "WATER_KAMASSA_RIVER_BAYOU_NWA";
				}
				*bParam6 = 1;
				break;
			case joaat("WATER_SAN_LUIS_RIVER"):
				if (iParam1 == 4 || iParam1 == 12)
				{
					sVar0 = "WATER_SAN_LUIS_RIVER_WEST_ELIZABETH";
				}
				else
				{
					sVar0 = "WATER_SAN_LUIS_RIVER_NEW_AUSTIN";
				}
				*bParam6 = 1;
				break;
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		switch (iParam1)
		{
			case 0:
				sVar0 = "DISTRICT_BAYOU_NWA";
				break;
			case 1:
				sVar0 = "DISTRICT_BIG_VALLEY";
				break;
			case 2:
				sVar0 = "DISTRICT_BLUEWATER_MARSH";
				break;
			case 3:
				sVar0 = "DISTRICT_CUMBERLAND_FOREST";
				break;
			case 4:
				sVar0 = "DISTRICT_GREAT_PLAINS";
				break;
			case 6:
				sVar0 = "DISTRICT_GRIZZLIES";
				break;
			case 7:
				sVar0 = "DISTRICT_GRIZZLIES";
				break;
			case 8:
				sVar0 = "DISTRICT_GUARMA";
				break;
			case 9:
				sVar0 = "DISTRICT_HEARTLANDS";
				break;
			case 10:
				sVar0 = "DISTRICT_ROANOAKE_RIDGE";
				break;
			case 11:
				sVar0 = "DISTRICT_SCARLETT_MEADOWS";
				break;
			case 12:
				sVar0 = "DISTRICT_TALL_TREES";
				break;
			case 13:
				sVar0 = "DISTRICT_GAPTOOTH_RIDGE";
				break;
			case 14:
				sVar0 = "DISTRICT_RIO_BRAVO";
				break;
			case 15:
				sVar0 = "DISTRICT_CHOLLA_SPRINGS";
				break;
			case 16:
				sVar0 = "DISTRICT_HENNIGANS_STEAD";
				break;
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		switch (iParam3)
		{
			case 0:
				sVar0 = "STATE_AMBARINO";
				break;
			case 2:
				sVar0 = "STATE_LEMOYNE";
				break;
			case 3:
				sVar0 = "STATE_WEST_ELIZABETH";
				break;
			case 4:
				sVar0 = "STATE_NEW_AUSTIN";
				break;
			case 1:
				sVar0 = "STATE_NEW_HANOVER";
				break;
			case 5:
				sVar0 = "STATE_GUARMA";
				break;
		}
	}
	return sVar0;
}

bool func_327(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 6);
}

bool func_328(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

int func_329(int iParam0)
{
	if (iParam0 < 0)
	{
		return -1;
	}
	else if (iParam0 <= 10)
	{
		return 0;
	}
	else if (iParam0 <= 30)
	{
		return 1;
	}
	else if (iParam0 <= 34)
	{
		return 2;
	}
	else if (iParam0 <= 38)
	{
		return 3;
	}
	else if (iParam0 <= 41)
	{
		return 4;
	}
	else if (iParam0 <= 52)
	{
		return 7;
	}
	else if (iParam0 <= 61)
	{
		return 6;
	}
	else if (iParam0 <= 66)
	{
		return 8;
	}
	else if (iParam0 <= 81)
	{
		return 9;
	}
	else if (iParam0 <= 98)
	{
		return 10;
	}
	else if (iParam0 <= 112)
	{
		return 11;
	}
	else if (iParam0 <= 119)
	{
		return 12;
	}
	else if (iParam0 <= 122)
	{
		return 13;
	}
	else if (iParam0 <= 126)
	{
		return 14;
	}
	else if (iParam0 <= 134)
	{
		return 15;
	}
	else if (iParam0 <= 138)
	{
		return 16;
	}
	return -1;
}

int func_330(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 2:
			return 2;
		case 11:
			return 2;
		case 9:
			return 1;
		case 10:
			return 1;
		case 3:
			return 1;
		case 4:
			return 3;
		case 12:
			return 3;
		case 1:
			return 3;
		case 5:
			return 0;
		case 6:
			return 0;
		case 7:
			return 0;
		case 8:
			return 5;
		case 13:
			return 4;
		case 14:
			return 4;
		case 15:
			return 4;
		case 16:
			return 4;
		default:
			break;
	}
	return -1;
}

int func_331(int iParam0)
{
	int iVar0;
	struct<7> Var1;
	var uVar8;

	if (!func_327(iParam0))
	{
		return -1;
	}
	if (Global_1572887.f_13 == -1)
	{
		return Global_39.f_190[iParam0 /*12*/];
	}
	iVar0 = 0;
	Var1 = { func_455(PLAYER::PLAYER_ID()) };
	BOUNTY::_0x4EF23E04A0C8FF51(&Var1, &uVar8);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_1071686.f_21325[iVar0 /*12*/] = uVar8;
		iVar0++;
	}
	return Global_1071686.f_21325[iParam0 /*12*/];
}

int func_332(int iParam0)
{
	switch (iParam0)
	{
		case joaat("WATER_AURORA_BASIN"):
			return 0;
		case joaat("WATER_BARROW_LAGOON"):
			return 0;
		case joaat("WATER_BAYOU_NWA"):
			return 2;
		case joaat("WATER_BEARTOOTH_BECK"):
			return 1;
		case joaat("WATER_CAIRN_LAKE"):
			return 0;
		case joaat("WATER_CALMUT_RAVINE"):
			return 0;
		case joaat("WATER_CATTIAL_POND"):
			return 0;
		case joaat("WATER_DAKOTA_RIVER"):
			return 1;
		case joaat("WATER_DEADBOOT_CREEK"):
			return 1;
		case joaat("WATER_DEWBERRY_CREEK"):
			return 1;
		case joaat("WATER_ELYSIAN_POOL"):
			return 0;
		case joaat("WATER_FLAT_IRON_LAKE"):
			return 0;
		case joaat("WATER_HAWKS_EYE_CREEK"):
			return 1;
		case joaat("WATER_HEARTLANDS_OVERFLOW"):
			return 0;
		case joaat("WATER_HOT_SPRINGS"):
			return 0;
		case joaat("WATER_KAMASSA_RIVER"):
			return 1;
		case joaat("WATER_LAKE_DON_JULIO"):
			return 0;
		case joaat("WATER_LAKE_ISABELLA"):
			return 0;
		case joaat("WATER_LANNAHECHEE_RIVER"):
			return 1;
		case joaat("WATER_LITTLE_CREEK_RIVER"):
			return 1;
		case joaat("WATER_LOWER_MONTANA_RIVER"):
			return 1;
		case joaat("WATER_MATTLOCK_POND"):
			return 0;
		case joaat("WATER_MOONSTONE_POND"):
			return 0;
		case joaat("WATER_O_CREAGHS_RUN"):
			return 0;
		case joaat("WATER_OWANJILA"):
			return 0;
		case joaat("WATER_RINGNECK_CREEK"):
			return 1;
		case joaat("WATER_SAN_LUIS_RIVER"):
			return 1;
		case joaat("WATER_SEA_OF_CORONADO"):
			return 1;
		case joaat("WATER_SOUTHFIELD_FLATS"):
			return 0;
		case joaat("WATER_SPIDER_GORGE"):
			return 1;
		case joaat("WATER_STILLWATER_CREEK"):
			return 1;
		case joaat("WATER_UPPER_MONTANA_RIVER"):
			return 1;
		case joaat("WATER_WHINYARD_STRAIT"):
			return 1;
		default:
			break;
	}
	return -1;
}

char* func_333(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "WATER_TYPE_LAKE";
		case 1:
			return "WATER_TYPE_RIVER";
		case 2:
			return "WATER_TYPE_SWAMP";
		default:
			break;
	}
	return "";
}

bool func_334(int iParam0, int iParam1)
{
	if (!func_456(iParam0))
	{
		return false;
	}
	if (Global_1572887.f_13 == -1)
	{
		return (Global_39.f_263[iParam0] && iParam1) != 0;
	}
	return (Global_1071686.f_21398[iParam0] && iParam1) != 0;
}

bool func_335(int iParam0, int iParam1)
{
	if (!func_327(iParam0))
	{
		return false;
	}
	if (Global_1572887.f_13 == -1)
	{
		return (Global_39.f_190[iParam0 /*12*/].f_5 && iParam1) != 0;
	}
	return (Global_1071686.f_21325[iParam0 /*12*/].f_5 && iParam1) != 0;
}

bool func_336(int iParam0, int iParam1)
{
	if (Global_1572887.f_13 == -1)
	{
		return (Global_8123[iParam0 /*11*/] && iParam1) != 0;
	}
	return (Global_1071686.f_19674[iParam0 /*11*/] && iParam1) != 0;
}

int func_337()
{
	return Global_1902818;
}

int func_338(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_339(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

float func_340(float fParam0)
{
	return ((fParam0 * 1.8f) + 32f);
}

var func_341(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<4> Var0;
	vector3 vVar13;
	var uVar16;

	Var0 = -2;
	Var0 = iParam2;
	Var0.f_1 = iParam3;
	Var0.f_2 = iParam4;
	Var0.f_3 = iParam5;
	vVar13.f_1 = sParam0;
	vVar13.f_2 = sParam1;
	uVar16 = UIFEED::_SHOW_LOCATION_NOTIFICATION(&Var0, &vVar13, iParam6, iParam7);
	return uVar16;
}

void func_342(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_343(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_344(bool bParam0)
{
	if (func_200() == -1)
	{
		if (!bParam0 && INVENTORY::_0x7C7E4AB748EA3B07())
		{
			return 5;
		}
		return 1;
	}
	if (!bParam0 && INVENTORY::_INVENTORY_GET_PED_INVENTORY_ID(PLAYER::PLAYER_PED_ID()) == 3)
	{
		return 3;
	}
	return 2;
}

bool func_345(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_346(int iParam0)
{
	vector3 vVar0;

	if (!func_345(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_347(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_345(iParam0, 0))
	{
		return false;
	}
	if (Global_1940258.f_6)
	{
		return false;
	}
	iVar0 = func_360(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_457("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_458(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_459(Var4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4) == iVar0)
			{
				func_460(iVar1);
				return true;
			}
			iVar3++;
		}
		func_460(iVar1);
	}
	return false;
}

bool func_348(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_345(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_461(iParam0);
	switch (iVar0)
	{
		case -636562458:
		case 252325943:
		case 829857647:
		case 1216664798:
		case 1341188928:
			break;
		default:
			return false;
	}
	iVar1 = func_462(iParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_463(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
		if (iVar2 == -1)
		{
			return true;
		}
	}
	iVar1 = func_464(iParam0);
	iVar2 = func_463(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
	}
	return iParam0 == Global_17411.f_55.f_644.f_1354.f_5[iVar2 /*17*/];
}

int func_349(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	bool bVar0;
	int iVar1;
	var uVar2;
	struct<17> Var3;

	if (iParam0 == 0)
	{
		return 0;
	}
	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
	{
		return 0;
	}
	if (NETWORK::_0xFBE782B3165AC8EC(iParam0))
	{
		return 1;
	}
	if (bParam7)
	{
		bVar0 = (GANG::_0xD6F6ACF4392187FB(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())) && GANG::_0x0F99F6436528A089(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())));
		bParam7 = bVar0;
	}
	POSSE::_0xC08AFF658B2E51DA(&iVar1);
	if (iVar1 != 0)
	{
		func_465(iParam2, -372840566);
	}
	if (!bParam7)
	{
		if (!NETWORK::_0x64A36BA85CE01A81(&uVar2, &(uParam3->f_1), &(iParam2->f_1), uParam1))
		{
			return 0;
		}
	}
	else if (!NETWORK::_0x7A8E8DF782B47EB0(&uVar2, &(iParam2->f_1), uParam1))
	{
		return 0;
	}
	Var3.f_1 = 11;
	Var3.f_16 = 255;
	Var3.f_13 = iParam4;
	Var3.f_16 = iParam5;
	Var3.f_14 = iParam6;
	Var3 = { *iParam2 };
	func_466(uParam1, iParam0, Var3);
	return 1;
}

struct<5> func_350(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_467(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_346(iParam0);
	switch (iVar5)
	{
		case joaat("CLOTHING"):
			Var0 = { func_351(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
			Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			break;
		case joaat("WEAPON"):
			Var0 = { func_468(bParam1) };
			if (bParam2 && func_469(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_470(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_470(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_471(iParam0, &Var6, 1728382685 /* GXTEntry: "Right" */))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
			}
			else
			{
				Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
			}
			break;
		case joaat("COACH"):
		case joaat("HORSE"):
			Var0.f_4 = 1782082944;
			break;
		case joaat("EMOTE"):
			Var0.f_4 = -1591664384;
			Var0 = { func_472(bParam1) };
			switch (func_461(iParam0))
			{
				case -1070622585:
					Var0.f_4 = -6796437;
					break;
				case -1057349201:
					Var0.f_4 = 1473261684;
					break;
				case 874188557:
					Var0.f_4 = -241855024;
					break;
				case -2101244071:
					Var0.f_4 = -268116367;
					break;
			}
			break;
		case joaat("UPGRADE"):
		case joaat("DOG"):
			if (func_473(iParam0, -1823706425))
			{
				Var0 = { func_351(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("KIT_CAMP"));
			}
			else if (func_473(iParam0, -1483207246))
			{
				Var0 = { func_351(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -1911121386))
			{
				Var0 = { func_351(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_473(iParam0, -1653629781))
			{
				Var0 = { func_351(1384535894, Var0, 1784584921, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 1384535894);
			}
			break;
		default:
			if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, 1084182731))
			{
				Var0.f_4 = 1084182731;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, 1034665895))
			{
				Var0.f_4 = 1034665895;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -833319691))
			{
				Var28.f_9 = -1591664384;
				if (!func_474(Var0, &Var28, bParam1, 0, -1))
				{
					Var0.f_4 = 0;
				}
				else
				{
					Var0 = { Var28.f_5 };
					Var0.f_4 = -833319691;
				}
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -718417579))
			{
				Var0.f_4 = -718417579;
			}
			else if (func_473(iParam0, -1653629781))
			{
				Var0 = { func_351(1384535894, Var0, 1784584921, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 1384535894);
			}
			else
			{
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("CHARACTER"));
				if (Var0.f_4 == 0)
				{
				}
			}
			break;
	}
	return Var0;
}

struct<4> func_351(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_345(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_344(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

void func_352(var uParam0, int iParam1)
{
	if ((func_441(iParam1) || func_442(iParam1)) || iParam1 == joaat("UPGRADE_FSH_BAIT_NONE"))
	{
		uParam0->f_54 = 0;
	}
	else
	{
		uParam0->f_54 = 1;
	}
}

int func_353(var uParam0)
{
	int iVar0;

	iVar0 = 1;
	if (uParam0->f_54 == 0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

char* func_354(int iParam0)
{
	switch (iParam0)
	{
		case joaat("UPGRADE_FSH_BAIT_BREAD"):
			return "p_baitBread01x";
		case joaat("UPGRADE_FSH_BAIT_CORN"):
			return "p_baitCorn01x";
		case joaat("UPGRADE_FSH_BAIT_CHEESE"):
			return "p_baitCheese01x";
		case joaat("UPGRADE_FSH_BAIT_WORM"):
			return "p_baitWorm01x";
		case joaat("UPGRADE_FSH_BAIT_CRICKET"):
			return "p_baitCricket01x";
		case joaat("UPGRADE_FSH_BAIT_CRAYFISH"):
			return "P_CRAWDAD01X";
		case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
			return "p_finishedragonfly01x";
		case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
			return "p_FinisdFishlure01x";
		case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
			return "p_finishdcrawd01x";
		case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
			return "P_FINISHEDRAGONFLYLEGENDARY01X";
		case joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"):
			return "P_FINISDFISHLURELEGENDARY01X";
		case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
			return "P_FINISHDCRAWDLEGENDARY01X";
		case joaat("UPGRADE_FSH_BAIT_SPINNER_FRESHWATER_LEG"):
			return "P_LGOC_SPINNER_V4";
		case joaat("UPGRADE_FSH_BAIT_NONE"):
			return "P_FISHHOOK02X";
		default:
			break;
	}
	return "P_FISHHOOK02X";
}

void func_355(var uParam0)
{
	int iVar0;
	struct<5> Var1;
	struct<4> Var6;
	int iVar10;
	struct<5> Var11;
	struct<4> Var16;

	if (Global_39.f_5803 == joaat("UPGRADE_FSH_BAIT_NONE"))
	{
		iVar0 = func_344(0);
		Var1 = { func_350(joaat("UPGRADE_FSH_BAIT_NONE"), 0, 0) };
		Var6 = { func_351(joaat("UPGRADE_FSH_BAIT_NONE"), Var1, Var1.f_4, 0) };
		if (INVENTORY::_0xF9933164965533B7(iVar0, &Var6))
		{
			INVENTORY::_0xD740F11FBC8AEF43(iVar0, &Var6, 0);
		}
	}
	else
	{
		iVar10 = func_344(0);
		Var11 = { func_350(joaat("UPGRADE_FSH_BAIT_NONE"), 0, 0) };
		Var16 = { func_351(joaat("UPGRADE_FSH_BAIT_NONE"), Var11, Var11.f_4, 0) };
		if (!INVENTORY::_0xF9933164965533B7(iVar10, &Var16))
		{
			INVENTORY::_0xD740F11FBC8AEF43(iVar10, &Var16, 1);
		}
		uParam0->f_57 = Global_39.f_5803;
	}
}

void func_356()
{
	struct<2> Var0;
	int iVar2;

	Var0 = 0;
	iVar2 = 0;
	if (func_213(Global_39.f_5803) && func_210(Global_39.f_5803, 1))
	{
		iVar2 = Global_39.f_5803;
	}
	else if (Global_39.f_5803 == joaat("UPGRADE_FSH_BAIT_NONE"))
	{
		iVar2 = joaat("UPGRADE_FSH_BAIT_NONE");
	}
	else if (func_210(joaat("UPGRADE_FSH_BAIT_BREAD"), 1))
	{
		iVar2 = joaat("UPGRADE_FSH_BAIT_BREAD");
	}
	else if (func_210(joaat("UPGRADE_FSH_BAIT_CORN"), 1))
	{
		iVar2 = joaat("UPGRADE_FSH_BAIT_CORN");
	}
	else if (func_210(joaat("UPGRADE_FSH_BAIT_CHEESE"), 1))
	{
		iVar2 = joaat("UPGRADE_FSH_BAIT_CHEESE");
	}
	if (iVar2 != 0)
	{
		Var0 = 2;
		switch (iVar2)
		{
			case joaat("UPGRADE_FSH_BAIT_BREAD"):
				Var0.f_1 = joaat("UPGRADE_FSH_BAIT_BREAD");
				break;
			case joaat("UPGRADE_FSH_BAIT_CORN"):
				Var0.f_1 = joaat("UPGRADE_FSH_BAIT_CORN");
				break;
			case joaat("UPGRADE_FSH_BAIT_CHEESE"):
				Var0.f_1 = joaat("UPGRADE_FSH_BAIT_CHEESE");
				break;
			case joaat("UPGRADE_FSH_BAIT_CRICKET"):
				Var0.f_1 = joaat("UPGRADE_FSH_BAIT_CRICKET");
				break;
			case joaat("UPGRADE_FSH_BAIT_WORM"):
				Var0.f_1 = joaat("UPGRADE_FSH_BAIT_WORM");
				break;
			case joaat("UPGRADE_FSH_BAIT_CRAYFISH"):
				Var0.f_1 = joaat("UPGRADE_FSH_BAIT_CRAYFISH");
				break;
			case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
				Var0.f_1 = joaat("UPGRADE_FSH_BAIT_LURE_RIVER");
				break;
			case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
				Var0.f_1 = joaat("UPGRADE_FSH_BAIT_LURE_LAKE");
				break;
			case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
				Var0.f_1 = joaat("UPGRADE_FSH_BAIT_LURE_SWAMP");
				break;
			case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
				Var0.f_1 = joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER");
				break;
			case joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"):
				Var0.f_1 = joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE");
				break;
			case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
				Var0.f_1 = joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP");
				break;
			case joaat("UPGRADE_FSH_BAIT_SPINNER_FRESHWATER_LEG"):
				Var0.f_1 = joaat("UPGRADE_FSH_BAIT_SPINNER_FRESHWATER_LEG");
				break;
			case joaat("UPGRADE_FSH_BAIT_NONE"):
				Var0.f_1 = joaat("UPGRADE_FSH_BAIT_NONE");
				break;
		}
		HUD::_0x8A59D44189AF2BC5(&Var0, 1856029758);
	}
}

void func_357(var uParam0)
{
	uParam0->f_49 = 0;
	if (uParam0->f_48 == -1)
	{
	}
	else if (uParam0->f_48 == 0)
	{
		uParam0->f_49 = func_475(Global_39.f_5803);
	}
	else if (uParam0->f_48 == 1)
	{
		uParam0->f_49 = func_476(Global_39.f_5803);
	}
	else if (uParam0->f_48 == 2)
	{
		uParam0->f_49 = func_477(Global_39.f_5803);
	}
}

int func_358(int iParam0)
{
	int iVar0;

	if (!func_345(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_478(iParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return iParam0;
}

char* func_359(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_360(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_345(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_346(iParam0);
	if (iVar0 == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
	}
	else if (iVar0 == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(iParam0))
	{
		return iParam0;
	}
	if (func_479(iParam0, 1399091007))
	{
		func_480(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_361(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	var uVar15;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_481(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_482(&Var0, func_468(0));
	}
	if (!func_483(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_460(iVar14);
	return uVar15;
}

int func_362(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0xF4452CE83118C738(iParam0, iParam1);
}

struct<4> func_363(int iParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_350(iParam0, bParam1, 0) };
	return func_351(iParam0, Var0, Var0.f_4, bParam1);
}

int func_364(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("SPECIES_FISH_BLUEGILL");
		case 1:
			return joaat("SPECIES_FISH_BULLHEADCATFISH");
		case 2:
			return joaat("SPECIES_FISH_CHAINPICKEREL");
		case 3:
			return joaat("SPECIES_FISH_CHANNELCATFISH");
		case 4:
			return joaat("SPECIES_FISH_LAKESTURGEON");
		case 5:
			return joaat("SPECIES_FISH_LARGEMOUTHBASS");
		case 6:
			return joaat("SPECIES_FISH_LONGNOSEGAR");
		case 7:
			return joaat("SPECIES_FISH_MUSKIE");
		case 8:
			return joaat("SPECIES_FISH_NORTHERNPIKE");
		case 9:
			return joaat("SPECIES_FISH_PERCH");
		case 10:
			return joaat("SPECIES_FISH_REDFINPICKEREL");
		case 11:
			return joaat("SPECIES_FISH_ROCKBASS");
		case 12:
			return joaat("SPECIES_FISH_SMALLMOUTHBASS");
		case 13:
			return joaat("SPECIES_FISH_SALMONSOCKEYE");
		case 14:
			return joaat("SPECIES_FISH_STEELHEADTROUT");
		default:
			break;
	}
	return 0;
}

bool func_365(int iParam0)
{
	if ((((((((((((((iParam0 == joaat("SPECIES_FISH_BLUEGILL") || iParam0 == joaat("SPECIES_FISH_BULLHEADCATFISH")) || iParam0 == joaat("SPECIES_FISH_CHAINPICKEREL")) || iParam0 == joaat("SPECIES_FISH_CHANNELCATFISH")) || iParam0 == joaat("SPECIES_FISH_LAKESTURGEON")) || iParam0 == joaat("SPECIES_FISH_LARGEMOUTHBASS")) || iParam0 == joaat("SPECIES_FISH_LONGNOSEGAR")) || iParam0 == joaat("SPECIES_FISH_MUSKIE")) || iParam0 == joaat("SPECIES_FISH_NORTHERNPIKE")) || iParam0 == joaat("SPECIES_FISH_PERCH")) || iParam0 == joaat("SPECIES_FISH_REDFINPICKEREL")) || iParam0 == joaat("SPECIES_FISH_ROCKBASS")) || iParam0 == joaat("SPECIES_FISH_SALMONSOCKEYE")) || iParam0 == joaat("SPECIES_FISH_SMALLMOUTHBASS")) || iParam0 == joaat("SPECIES_FISH_STEELHEADTROUT"))
	{
		return true;
	}
	return false;
}

void func_366(int iParam0, float fParam1)
{
	char* sVar0;

	sVar0 = func_203(iParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		DECORATOR::DECOR_SET_FLOAT(PLAYER::PLAYER_PED_ID(), sVar0, fParam1);
	}
}

int func_367(int iParam0)
{
	return iParam0;
}

void func_368(int iParam0)
{
	if (!func_484(iParam0))
	{
		return;
	}
	if (HUD::_UIPROMPT_IS_VALID(Global_1951255[iParam0 /*23*/].f_3))
	{
		HUD::_UIPROMPT_DELETE(Global_1951255[iParam0 /*23*/].f_3);
	}
	Global_1951255[iParam0 /*23*/].f_4 = 0;
	Global_1951255[iParam0 /*23*/] = 1;
	Global_1951255[iParam0 /*23*/].f_16 = 0;
	Global_1951255[iParam0 /*23*/].f_1 = 0;
	Global_1951255[iParam0 /*23*/].f_6 = { 0f, 0f, 0f };
	Global_1951255[iParam0 /*23*/].f_12 = { 0f, 0f, 0f };
	Global_1951255[iParam0 /*23*/].f_9 = 0f;
	Global_1951255[iParam0 /*23*/].f_10 = 0;
	Global_1951255[iParam0 /*23*/].f_11 = 0;
	Global_1951255[iParam0 /*23*/].f_2 = 1;
	Global_1951255[iParam0 /*23*/].f_15 = -1f;
}

int func_369()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = POPULATION::_0x595478B3BBC3076D();
	iVar2 = func_246(iVar1);
	if (iVar2 != 15)
	{
		if ((((iVar2 == 3 || iVar2 == 4) || iVar2 == 6) || iVar2 == 7) || iVar2 == 8)
		{
			return 15;
		}
		iVar0 = iVar2;
	}
	return iVar0;
}

int func_370(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			return joaat("A_C_FISHBLUEGIL_01_SM");
		case 1:
			return joaat("A_C_FISHBULLHEADCAT_01_SM");
		case 2:
			return joaat("A_C_FISHCHAINPICKEREL_01_SM");
		case 3:
			return joaat("A_C_FISHCHANNELCATFISH_01_LG");
		case 4:
			return joaat("A_C_FISHLAKESTURGEON_01_LG");
		case 5:
			return joaat("A_C_FISHLARGEMOUTHBASS_01_MS");
		case 6:
			return joaat("A_C_FISHLONGNOSEGAR_01_LG");
		case 7:
			return joaat("A_C_FISHMUSKIE_01_LG");
		case 8:
			return joaat("A_C_FISHNORTHERNPIKE_01_LG");
		case 9:
			return joaat("A_C_FISHPERCH_01_SM");
		case 10:
			return joaat("A_C_FISHREDFINPICKEREL_01_SM");
		case 11:
			return joaat("A_C_FISHROCKBASS_01_SM");
		case 12:
			return joaat("A_C_FISHSMALLMOUTHBASS_01_MS");
		case 13:
			return joaat("A_C_FISHSALMONSOCKEYE_01_MS");
		case 14:
			return joaat("A_C_FISHRAINBOWTROUT_01_MS");
		default:
			break;
	}
	return iVar0;
}

int func_371(var uParam0, vector3 vParam1)
{
	vector3 vVar0;

	vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), vParam1) };
	if ((vVar0.x < uParam0->f_27[1 /*3*/] || vVar0.x > uParam0->f_27[4 /*3*/]) || vVar0.y > uParam0->f_27[2 /*3*/].f_1)
	{
		return 0;
	}
	return 1;
}

int func_372(vector3 vParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	float fVar7;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(PLAYER::PLAYER_PED_ID()) };
	vVar3 = { func_419(vParam0 - Global_35) };
	fVar6 = func_485(vVar0, vVar3);
	fVar7 = BUILTIN::COS(45f);
	if (fVar6 < fVar7)
	{
		return 0;
	}
	return 1;
}

float func_373(int iParam0)
{
	return FLOCK::_0x53187E563F938E76(iParam0);
}

void func_374(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	bVar0 = false;
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(iParam1));
	if (!bParam7)
	{
		if (bParam5)
		{
			PED::_SET_RANDOM_OUTFIT_VARIATION(iParam0, true);
			bVar0 = true;
		}
	}
	if (PED::IS_PED_HUMAN(iParam0))
	{
		if (bParam6)
		{
			WEAPON::_0x899A04AFCC725D04(iParam0, WEAPON::_0xD42514C182121C23(iParam1));
		}
		if (PED::IS_PED_MALE(iParam0) && !bParam3)
		{
			func_486(iParam0, 0, 1);
		}
		PED::SET_PED_CONFIG_FLAG(iParam0, 502, true);
	}
	else if (PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (!bParam5)
		{
			PED::_SET_PED_OUTFIT_PRESET(iParam0, 0, false);
			bVar0 = true;
		}
		if (bParam4)
		{
			func_487(iParam0, 0);
			bVar0 = true;
		}
		func_488(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

float func_375(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;

	fVar0 = func_489(iParam0);
	if (iParam1 == 1)
	{
		fVar1 = (fVar0 * 0.25f);
		if (func_490())
		{
			fVar0 = (fVar0 + fVar1);
		}
	}
	return fVar0;
}

float func_376(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;

	fVar0 = func_491(iParam0);
	if (iParam1 == 1)
	{
		fVar1 = (fVar0 * 0.25f);
		if (!func_490())
		{
			fVar0 = (fVar0 - fVar1);
		}
	}
	return fVar0;
}

float func_377(float fParam0)
{
	int iVar0;
	float fVar1;
	float fVar2;

	iVar0 = BUILTIN::FLOOR(fParam0);
	fVar1 = (fParam0 - IntToFloat(iVar0));
	if (fVar1 < 0.0625f)
	{
		fVar2 = (IntToFloat(iVar0) + 0f);
	}
	else if (fVar1 < 0.125f)
	{
		fVar2 = (IntToFloat(iVar0) + 0.0625f);
	}
	else if (fVar1 < 0.1875f)
	{
		fVar2 = (IntToFloat(iVar0) + 0.125f);
	}
	else if (fVar1 < 0.25f)
	{
		fVar2 = (IntToFloat(iVar0) + 0.1875f);
	}
	else if (fVar1 < 0.3125f)
	{
		fVar2 = (IntToFloat(iVar0) + 0.25f);
	}
	else if (fVar1 < 0.375f)
	{
		fVar2 = (IntToFloat(iVar0) + 0.3125f);
	}
	else if (fVar1 < 0.4375f)
	{
		fVar2 = (IntToFloat(iVar0) + 0.375f);
	}
	else if (fVar1 < 0.5f)
	{
		fVar2 = (IntToFloat(iVar0) + 0.4375f);
	}
	else if (fVar1 < 0.5625f)
	{
		fVar2 = (IntToFloat(iVar0) + 0.5f);
	}
	else if (fVar1 < 0.625f)
	{
		fVar2 = (IntToFloat(iVar0) + 0.5625f);
	}
	else if (fVar1 < 0.6875f)
	{
		fVar2 = (IntToFloat(iVar0) + 0.625f);
	}
	else if (fVar1 < 0.75f)
	{
		fVar2 = (IntToFloat(iVar0) + 0.6875f);
	}
	else if (fVar1 < 0.8125f)
	{
		fVar2 = (IntToFloat(iVar0) + 0.75f);
	}
	else if (fVar1 < 0.875f)
	{
		fVar2 = (IntToFloat(iVar0) + 0.8125f);
	}
	else if (fVar1 < 0.9375f)
	{
		fVar2 = (IntToFloat(iVar0) + 0.875f);
	}
	else
	{
		fVar2 = (IntToFloat(iVar0) + 0.9375f);
	}
	return fVar2;
}

void func_378(int iParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	PED::_0x6569F31A01B4C097(iVar0, 0, iParam1);
	PED::_0x6569F31A01B4C097(iVar0, 1, iParam1);
}

int func_379(var uParam0, int iParam1)
{
	float fVar0;
	int iVar1;

	fVar0 = (uParam0->f_278[iParam1] / uParam0->f_470);
	iVar1 = BUILTIN::ROUND((BUILTIN::TO_FLOAT(6000) * fVar0));
	iVar1 += 4000;
	return iVar1;
}

void func_380(var uParam0)
{
	if (uParam0->f_202 == 0f)
	{
		return;
	}
	uParam0->f_202 = (uParam0->f_202 * 0.9f);
	if (uParam0->f_202 < 0.001f)
	{
		uParam0->f_202 = 0f;
	}
}

int func_381(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 30;
	if (uParam0->f_309[iParam1] == 4)
	{
		iVar0 = 20;
	}
	else if (uParam0->f_309[iParam1] == 2 || uParam0->f_309[iParam1] == 3)
	{
		iVar0 = 25;
	}
	return iVar0;
}

int func_382(var uParam0, int iParam1)
{
	float fVar0;
	int iVar1;

	fVar0 = (uParam0->f_278[iParam1] / uParam0->f_470);
	iVar1 = BUILTIN::ROUND((BUILTIN::TO_FLOAT(-4000) * fVar0));
	iVar1 += 10000;
	return iVar1;
}

int func_383(int iParam0)
{
	switch (iParam0)
	{
		case joaat("UPGRADE_FSH_BAIT_BREAD"):
			return joaat("P_BAITBREAD01X");
		case joaat("UPGRADE_FSH_BAIT_CORN"):
			return joaat("P_BAITCORN01X");
		case joaat("UPGRADE_FSH_BAIT_CHEESE"):
			return joaat("P_BAITCHEESE01X");
		case joaat("UPGRADE_FSH_BAIT_WORM"):
			return joaat("P_BAITWORM01X");
		case joaat("UPGRADE_FSH_BAIT_CRICKET"):
			return joaat("P_BAITCRICKET01X");
		case joaat("UPGRADE_FSH_BAIT_CRAYFISH"):
			return joaat("P_CRAWDAD01X");
		case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
			return joaat("P_FINISHEDRAGONFLY01X");
		case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
			return joaat("P_FINISDFISHLURE01X");
		case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
			return joaat("P_FINISHDCRAWD01X");
		case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
			return joaat("P_FINISHEDRAGONFLYLEGENDARY01X");
		case joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"):
			return joaat("P_FINISDFISHLURELEGENDARY01X");
		case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
			return joaat("P_FINISHDCRAWDLEGENDARY01X");
		case joaat("UPGRADE_FSH_BAIT_SPINNER_FRESHWATER_LEG"):
			return joaat("P_LGOC_SPINNER_V4");
		default:
			break;
	}
	return 0;
}

float func_384(vector3 vParam0, int iParam3)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	bool bVar5;

	iVar0 = 1;
	if (iParam3 == 1)
	{
		iVar0 = 0;
	}
	bVar4 = WATER::TEST_VERTICAL_PROBE_AGAINST_ALL_WATER(func_140(vParam0, 1092616192 /* Float: 10f */), iVar0, &fVar2);
	bVar5 = MISC::GET_GROUND_Z_FOR_3D_COORD(func_140(vParam0, 1092616192 /* Float: 10f */), &fVar3, false);
	if ((bVar4 == 1 && bVar5 == 1) && fVar2 > fVar3)
	{
		fVar1 = (fVar2 - fVar3);
	}
	return fVar1;
}

bool func_385(vector3 vParam0)
{
	vector3 vVar0;

	vVar0 = { func_271(vParam0, 1) };
	if (!ENTITY::_0x0C9DBF48C6BA6E4C(PLAYER::PLAYER_PED_ID(), vVar0, 1))
	{
		return true;
	}
	return false;
}

void func_386(var uParam0, vector3 vParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_8))
	{
		ENTITY::SET_ENTITY_COORDS(uParam0->f_8, vParam1, true, false, true, true);
		func_93(&(uParam0->f_215));
	}
}

bool func_387(var uParam0, var uParam1, int iParam2)
{
	if (uParam0->f_224 > 1)
	{
		if (func_131())
		{
			if (uParam0->f_222 != 1f)
			{
				uParam0->f_223 = 1;
			}
		}
		else if (func_393())
		{
			if (uParam0->f_222 != 1.5f)
			{
				uParam0->f_223 = 1;
			}
		}
		else if (func_81(uParam1, iParam2))
		{
			if (uParam0->f_222 != 3f)
			{
				uParam0->f_223 = 1;
			}
		}
		else if (uParam0->f_222 != 1.5f)
		{
			uParam0->f_223 = 1;
		}
	}
	return uParam0->f_223;
}

float func_388(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) && bParam3)
	{
		return 0f;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1) && bParam3)
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false), bParam2);
}

float func_389(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	vVar3 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
	return func_492(vVar0, vVar3, iParam2);
}

bool func_390(int iParam0)
{
	if (Global_1903071.f_5.f_3 > 0.5f)
	{
		return false;
	}
	return iParam0 > 0;
}

bool func_391(int iParam0)
{
	if (Global_1903071.f_5.f_3 > 0.5f)
	{
		return false;
	}
	return iParam0 == 0;
}

bool func_392(var uParam0, float fParam1, float fParam2)
{
	if (uParam0->f_200 == 2)
	{
		if (fParam1 >= (fParam2 / 3f))
		{
			return true;
		}
	}
	if (((uParam0->f_200 == 1 || uParam0->f_200 == 3) || uParam0->f_200 == 4) || uParam0->f_200 == 5)
	{
		if (fParam1 >= (fParam2 / 2f))
		{
			return true;
		}
	}
	return false;
}

bool func_393()
{
	if (!PAD::_IS_USING_KEYBOARD(0))
	{
		if (func_129() != 0 || func_130() != 0)
		{
			return true;
		}
	}
	else if (PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_MINIGAME_FISHING_MANUAL_REEL_IN")) && PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_MINIGAME_FISHING_MANUAL_REEL_OUT_MODIFER")))
	{
		return true;
	}
	return false;
}

int func_394(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (AUDIO::_0x84848E1C0FC67DBB(uParam0->f_70[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_395(var uParam0, var uParam1)
{
	int iVar0;

	if (func_56(uParam0, 32))
	{
		iVar0 = func_77(uParam0);
		if (func_126(iVar0) && uParam1->f_309[iVar0] != 4)
		{
			if (uParam1->f_154[iVar0] == 9)
			{
				func_21(uParam0, uParam1, iVar0, 1, 1);
			}
		}
	}
}

var func_396()
{
	return Global_1940144.f_10;
}

var func_397()
{
	return Global_1940144.f_11;
}

var func_398()
{
	return Global_1940144.f_13;
}

bool func_399(var uParam0, int iParam1)
{
	return uParam0->f_74[iParam1] == 1;
}

bool func_400(var uParam0, int iParam1)
{
	if ((uParam0->f_368[iParam1] > 0 && func_51(&(uParam0->f_148[iParam1 /*3*/]))) && func_161(&(uParam0->f_148[iParam1 /*3*/])) < IntToFloat(uParam0->f_368[iParam1]))
	{
		return true;
	}
	return false;
}

char* func_401(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MGFSH_EQ_ROD1";
		case 1:
			return "MGFSH_EQ_ROD2";
		case 2:
			return "MGFSH_EQ_ROD3";
		case 3:
			return "MGFSH_EQ_BAIT1";
		case 4:
			return "MGFSH_EQ_BAIT2_ABI1";
		case 5:
			return "MGFSH_EQ_BAIT2_FUD1";
		case 6:
			return "MGFSH_EQ_BAIT2_WAR1";
		case 7:
			return "MGFSH_EQ_BAIT2_FSH1";
		case 8:
			return "MGFSH_EQ_BAIT3_ABI1";
		case 9:
			return "MGFSH_EQ_BAIT3_FUD1";
		case 10:
			return "MGFSH_EQ_BAIT3_WAR1";
		case 11:
			return "MGFSH_EQ_BAIT3_FSH1";
		case 12:
			return "MGFSH_EQ_REBAIT";
		case 13:
			return "MGFSH_EQ_BAIT1";
		case 14:
			return "MGFSH_EQ_BAIT_ANY";
		case 15:
			return "MGFSH_CAST_DEEP";
		case 16:
			return "MGFSH_CAST_HIGH";
		case 17:
			return "MGFSH_CAST_WATER";
		case 18:
			return "MGFSH_CAST_CLOSE";
		case 19:
			return "MGFSH_CAST_LOS";
		case 20:
			return "MGFSH_CAST_BAIT";
		case 21:
			return "MGFSH_CAST_NOT_HERE";
		case 22:
			return "MGFSH_BEGIN_AIM_HLP";
		case 23:
			return "MGFSH_BEGIN_AIM_TOG_HLP";
		case 24:
			return "MGFSH_BEGIN_AIM_OBJ";
		case 25:
			return "MGFSH_CAST_AIMING_HLP";
		case 26:
			return "MGFSH_CAST_AIMING_OBJ";
		case 27:
			return "MGFSH_CAST_RELEASE_HLP";
		case 28:
			return "MGFSH_CAST_RELEASE_OBJ";
		case 29:
			return "MGFSH_CAST_POWER";
		case 30:
			return "MGFSH_NIBBLE_DESC";
		case 31:
			return "MGFSH_WAIT_LURE_HLP";
		case 32:
			return "MGFSH_WAIT_LURE_AUTO_HLP";
		case 33:
			return "MGFSH_WAIT_LURE_TOG_HLP";
		case 34:
			return "MGFSH_WAIT_LURE_TOG_AUTO_HLP";
		case 35:
			return "MGFSH_WAIT_LURE_GRIP";
		case 36:
			return "MGFSH_WAIT_LURE_HOOK";
		case 37:
			return "MGFSH_HOOK_FISH_HLP";
		case 38:
			return "MGFSH_HOOK_FISH_OBJ";
		case 39:
			return "MGFSH_FLICK_BAIT";
		case 40:
			return "MGFSH_SPOOL_EMPTY";
		case 41:
			return "MGFSH_MISSED_BITE1";
		case 42:
			return "MGFSH_MISSED_BITE2";
		case 43:
			return "MGFSH_HOOK_ROD1_HLP";
		case 44:
			return "MGFSH_HOOK_ROD1_OBJ";
		case 45:
			return "MGFSH_HOOK_ROD2";
		case 46:
			return "MGFSH_REEL_FISH_HLP";
		case 47:
			return "MGFSH_REEL_FISH_AUTO_HLP";
		case 48:
			return "MGFSH_REEL_FISH_OBJ";
		case 49:
			return "MGFSH_OBJECT_REEL";
		case 50:
			return "MGFSH_FISH_ESC1";
		case 51:
			return "MGFSH_FISH_ESC2";
		case 52:
			return "MGFSH_FISH_ESC3";
		case 53:
			return "MGFSH_FISH_ESC4";
		case 54:
			return "MGFSH_BAIT_LOST";
		case 55:
			return "MGFSH_STOW_HORSE";
		case 56:
			return "MGFSH_HOLD_REEL";
		case 57:
			return "MGFSH_PUMP_ROD";
		case 58:
			return "MGFSH_FULL_SAT";
		case 59:
			return "MGFSH_EQD_CHEESE";
		case 60:
			return "MGFSH_EQD_BREAD";
		case 61:
			return "MGFSH_EQD_CORN";
		case 62:
			return "MGFSH_EQD_WORM";
		case 63:
			return "MGFSH_EQD_CRICKET";
		case 64:
			return "MGFSH_EQD_CRAYFISH";
		case 65:
			return "MGFSH_EQD_LURE_LAKE";
		case 66:
			return "MGFSH_EQD_LURE_RIVER";
		case 67:
			return "MGFSH_EQD_LURE_SWAMP";
		case 68:
			return "MGFSH_EQD_LURE_LAKE";
		case 69:
			return "MGFSH_EQD_LURE_RIVER";
		case 70:
			return "MGFSH_EQD_LURE_SWAMP";
		case 71:
			return "MGFSH_EQD_SPECIAL_SPINNER_MP";
		case 72:
			return "MGFSH_REEL_FISH_HLP2_KM";
		default:
			break;
	}
	return "";
}

char* func_402(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PROVISION_FISH_BLUEGILL";
		case 1:
			return "PROVISION_FISH_BULLHEAD_CATFISH";
		case 2:
			return "PROVISION_FISH_CHAIN_PICKEREL";
		case 3:
			return "PROVISION_FISH_CHANNEL_CATFISH";
		case 4:
			return "PROVISION_FISH_LAKE_STURGEON";
		case 5:
			return "PROVISION_FISH_LARGEMOUTH_BASS";
		case 6:
			return "PROVISION_FISH_LONGNOSE_GAR";
		case 7:
			return "PROVISION_FISH_MUSKIE";
		case 8:
			return "PROVISION_FISH_NORTHERN_PIKE";
		case 9:
			return "PROVISION_FISH_PERCH";
		case 10:
			return "PROVISION_FISH_REDFIN_PICKEREL";
		case 11:
			return "PROVISION_FISH_ROCK_BASS";
		case 12:
			return "PROVISION_FISH_SMALLMOUTH_BASS";
		case 13:
			return "PROVISION_FISH_SOCKEYE_SALMON";
		case 14:
			return "PROVISION_FISH_STEELHEAD_TROUT";
		default:
			break;
	}
	return "";
}

var func_403(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<4> Var0;
	struct<2> Var13;
	var uVar15;

	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	uVar15 = UIFEED::_SHOW_TOOLTIP(&Var0, &Var13, iParam5);
	return uVar15;
}

int func_404(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
{
	int iVar0;
	int iVar1;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_IS_CONTROL_ACTION_VALID(iParam1, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (func_493(iVar0, 2))
		{
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_494(iVar1, iParam1, sParam0, 0, iParam10, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 0, iParam11, bParam12);
		return iVar1;
	}
	return 0;
}

void func_405(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_234(iParam0))
	{
		return;
	}
	iVar0 = func_367(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1951255[iVar0 /*23*/].f_3))
	{
		return;
	}
	HUD::_0xA520C7B05FA4EB2A(Global_1951255[iVar0 /*23*/].f_3, iParam1);
}

void func_406(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam2 && !func_234(iParam0))
	{
		return;
	}
	iVar0 = func_367(iParam0);
	if (bParam1)
	{
		func_495(iParam0, 4);
		if (bParam3)
		{
			func_496(iVar0, 1);
		}
		func_497(iVar0, 1);
	}
	else
	{
		func_498(iParam0, 4);
		func_497(iVar0, 0);
	}
}

void func_407(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_234(iParam0))
	{
		return;
	}
	iVar0 = func_367(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1951255[iVar0 /*23*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ALLOWED_ACTION(Global_1951255[iVar0 /*23*/].f_3, iParam1);
}

bool func_408(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_234(iParam0))
	{
		return false;
	}
	iVar0 = func_367(iParam0);
	return HUD::_UIPROMPT_IS_JUST_PRESSED(Global_1951255[iVar0 /*23*/].f_3);
}

bool func_409(var uParam0)
{
	return (uParam0->f_12 != -99999f && uParam0->f_12 < 0.03f);
}

void func_410(int iParam0)
{
	if (!func_182(iParam0))
	{
		func_123(&(Global_1903071.f_2), iParam0);
	}
}

void func_411(var uParam0, int iParam1, int iParam2)
{
	func_93(&(uParam0->f_148[iParam1 /*3*/]));
	uParam0->f_368[iParam1] = iParam2;
}

float func_412(var uParam0)
{
	if (!func_51(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_135(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_273() - uParam0->f_1);
}

bool func_413(var uParam0, var uParam1, int iParam2)
{
	if ((((func_499(uParam0, uParam1, 1) && !func_56(uParam1, 512)) && func_213(Global_39.f_5803)) && func_500(uParam0, iParam2) > 0f) && func_501(uParam1, iParam2))
	{
		return true;
	}
	return false;
}

bool func_414(var uParam0, var uParam1, int iParam2)
{
	if (!func_499(uParam0, uParam1, 1))
	{
		return true;
	}
	else if (func_56(uParam1, 512))
	{
		return true;
	}
	else if (!func_213(Global_39.f_5803))
	{
		return true;
	}
	else if (func_500(uParam0, iParam2) == 0f)
	{
		return true;
	}
	else if (!func_501(uParam1, iParam2))
	{
		return true;
	}
	return false;
}

void func_415(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	float fVar1;

	iVar0 = func_364(iParam2);
	if (func_365(iVar0) && !FLOCK::_0x19870C40C7EE15BE(iVar0, uParam1->f_77[iParam2]))
	{
		fVar1 = func_500(uParam0, iParam2);
		uParam1->f_77[iParam2] = FLOCK::_0xE93415B3307208E5(iVar0, func_141(), 0f, fVar1, 10000f, 0f, 0f, 0f, 1);
		func_366(iParam2, fVar1);
	}
}

void func_416(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam1 == 3)
	{
		if (iParam2 == 1)
		{
			if (!HUD::_UIPROMPT_GET_URGENT_PULSING_ENABLED(uParam0->f_70))
			{
				HUD::_UIPROMPT_SET_URGENT_PULSING_ENABLED(uParam0->f_70, 1);
			}
		}
		else if (HUD::_UIPROMPT_GET_URGENT_PULSING_ENABLED(uParam0->f_70))
		{
			HUD::_UIPROMPT_SET_URGENT_PULSING_ENABLED(uParam0->f_70, 0);
		}
	}
	else if (func_234(uParam0->f_60[iParam1]))
	{
		iVar0 = func_367(uParam0->f_60[iParam1]);
		if (HUD::_UIPROMPT_IS_VALID(Global_1951255[iVar0 /*23*/].f_3))
		{
			if (iParam2 == 1)
			{
				if (!HUD::_UIPROMPT_GET_URGENT_PULSING_ENABLED(Global_1951255[iVar0 /*23*/].f_3))
				{
					HUD::_UIPROMPT_SET_URGENT_PULSING_ENABLED(Global_1951255[iVar0 /*23*/].f_3, 1);
				}
			}
			else if (HUD::_UIPROMPT_GET_URGENT_PULSING_ENABLED(Global_1951255[iVar0 /*23*/].f_3))
			{
				HUD::_UIPROMPT_SET_URGENT_PULSING_ENABLED(Global_1951255[iVar0 /*23*/].f_3, 0);
			}
		}
	}
}

bool func_417(var uParam0)
{
	if (!func_51(&(uParam0->f_76)))
	{
		func_93(&(uParam0->f_76));
	}
	if (func_161(&(uParam0->f_76)) >= 3f && func_213(Global_39.f_5803))
	{
		if (func_219(Global_39.f_5803) || func_220(Global_39.f_5803))
		{
			return true;
		}
	}
	return false;
}

bool func_418(var uParam0)
{
	if (!func_51(&(uParam0->f_76)))
	{
		func_93(&(uParam0->f_76));
	}
	return func_161(&(uParam0->f_76)) >= 3f;
}

Vector3 func_419(vector3 vParam0)
{
	float fVar0;
	float fVar1;

	fVar0 = BUILTIN::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		vParam0.x = 0f;
		vParam0.f_1 = 0f;
		vParam0.f_2 = 0f;
	}
	return vParam0;
}

int func_420(var uParam0)
{
	return uParam0->f_53 * 1000;
}

void func_421(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	float fVar17;

	if (!func_499(uParam0, uParam1, 1) || func_56(uParam1, 256))
	{
		return;
	}
	iVar0 = -1;
	if (!func_126(iVar0))
	{
		iVar1 = 0;
		while (iVar1 < 30)
		{
			if ((!ENTITY::IS_ENTITY_DEAD(uParam2->f_123[iVar1]) && uParam2->f_154[iVar1] == 4) && func_152(uParam2, iVar1))
			{
				iVar9 = uParam2->f_247[iVar1];
				iVar2 = func_364(uParam2->f_247[iVar1]);
				if (func_365(iVar2) && FLOCK::_0x19870C40C7EE15BE(iVar2, uParam1->f_77[iVar9]))
				{
					fVar16 = uParam1->f_23[iVar1];
					if (fVar16 != 99999f && fVar16 < uParam1->f_168)
					{
						fVar17 = func_502(uParam0, uParam2->f_247[iVar1], Global_39.f_5803);
						if (fVar17 == 5f)
						{
							if (fVar10 <= 0f || fVar16 < fVar10)
							{
								fVar10 = fVar16;
								iVar3 = iVar1;
							}
						}
						else if (fVar17 == 4f)
						{
							if (fVar11 <= 0f || fVar16 < fVar11)
							{
								fVar11 = fVar16;
								iVar4 = iVar1;
							}
						}
						else if (fVar17 == 3f)
						{
							if (fVar12 <= 0f || fVar16 < fVar12)
							{
								fVar12 = fVar16;
								iVar5 = iVar1;
							}
						}
						else if (fVar17 == 2f)
						{
							if (fVar13 <= 0f || fVar16 < fVar13)
							{
								fVar13 = fVar16;
								iVar6 = iVar1;
							}
						}
						else if (fVar17 == 1f)
						{
							if (fVar14 <= 0f || fVar16 < fVar14)
							{
								fVar14 = fVar16;
								iVar7 = iVar1;
							}
						}
						else if (fVar17 == 0.5f)
						{
							if (fVar15 <= 0f || fVar16 < fVar15)
							{
								fVar15 = fVar16;
								iVar8 = iVar1;
							}
						}
					}
				}
			}
			iVar1++;
		}
		if (fVar10 > 0f)
		{
			iVar0 = iVar3;
		}
		else if (fVar11 > 0f)
		{
			iVar0 = iVar4;
		}
		else if (fVar12 > 0f)
		{
			iVar0 = iVar5;
		}
		else if (fVar13 > 0f)
		{
			iVar0 = iVar6;
		}
		else if (fVar14 > 0f)
		{
			iVar0 = iVar7;
		}
		else if (fVar15 > 0f)
		{
			iVar0 = iVar8;
		}
	}
	if (func_126(iVar0))
	{
		func_503(uParam1, uParam2, iVar0);
	}
}

bool func_422(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	if ((!func_499(uParam0, uParam1, 0) || func_504(uParam1, uParam2)) || func_293())
	{
		return true;
	}
	iVar0 = func_77(uParam1);
	if ((func_126(iVar0) && uParam1->f_23[iVar0] != 99999f) && uParam1->f_23[iVar0] > (uParam1->f_168 + 2f))
	{
		return true;
	}
	return false;
}

void func_423(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	if (func_505(uParam1, uParam2))
	{
		uParam1->f_163 = func_506(uParam1, uParam2);
		uParam1->f_166 = func_507(uParam1, uParam2);
		uParam1->f_167 = func_508(uParam1, uParam2);
		uParam1->f_164 = func_509(uParam1, uParam2);
		func_106(uParam1->f_166, uParam1->f_167);
		func_424(uParam0, 2, 1);
		if (uParam1->f_163 == 1)
		{
			func_416(uParam0, 2, 1);
		}
		func_510(uParam0, uParam1, uParam2);
		func_511(uParam0, uParam1);
		func_180(512, 0);
		uParam1->f_156++;
		func_93(&(uParam1->f_160));
		func_96(uParam1, 8192);
		func_96(uParam1, 16384);
	}
	if (func_322(512))
	{
		iVar0 = func_77(uParam1);
		if (!func_126(iVar0) || (func_51(&(uParam1->f_160)) && func_52(&(uParam1->f_160)) > uParam1->f_166))
		{
			func_228(512);
			if (uParam1->f_163 == 1)
			{
				func_23(uParam1);
				func_229(uParam0, uParam1, uParam2, 0);
			}
			uParam1->f_167 = 0;
			func_416(uParam0, 2, 0);
			func_424(uParam0, 2, 0);
		}
	}
}

void func_424(var uParam0, int iParam1, int iParam2)
{
	if (func_234(uParam0->f_60[iParam1]))
	{
		if (iParam2 == 1)
		{
			if (func_512(uParam0->f_60[iParam1], 1))
			{
				func_406(uParam0->f_60[iParam1], 1, 1, 1);
			}
		}
		else if (!func_512(uParam0->f_60[iParam1], 1))
		{
			func_406(uParam0->f_60[iParam1], 0, 1, 1);
		}
	}
}

void func_425(var uParam0, var uParam1, int iParam2, int iParam3)
{
	uParam1->f_3 = iParam2;
	switch (uParam1->f_3)
	{
		case 1:
			if ((func_441(Global_39.f_5803) && uParam1->f_55 > 3) || (func_442(Global_39.f_5803) && uParam1->f_55 > 4))
			{
				if (!func_218(Global_39.f_5803))
				{
					func_513(Global_39.f_5803);
				}
				func_214(uParam0, uParam1, joaat("UPGRADE_FSH_BAIT_NONE"), 0, 0);
			}
			break;
		case 2:
			if (iParam3 == 1)
			{
				func_280(uParam0, 53, 1, -2, 1);
			}
			else
			{
				if (func_514(uParam1))
				{
					if (!func_34(uParam0, 16))
					{
						if (func_441(Global_39.f_5803) || func_442(Global_39.f_5803))
						{
							func_280(uParam0, 50, 1, -2, 1);
						}
						else
						{
							func_280(uParam0, 51, 1, -2, 1);
						}
					}
					if (!func_218(Global_39.f_5803))
					{
						func_513(Global_39.f_5803);
					}
					func_214(uParam0, uParam1, joaat("UPGRADE_FSH_BAIT_NONE"), 0, 0);
				}
				if (!func_34(uParam0, 16))
				{
					func_280(uParam0, 52, 1, -2, 1);
				}
			}
			break;
		case 3:
			if (func_441(Global_39.f_5803) || func_442(Global_39.f_5803))
			{
				if (!func_218(Global_39.f_5803))
				{
					func_513(Global_39.f_5803);
				}
				func_214(uParam0, uParam1, joaat("UPGRADE_FSH_BAIT_NONE"), 0, 0);
			}
			break;
	}
}

bool func_426(var uParam0, var uParam1)
{
	if (func_56(uParam1, 4096) || func_293())
	{
		return false;
	}
	func_282(uParam0, 1, 0, 1);
	if (func_408(uParam0->f_60[1], 1))
	{
		func_35(uParam0, 16);
		return true;
	}
	return false;
}

bool func_427()
{
	if (Global_1903071.f_36 != Global_39.f_5803 && func_213(Global_1903071.f_36))
	{
		return true;
	}
	return false;
}

bool func_428(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = func_77(uParam1);
	if ((((((func_126(iVar0) && !ENTITY::IS_ENTITY_DEAD(uParam2->f_123[iVar0])) && func_499(uParam0, uParam1, 0)) && func_51(&(uParam1->f_160))) && func_52(&(uParam1->f_160)) < uParam1->f_166) && uParam1->f_23[iVar0] != 99999f) && uParam1->f_23[iVar0] < (uParam1->f_168 + 2f))
	{
		return true;
	}
	return false;
}

void func_429(var uParam0, var uParam1, var uParam2, int iParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;

	if (!ENTITY::_0x88AD6CC10D8D35B2(uParam2->f_123[iParam3]) || !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uParam2->f_123[iParam3], false))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam2->f_123[iParam3], true, true);
	}
	TASK::CLEAR_PED_TASKS(uParam2->f_123[iParam3], true, false);
	func_145(uParam2, iParam3, 6);
	WATER::_0xF0FBF193F1F5C0EA(uParam2->f_123[iParam3]);
	func_93(&(uParam0->f_12));
	func_411(&(uParam0->f_82), 43, 2);
	func_411(&(uParam0->f_82), 45, 2);
	func_411(&(uParam0->f_82), 46, 2);
	func_411(&(uParam0->f_82), 47, 2);
	if (func_515(uParam2->f_247[iParam3]))
	{
		func_411(&(uParam0->f_82), 56, 50);
		func_411(&(uParam0->f_82), 57, 30);
	}
	else
	{
		func_53(&(uParam0->f_82.f_148[56 /*3*/]));
		func_53(&(uParam0->f_82.f_148[57 /*3*/]));
	}
	uParam1->f_172 = 0;
	uParam1->f_173 = 0;
	uParam1->f_174 = 0;
	uParam1->f_177 = 0;
	uParam1->f_178 = 0;
	uParam1->f_155 = 0;
	uParam1->f_222 = 3f;
	uParam1->f_223 = 0;
	uParam1->f_224 = 0;
	uParam2->f_439[iParam3] = 1;
	fVar0 = (uParam2->f_278[iParam3] / uParam2->f_470);
	fVar1 = (0.5f * fVar0);
	fVar2 = (fVar1 / 2f);
	if (uParam2->f_402[iParam3] > 0f)
	{
		if (uParam2->f_402[iParam3] >= fVar2)
		{
			uParam1->f_202 = uParam2->f_402[iParam3];
		}
		else
		{
			uParam1->f_202 = fVar2;
		}
	}
	else
	{
		uParam1->f_202 = fVar1;
	}
	ENTITY::SET_ENTITY_INVINCIBLE(uParam2->f_123[iParam3], true);
	PED::SET_PED_CONFIG_FLAG(uParam2->f_123[iParam3], 17, true);
	func_53(&(uParam1->f_219));
	func_228(512);
	TASK::_0x1F298C7BD30D1240(PLAYER::PLAYER_PED_ID());
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam2->f_123[iParam3], false, true);
	TASK::_0x1A52076D26E09004(PLAYER::PLAYER_PED_ID(), uParam2->f_123[iParam3]);
	func_410(1);
	func_180(4, 1);
	func_114(uParam1, 0);
	func_23(uParam1);
	func_229(uParam0, uParam1, uParam2, 1);
}

bool func_430(var uParam0)
{
	if (Global_1903071.f_5 != 6)
	{
		return false;
	}
	if (func_51(&(uParam0->f_160)) && func_52(&(uParam0->f_160)) < uParam0->f_164 + 2000)
	{
		return true;
	}
	return false;
}

void func_431(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	float fVar1;

	if (!func_51(&(uParam0->f_12)))
	{
		uParam1->f_174 = 0;
		return;
	}
	iVar0 = func_381(uParam2, iParam3);
	fVar1 = (BUILTIN::TO_FLOAT(func_244(&(uParam0->f_12))) / IntToFloat(iVar0 * 1000));
	if (BUILTIN::ROUND((fVar1 * 200f)) >= uParam1->f_174)
	{
		uParam1->f_174 = BUILTIN::ROUND((fVar1 * 200f));
	}
	else if (!func_51(&(uParam1->f_212)) || func_244(&(uParam1->f_212)) > uParam0->f_55)
	{
		func_93(&(uParam1->f_212));
		if (uParam1->f_174 > 0)
		{
			uParam1->f_174 = (uParam1->f_174 - 1);
		}
	}
	func_224(uParam1->f_174, 0, 200);
}

void func_432(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if ((!func_81(uParam2, iParam3) || !func_261()) || func_263(uParam1, 0))
	{
		func_516(uParam0, uParam1, uParam2, iParam3);
	}
	else if ((func_131() || func_393()) || func_517())
	{
		func_518(uParam0, uParam1, uParam2);
	}
	else
	{
		func_516(uParam0, uParam1, uParam2, iParam3);
	}
	func_224(uParam1->f_173, 0, 200);
}

void func_433(var uParam0)
{
	if (uParam0->f_174 > 0 && uParam0->f_174 >= uParam0->f_173)
	{
		uParam0->f_172 = uParam0->f_174;
	}
	else
	{
		uParam0->f_172 = uParam0->f_173;
	}
	func_224(uParam0->f_172, 0, 200);
}

bool func_434(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (uParam1->f_172 >= 200)
	{
		return true;
	}
	else if (!func_126(iParam3))
	{
		return true;
	}
	else if (ENTITY::IS_ENTITY_DEAD(uParam2->f_123[iParam3]))
	{
		return true;
	}
	else if (func_426(uParam0, uParam1))
	{
		return true;
	}
	else if (func_182(16))
	{
		return true;
	}
	return false;
}

void func_435()
{
	struct<2> Var0;

	Var0 = { func_519(joaat("FISH_ESCAPED")) };
	STATS::_STAT_ID_INCREMENT_INT(&Var0, 1);
}

void func_436(var uParam0, var uParam1, var uParam2)
{
	if (func_56(uParam1, 64) || func_56(uParam1, 32))
	{
		return;
	}
	func_301(uParam1, 32);
	func_520(uParam1, uParam2);
	func_445(uParam1, uParam2);
	func_20(&(uParam0->f_19));
	Global_1903071.f_41++;
	Global_1903071.f_42++;
	func_110(uParam1);
	func_301(uParam1, 128);
	func_521(0, 6);
	func_180(32, 1);
}

int func_437(var uParam0)
{
	if (func_51(&(uParam0->f_219)) && func_52(&(uParam0->f_219)) >= 6000)
	{
		return 1;
	}
	return 0;
}

int func_438(int iParam0, int iParam1)
{
	int iVar0;

	switch (iParam0)
	{
		case 0:
			if (iParam1 == 1)
			{
				iVar0 = joaat("PROVISION_FISH_BLUEGILL_POOR");
			}
			else
			{
				iVar0 = joaat("PROVISION_FISH_BLUEGILL");
			}
			break;
		case 1:
			if (iParam1 == 1)
			{
				iVar0 = joaat("PROVISION_FISH_BULLHEAD_CATFISH_POOR");
			}
			else
			{
				iVar0 = joaat("PROVISION_FISH_BULLHEAD_CATFISH");
			}
			break;
		case 2:
			if (iParam1 == 1)
			{
				iVar0 = joaat("PROVISION_FISH_CHAIN_PICKEREL_POOR");
			}
			else
			{
				iVar0 = joaat("PROVISION_FISH_CHAIN_PICKEREL");
			}
			break;
		case 3:
			if (iParam1 == 1)
			{
				iVar0 = joaat("PROVISION_FISH_CHANNEL_CATFISH_POOR");
			}
			else
			{
				iVar0 = joaat("PROVISION_FISH_CHANNEL_CATFISH");
			}
			break;
		case 4:
			if (iParam1 == 1)
			{
				iVar0 = joaat("PROVISION_FISH_LAKE_STURGEON_POOR");
			}
			else
			{
				iVar0 = joaat("PROVISION_FISH_LAKE_STURGEON");
			}
			break;
		case 5:
			if (iParam1 == 1)
			{
				iVar0 = joaat("PROVISION_FISH_LARGEMOUTH_BASS_POOR");
			}
			else
			{
				iVar0 = joaat("PROVISION_FISH_LARGEMOUTH_BASS");
			}
			break;
		case 6:
			if (iParam1 == 1)
			{
				iVar0 = joaat("PROVISION_FISH_LONGNOSE_GAR_POOR");
			}
			else
			{
				iVar0 = joaat("PROVISION_FISH_LONGNOSE_GAR");
			}
			break;
		case 7:
			if (iParam1 == 1)
			{
				iVar0 = joaat("PROVISION_FISH_MUSKIE_POOR");
			}
			else
			{
				iVar0 = joaat("PROVISION_FISH_MUSKIE");
			}
			break;
		case 8:
			if (iParam1 == 1)
			{
				iVar0 = joaat("PROVISION_FISH_NORTHERN_PIKE_POOR");
			}
			else
			{
				iVar0 = joaat("PROVISION_FISH_NORTHERN_PIKE");
			}
			break;
		case 9:
			if (iParam1 == 1)
			{
				iVar0 = joaat("PROVISION_FISH_PERCH_POOR");
			}
			else
			{
				iVar0 = joaat("PROVISION_FISH_PERCH");
			}
			break;
		case 10:
			if (iParam1 == 1)
			{
				iVar0 = joaat("PROVISION_FISH_REDFIN_PICKEREL_POOR");
			}
			else
			{
				iVar0 = joaat("PROVISION_FISH_REDFIN_PICKEREL");
			}
			break;
		case 11:
			if (iParam1 == 1)
			{
				iVar0 = joaat("PROVISION_FISH_ROCK_BASS_POOR");
			}
			else
			{
				iVar0 = joaat("PROVISION_FISH_ROCK_BASS");
			}
			break;
		case 12:
			if (iParam1 == 1)
			{
				iVar0 = joaat("PROVISION_FISH_SMALLMOUTH_BASS_POOR");
			}
			else
			{
				iVar0 = joaat("PROVISION_FISH_SMALLMOUTH_BASS");
			}
			break;
		case 13:
			if (iParam1 == 1)
			{
				iVar0 = joaat("PROVISION_FISH_SOCKEYE_SALMON_POOR");
			}
			else
			{
				iVar0 = joaat("PROVISION_FISH_SOCKEYE_SALMON");
			}
			break;
		case 14:
			if (iParam1 == 1)
			{
				iVar0 = joaat("PROVISION_FISH_STEELHEAD_TROUT_POOR");
			}
			else
			{
				iVar0 = joaat("PROVISION_FISH_STEELHEAD_TROUT");
			}
			break;
		default:
			break;
	}
	return iVar0;
}

bool func_439(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_217(iParam0, 0, 0, 0);
	iVar1 = func_522(iParam0, 0);
	return iVar0 >= iVar1;
}

void func_440(var uParam0)
{
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam0->f_18))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1903071.f_5.f_7))
	{
		return;
	}
	uParam0->f_19 = 0f;
	func_93(&(uParam0->f_20));
	uParam0->f_18 = GRAPHICS::START_NETWORKED_PARTICLE_FX_LOOPED_ON_ENTITY_BONE("scr_mg_fishing_drips", Global_1903071.f_5.f_7, 0f, 0f, 0f, 0f, 0f, 0f, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Global_1903071.f_5.f_7, "SKEL_Tail5"), 1065353216 /* Float: 1f */, 0, 0, 0);
	GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_18, "fade", uParam0->f_19, false);
}

bool func_441(int iParam0)
{
	if ((iParam0 == joaat("UPGRADE_FSH_BAIT_BREAD") || iParam0 == joaat("UPGRADE_FSH_BAIT_CORN")) || iParam0 == joaat("UPGRADE_FSH_BAIT_CHEESE"))
	{
		return true;
	}
	return false;
}

bool func_442(int iParam0)
{
	if ((iParam0 == joaat("UPGRADE_FSH_BAIT_WORM") || iParam0 == joaat("UPGRADE_FSH_BAIT_CRICKET")) || iParam0 == joaat("UPGRADE_FSH_BAIT_CRAYFISH"))
	{
		return true;
	}
	return false;
}

bool func_443(int iParam0)
{
	if ((((iParam0 == 2 || iParam0 == 3) || iParam0 == 5) || iParam0 == 7) || iParam0 == 8)
	{
		return true;
	}
	return false;
}

char* func_444(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PROVISION_BLUEGILL_DESC";
		case 1:
			return "PROVISION_BULHDCATFSH_DESC";
		case 2:
			return "PROVISION_CHNPKRL_DESC";
		case 3:
			return "PROVISION_CHNCATFSH_DESC";
		case 4:
			return "PROVISION_LKSTURG_DESC";
		case 5:
			return "PROVISION_LRGMTHBASS_DESC";
		case 6:
			return "PROVISION_LNGNOSEGAR_DESC";
		case 7:
			return "PROVISION_MUSKIE_DESC";
		case 8:
			return "PROVISION_NPIKE_DESC";
		case 9:
			return "PROVISION_PERCH_DESC";
		case 10:
			return "PROVISION_RDFNPCKREL_DESC";
		case 11:
			return "PROVISION_ROCKBASS_DESC";
		case 12:
			return "PROVISION_SMLMTHBASS_DESC";
		case 13:
			return "PROVISION_SCKEYESAL_DESC";
		case 14:
			return "PROVISION_FISH_STHDTROUT_DESC";
		default:
			break;
	}
	return "";
}

void func_445(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_523(uParam0, uParam1);
	iVar1 = func_77(uParam0);
	if (!func_126(iVar1))
	{
		return;
	}
	func_525(func_524(uParam0, uParam1, iVar0, iVar1));
}

bool func_446(var uParam0, int iParam1)
{
	if (uParam0->f_340[iParam1] == 1)
	{
		return false;
	}
	return true;
}

bool func_447(int iParam0, bool bParam1)
{
	if (bParam1 && !func_234(iParam0))
	{
		return false;
	}
	return !func_493(iParam0, 4);
}

bool func_448()
{
	struct<2> Var0;
	struct<2> Var2;

	if (func_200() != 0)
	{
		return true;
	}
	if (func_526())
	{
		return false;
	}
	if (HUD::_0x7EC0D68233E391AC(6) == 1)
	{
		return true;
	}
	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = { func_527() };
	if (func_528(Var0))
	{
		return false;
	}
	Var2 = { func_529() };
	if (func_528(Var2))
	{
		return false;
	}
	return true;
}

bool func_449(int iParam0, bool bParam1, bool bParam2)
{
	if (Global_1572887.f_13 != -1)
	{
		if ((bParam2 && iParam0 == 0) && bParam1 == 0)
		{
			return Global_1900736.f_67;
		}
		if ((bParam2 && iParam0 == 0) && bParam1 == 1)
		{
			return Global_1900736.f_68;
		}
		if (func_526())
		{
			return true;
		}
		if (Global_1071686.f_3 && !Global_1572887.f_9)
		{
			if ((Global_1056141[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*471*/].f_463 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) && NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
			{
				return true;
			}
		}
	}
	else if (bParam2 && iParam0 == 0)
	{
		if (!bParam1)
		{
			return Global_1900736.f_67;
		}
		else
		{
			return Global_1900736.f_68;
		}
	}
	if (iParam0 == 0 && func_528(func_530(0)))
	{
		return true;
	}
	if ((Global_1940258 && 81919 & (-1 - iParam0)) != 0)
	{
		return true;
	}
	if (!bParam1)
	{
		if ((MISC::GET_GAME_TIMER() - 5000) < Global_1900871)
		{
			return true;
		}
	}
	switch (func_531(func_530(0)))
	{
		case -1:
			return false;
		case 2:
			return iParam0 & 1 == 0;
		case 5:
			return iParam0 & 2 == 0;
		case 3:
			return iParam0 & 16 == 0;
		case 4:
			return iParam0 & 32 == 0;
		case 7:
			return iParam0 & 1024 == 0;
		default:
			break;
	}
	return false;
}

char* func_450(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

int func_451(vector3 vParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 51)
	{
		if (func_532(vParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

char* func_452(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "LANDMARK_MOUNT_HAGEN";
		case 1:
			return "LANDMARK_SCRATCHING_POST";
		case 2:
			return "LANDMARK_JORGES_GAP";
		case 3:
			return "LANDMARK_MERCER_STATION";
		case 4:
			return "LANDMARK_ODDFELLOWS_REST";
		case 5:
			return "LANDMARK_RATTLESNAKE_HOLLOW";
		case 6:
			return "LANDMARK_SILENT_STEAD";
		case 7:
			return "LANDMARK_THE_HANGING_ROCK";
		case 8:
			return "LANDMARK_THE_OLD_BACCHUS_PLACE";
		case 9:
			return "LANDMARK_TWO_CROWS";
		case 10:
			return "LANDMARK_REPENTANCE";
		case 11:
			return "LANDMARK_BENEDICT_PASS";
		case 12:
			return "WATER_MANTECA_FALLS";
		case 13:
			return "SETTLEMENT_LIMPANY";
		case 14:
			return "WATER_MOUNT_SHANN";
		case 15:
			return "LANDMARK_THREE_SISTERS";
		case 16:
			return "HIDEOUT_PIKES_BASIN";
		case 17:
			return "SETTLEMENT_EL_NIDO";
		case 18:
			return "LANDMARK_BRITTLEBUSH_TRAWL";
		case 19:
			return "LANDMARK_ERIS_FIELD";
		case 20:
			return "LANDMARK_GRANITE_PASS";
		case 21:
			return "LANDMARK_VENTERS_PLACE";
		case 22:
			return "LANDMARK_PLEASANCE_HOUSE";
		case 23:
			return "HOMESTEAD_CHADWICK_FARM";
		case 24:
			return "LANDMARK_BLACK_BONE_FOREST";
		case 25:
			return "LANDMARK_CITADEL_ROCK";
		case 26:
			return "LANDMARK_CUEVA_SECA";
		case 27:
			return "LANDMARK_DEWBERRY_CREEK";
		case 28:
			return "LANDMARK_DIABLO_RIDGE";
		case 29:
			return "LANDMARK_DONNER_FALLS";
		case 31:
			return "HIDEOUT_SOLOMONS_FOLLY";
		case 32:
			return "LANDMARK_FORT_BRENNAND";
		case 33:
			return "LANDMARK_CALIBANS_SEAT";
		case 34:
			return "HIDEOUT_HORSESHOE_OVERLOOK";
		case 35:
			return "LANDMARK_MESCALERO";
		case 36:
			return "LANDMARK_RIO_DEL_LOBO_HOUSE";
		case 37:
			return "LANDMARK_RIO_DEL_LOBO_ROCK";
		case 38:
			return "LANDMARK_BROKEN_TREE";
		case 39:
			return "LANDMARK_BARDS_CROSSING";
		case 40:
			return "LANDMARK_FACE_ROCK";
		case 50:
			return "LANDMARK_NEKOTI_ROCK";
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
			return "";
	}
	return "";
}

bool func_453(int iParam0)
{
	switch (iParam0)
	{
		case 22:
		case 25:
		case 68:
			return true;
	}
	return false;
}

bool func_454(int iParam0)
{
	if (!func_533(iParam0))
	{
		return false;
	}
	return func_534(iParam0);
}

struct<7> func_455(int iParam0)
{
	struct<7> Var0;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0);
	return Var0;
}

bool func_456(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

bool func_457(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_344(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_458(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 < 0)
	{
		return false;
	}
	if (iParam1 < 0 || iParam1 >= iParam3)
	{
		return false;
	}
	if (!INVENTORY::_0x82FA24C3D3FCD9B7(iParam2, iParam1, uParam0))
	{
		return false;
	}
	return true;
}

bool func_459(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("WEAPON_UNARMED"));
}

int func_460(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (!INVENTORY::_0x42A2F33A1942E865(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_461(int iParam0)
{
	struct<2> Var0;

	if (!func_345(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_462(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CLOTHING_BLEND_FRECKLES_NONE"):
			return 241235545;
		case joaat("CLOTHING_BLEND_MOLES_NONE"):
			return 1827902148;
		case joaat("CLOTHING_BLEND_SPOTS_NONE"):
			return 1301555144;
		case joaat("CLOTHING_BLEND_FOUNDATION_NONE"):
			return -2056583192;
		case joaat("CLOTHING_BLEND_BLUSHER_NONE"):
			return 1015239729;
		case joaat("CLOTHING_BLEND_EYELINER_NONE"):
			return -340627321;
		case joaat("CLOTHING_BLEND_EYESHADOW_NONE"):
			return -875805376;
		case joaat("CLOTHING_BLEND_LIPSTICK_NONE"):
			return -768760704;
		case joaat("CLOTHING_BLEND_FACIAL_HAIR_NONE"):
			return -2118203104;
		case joaat("CLOTHING_BLEND_GRIME_NONE"):
			return 1285634184;
		case -643819742:
			return -559080197;
		case joaat("CLOTHING_BLEND_COMPLEXION_NONE"):
			return -1180698265;
		case joaat("CLOTHING_BLEND_COMPLEXION_2_NONE"):
			return -487028314;
		case 1687431937:
			return -1811760631;
		case joaat("CLOTHING_BLEND_SCAR_NONE"):
			return 1858448324;
		default:
			break;
	}
	return 0;
}

int func_463(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 22)
	{
		if ((uParam0[iVar0 /*17*/])->f_1 == -1)
		{
		}
		else
		{
			if ((uParam0[iVar0 /*17*/])->f_16 == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_464(int iParam0)
{
	int iVar0;

	iVar0 = func_461(iParam0);
	switch (iVar0)
	{
		case 1341188928:
			return -2056583192;
		case 1216664798:
			return 1015239729;
		case 829857647:
			return -340627321;
		case -636562458:
			return -875805376;
		case 252325943:
			return -768760704;
		default:
			break;
	}
	return 0;
}

void func_465(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return;
	}
	if (RDR_LOCAL_LOAD_S >= 11)
	{
		return;
	}
}

void func_466(var uParam0, int iParam1, struct<17> Param2)
{
	int iVar0;
	struct<24> Var1;

	if (!func_535(uParam0))
	{
		return;
	}
	if (Global_1293346.f_2011 < 20)
	{
		Global_1293346.f_2011++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			Global_1293346.f_2011.f_1[iVar0 /*24*/] = { Global_1293346.f_2011.f_1[iVar0 + 1 /*24*/] };
			iVar0++;
		}
	}
	Var1.f_7.f_1 = 11;
	Var1.f_7.f_16 = 255;
	Var1 = { *uParam0 };
	Var1.f_4 = iParam1;
	Var1.f_7 = { Param2 };
	Var1.f_6 = 1;
	Global_1293346.f_2011.f_1[(Global_1293346.f_2011 - 1) /*24*/] = { Var1 };
}

struct<4> func_467(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_13 == 0)
	{
		iVar0 = func_344(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&Global_1293346))
			{
				Global_1293346 = { func_351(joaat("CHARACTER"), func_536(), -1591664384, bParam0) };
			}
			return Global_1293346;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_12)))
			{
				Global_1293346.f_12 = { func_351(joaat("CHARACTER"), func_536(), -1591664384, 0) };
			}
			return Global_1293346.f_12;
		}
	}
	return func_351(joaat("CHARACTER"), func_536(), -1591664384, bParam0);
}

struct<4> func_468(bool bParam0)
{
	int iVar0;

	iVar0 = func_344(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_4)))
		{
			Global_1293346.f_4 = { func_351(923904168, func_467(bParam0), -740156546, bParam0) };
		}
		return Global_1293346.f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_16)))
		{
			Global_1293346.f_16 = { func_351(923904168, func_467(bParam0), -740156546, 0) };
		}
		return Global_1293346.f_16;
	}
	return func_351(923904168, func_467(bParam0), -740156546, 0);
}

bool func_469(int iParam0, bool bParam1)
{
	if (func_461(iParam0) == 1779021115)
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
	{
		if (bParam1)
		{
			return func_537();
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_470(int iParam0, var uParam1, int iParam2, bool bParam3, int iParam4)
{
	return func_538(iParam0, *uParam1, iParam2, bParam3, 1, iParam4) > 0;
}

bool func_471(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_539(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_472(bool bParam0)
{
	int iVar0;

	iVar0 = func_344(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_8)))
		{
			Global_1293346.f_8 = { func_351(271701509, func_467(bParam0), 12999093, 0) };
		}
		return Global_1293346.f_8;
	}
	return func_351(271701509, func_467(bParam0), 12999093, 0);
}

bool func_473(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_461(iParam0);
	if (iVar1 == -1015256479)
	{
		return false;
	}
	iVar3 = ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_COUNT(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iVar1, iVar2, &iVar0))
		{
			if (func_540(iParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_474(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_541(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

bool func_475(int iParam0)
{
	if ((((iParam0 == joaat("UPGRADE_FSH_BAIT_CHEESE") || iParam0 == joaat("UPGRADE_FSH_BAIT_WORM")) || iParam0 == joaat("UPGRADE_FSH_BAIT_LURE_LAKE")) || iParam0 == joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE")) || iParam0 == joaat("UPGRADE_FSH_BAIT_SPINNER_FRESHWATER_LEG"))
	{
		return true;
	}
	return false;
}

bool func_476(int iParam0)
{
	if ((((iParam0 == joaat("UPGRADE_FSH_BAIT_BREAD") || iParam0 == joaat("UPGRADE_FSH_BAIT_CRICKET")) || iParam0 == joaat("UPGRADE_FSH_BAIT_LURE_RIVER")) || iParam0 == joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER")) || iParam0 == joaat("UPGRADE_FSH_BAIT_SPINNER_FRESHWATER_LEG"))
	{
		return true;
	}
	return false;
}

bool func_477(int iParam0)
{
	if ((((iParam0 == joaat("UPGRADE_FSH_BAIT_CORN") || iParam0 == joaat("UPGRADE_FSH_BAIT_CRAYFISH")) || iParam0 == joaat("UPGRADE_FSH_BAIT_LURE_SWAMP")) || iParam0 == joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP")) || iParam0 == joaat("UPGRADE_FSH_BAIT_SPINNER_FRESHWATER_LEG"))
	{
		return true;
	}
	return false;
}

int func_478(int iParam0)
{
	switch (iParam0)
	{
		case joaat("KIT_POUCH_REMEDIES"):
			return MISC::GET_HASH_KEY("KIT_POUCH_REMEDIES_MP");
		case joaat("KIT_POUCH_INGREDIENTS"):
			return MISC::GET_HASH_KEY("KIT_POUCH_INGREDIENTS_MP");
		case joaat("KIT_POUCH_MATERIALS"):
			return MISC::GET_HASH_KEY("KIT_POUCH_MATERIALS_MP");
		case joaat("KIT_POUCH_VALUABLES"):
			return MISC::GET_HASH_KEY("KIT_POUCH_VALUABLES_MP");
		case joaat("KIT_POUCH_KIT"):
			return MISC::GET_HASH_KEY("KIT_POUCH_KIT_MP");
		case joaat("KIT_POUCH_PROVISIONS"):
			return MISC::GET_HASH_KEY("KIT_POUCH_PROVISIONS_MP");
	}
	return 0;
}

int func_479(int iParam0, int iParam1)
{
	if (!func_345(iParam0, 0))
	{
		return func_543(func_542(iParam0), iParam1);
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_DOES_ITEM_HAVE_TAG(iParam0, iParam1, 1120943070))
	{
		return 1;
	}
	return 0;
}

void func_480(int iParam0, int iParam1, var uParam2)
{
	*iParam1 = 0;
	*uParam2 = 0;
	switch (iParam0)
	{
		case joaat("AMMO_REVOLVER_AMMOBOX"):
			*iParam1 = joaat("REVOLVER_AMMO_BOX");
			*uParam2 = joaat("AMMO_REVOLVER");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_USED"):
			*iParam1 = joaat("REVOLVER_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_REVOLVER");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_EXPRESS"):
			*iParam1 = joaat("REVOLVER_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_REVOLVER_EXPRESS");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_HIGH_VELOCITY"):
			*iParam1 = joaat("REVOLVER_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_REVOLVER_HIGH_VELOCITY");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX"):
			*iParam1 = joaat("PISTOL_AMMO_BOX");
			*uParam2 = joaat("AMMO_PISTOL");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_USED"):
			*iParam1 = joaat("PISTOL_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_PISTOL");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_EXPRESS"):
			*iParam1 = joaat("PISTOL_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_PISTOL_EXPRESS");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_HIGH_VELOCITY"):
			*iParam1 = joaat("PISTOL_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_PISTOL_HIGH_VELOCITY");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX"):
			*iParam1 = joaat("RIFLE_AMMO_BOX");
			*uParam2 = joaat("AMMO_RIFLE");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_USED"):
			*iParam1 = joaat("RIFLE_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_RIFLE");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_EXPRESS"):
			*iParam1 = joaat("RIFLE_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_RIFLE_EXPRESS");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_HIGH_VELOCITY"):
			*iParam1 = joaat("RIFLE_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_RIFLE_HIGH_VELOCITY");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX"):
			*iParam1 = joaat("REPEATER_AMMO_BOX");
			*uParam2 = joaat("AMMO_REPEATER");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_USED"):
			*iParam1 = joaat("REPEATER_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_REPEATER");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_EXPRESS"):
			*iParam1 = joaat("REPEATER_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_REPEATER_EXPRESS");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_HIGH_VELOCITY"):
			*iParam1 = joaat("REPEATER_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_REPEATER_HIGH_VELOCITY");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX"):
			*iParam1 = joaat("SHOTGUN_AMMO_BOX");
			*uParam2 = joaat("AMMO_SHOTGUN");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX_USED"):
			*iParam1 = joaat("SHOTGUN_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_SHOTGUN");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX_SLUG"):
			*iParam1 = joaat("SHOTGUN_AMMO_BOX_SLUG");
			*uParam2 = joaat("AMMO_SHOTGUN_SLUG");
			break;
		case joaat("AMMO_22_AMMOBOX"):
			*iParam1 = joaat("22_AMMO_BOX");
			*uParam2 = joaat("AMMO_22");
			break;
	}
}

struct<14> func_481(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	struct<14> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_13 = -1;
	if (iParam0 != 0)
	{
		Var0 = iParam0;
	}
	if (iParam1 != 0 && iParam1 != -1591664384)
	{
		Var0.f_1 = iParam1;
	}
	if (iParam2 != 0 && iParam2 != -1591664384)
	{
		Var0.f_2 = iParam2;
	}
	if (iParam3 != 0 && iParam3 != -1591664384)
	{
		Var0.f_3 = iParam3;
	}
	if (iParam4 != 0)
	{
		Var0.f_4 = iParam4;
	}
	if (iParam5 != 0)
	{
		Var0.f_5 = iParam5;
	}
	if (iParam6 != 0)
	{
		Var0.f_8 = iParam6;
	}
	return Var0;
}

void func_482(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_483(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_344(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_484(int iParam0)
{
	return func_493(iParam0, 2);
}

float func_485(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

void func_486(int iParam0, bool bParam1, bool bParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		PED::_0xDF631E4BCE1B1FC4(iParam0, joaat("HATS"), 0, 1);
	}
	else
	{
		PED::_SET_PED_COMPONENT_DISABLED(iParam0, joaat("HATS"), 1);
	}
	if (bParam2)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

void func_487(int iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	PED::_SET_PED_BODY_COMPONENT(iParam0, joaat("META_HORSE_SADDLE_ONLY"));
	if (bParam1)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

void func_488(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		PED::_SET_PED_FACE_FEATURE(iParam0, 41611, 0f);
	}
	else
	{
		PED::_SET_PED_FACE_FEATURE(iParam0, 41611, 1f);
	}
}

float func_489(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0.5f;
		case 1:
			return 0.5f;
		case 2:
			return 0.5f;
		case 3:
			return 14f;
		case 4:
			return 14f;
		case 5:
			return 4f;
		case 6:
			return 14f;
		case 7:
			return 14f;
		case 8:
			return 14f;
		case 9:
			return 0.5f;
		case 10:
			return 0.5f;
		case 11:
			return 0.5f;
		case 12:
			return 4f;
		case 13:
			return 4f;
		case 14:
			return 4f;
		default:
			break;
	}
	return 0f;
}

bool func_490()
{
	return (func_544(1) || func_544(4));
}

float func_491(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2f;
		case 1:
			return 2f;
		case 2:
			return 2f;
		case 3:
			return 20f;
		case 4:
			return 20f;
		case 5:
			return 6f;
		case 6:
			return 20f;
		case 7:
			return 20f;
		case 8:
			return 20f;
		case 9:
			return 2f;
		case 10:
			return 2f;
		case 11:
			return 2f;
		case 12:
			return 6f;
		case 13:
			return 6f;
		case 14:
			return 6f;
		default:
			break;
	}
	return 0f;
}

float func_492(struct<2> Param0, int iParam2, struct<2> Param3, var uParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar1 = (Param3 - Param0);
	fVar2 = (Param3.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = MISC::ATAN2(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam6 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

bool func_493(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1951255[iParam0 /*23*/].f_1 && iParam1) != 0;
}

void func_494(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, float fParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
{
	int iVar0;

	Global_1951255[iParam0 /*23*/].f_4 = iParam1;
	Global_1951255[iParam0 /*23*/] = iParam4;
	Global_1951255[iParam0 /*23*/].f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1951255[iParam0 /*23*/].f_2 = iParam5;
	Global_1951255[iParam0 /*23*/].f_6 = { vParam6 };
	Global_1951255[iParam0 /*23*/].f_9 = fParam9;
	Global_1951255[iParam0 /*23*/].f_10 = iParam10;
	Global_1951255[iParam0 /*23*/].f_11 = iParam11;
	Global_1951255[iParam0 /*23*/].f_12 = { 0f, 0f, 0f };
	Global_1951255[iParam0 /*23*/].f_5 = iParam12;
	Global_1951255[iParam0 /*23*/].f_1 = 2;
	Global_1951255[iParam0 /*23*/].f_17 = -1;
	Global_1951255[iParam0 /*23*/].f_18 = iParam16;
	Global_1951255[iParam0 /*23*/].f_19 = iParam15;
	Global_1951255[iParam0 /*23*/].f_20 = bParam25;
	Global_1951255[iParam0 /*23*/].f_22 = 0f;
	if (bParam25)
	{
		Global_1951255[iParam0 /*23*/].f_21 = MISC::GET_GAME_TIMER();
	}
	else
	{
		Global_1951255[iParam0 /*23*/].f_21 = MISC::_GET_SYSTEM_TIME();
	}
	iVar0 = HUD::_UIPROMPT_REGISTER_BEGIN();
	HUD::_UIPROMPT_SET_CONTROL_ACTION(iVar0, iParam1);
	if (iParam23 != 0)
	{
		HUD::_UIPROMPT_SET_CONTROL_ACTION(iVar0, iParam23);
	}
	HUD::_UIPROMPT_SET_TEXT(iVar0, sParam2);
	if (iParam3 == 4)
	{
		HUD::_UIPROMPT_CONTEXT_SET_POINT(iVar0, vParam6);
		HUD::_UIPROMPT_CONTEXT_SET_SIZE(iVar0, fParam9);
	}
	else if (iParam3 == 2)
	{
		HUD::_0x4D107406667423BE(iVar0, iParam10);
	}
	else if (iParam3 == 5)
	{
		HUD::_0x4D107406667423BE(iVar0, iParam11);
		HUD::_UIPROMPT_CONTEXT_SET_POINT(iVar0, 0f, 0f, 0f);
		HUD::_UIPROMPT_CONTEXT_SET_SIZE(iVar0, fParam9);
	}
	HUD::_UIPROMPT_SET_PRIORITY(iVar0, iParam4);
	HUD::_UIPROMPT_SET_TRANSPORT_MODE(iVar0, iParam5);
	HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 18, 1);
	if (bParam22)
	{
		HUD::_0x53CE46C01A089DA1(iVar0, 1);
	}
	switch (iParam14)
	{
		case 0:
			HUD::_UIPROMPT_SET_STANDARD_MODE(iVar0, 0);
			break;
		case 2:
			HUD::_UIPROMPT_SET_STANDARD_MODE(iVar0, 1);
			break;
		case 1:
			HUD::_UIPROMPT_SET_PRESSED_TIMED_MODE(iVar0, iParam16);
			break;
		case 3:
			HUD::_UIPROMPT_SET_HOLD_INDEFINITELY_MODE(iVar0);
			break;
		case 6:
			HUD::_UIPROMPT_SET_HOLD_AUTO_FILL_MODE(iVar0, iParam16, iParam15);
			if (bParam25)
			{
				HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 24, 1);
			}
			break;
		case 7:
			HUD::_0xA3F2149AA24F3D8E(iVar0, iParam16, iParam15);
			if (bParam25)
			{
				HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 24, 1);
			}
			break;
		case 8:
			HUD::_UIPROMPT_SET_MASH_MODE(iVar0, iParam17);
			break;
		case 9:
			HUD::_UIPROMPT_SET_MASH_AUTO_FILL_MODE(iVar0, iParam16, iParam17);
			break;
		case 14:
			HUD::_UIPROMPT_SET_MASH_INDEFINITELY_MODE(iVar0);
			break;
		case 16:
			HUD::_UIPROMPT_SET_TARGET_MODE(iVar0, 0.5f, 0.1f, 0);
			break;
		case 10:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_MODE(iVar0, iParam17, iParam18, iParam19);
			break;
		case 4:
		case 5:
			HUD::_UIPROMPT_SET_STANDARDIZED_HOLD_MODE(iVar0, iParam24);
			break;
		case 11:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_CAN_FAIL_MODE(iVar0, iParam17, iParam18, iParam19);
			break;
		case 12:
			HUD::_UIPROMPT_SET_MASH_MANUAL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), iParam18, 0f, iParam19);
			break;
		case 13:
			HUD::_UIPROMPT_SET_MASH_MANUAL_CAN_FAIL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), iParam18, 0f, iParam19);
			break;
		case 15:
			HUD::_UIPROMPT_SET_ROTATE_MODE(iVar0, fParam20, iParam21);
			HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 10, 1);
			break;
	}
	HUD::_UIPROMPT_REGISTER_END(iVar0);
	Global_1951255[iParam0 /*23*/].f_3 = iVar0;
	func_496(iParam0, 1);
	func_497(iParam0, 1);
	func_498(iParam0, 128);
}

void func_495(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951255[iParam0 /*23*/].f_1 = (Global_1951255[iParam0 /*23*/].f_1 - (Global_1951255[iParam0 /*23*/].f_1 && iParam1));
}

void func_496(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1951255[iParam0 /*23*/].f_3))
	{
		if (Global_1951255[iParam0 /*23*/].f_5 == 5 && !func_493(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1951255[iParam0 /*23*/].f_3, false);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1951255[iParam0 /*23*/].f_3, bParam1);
		}
	}
}

void func_497(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1951255[iParam0 /*23*/].f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(Global_1951255[iParam0 /*23*/].f_3, bParam1);
	}
}

void func_498(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951255[iParam0 /*23*/].f_1 = (Global_1951255[iParam0 /*23*/].f_1 || iParam1);
}

bool func_499(var uParam0, var uParam1, int iParam2)
{
	if ((func_107(uParam0->f_82[41]) || func_107(uParam0->f_82[42])) || func_107(uParam0->f_82[35]))
	{
		return false;
	}
	if (iParam2 == 1)
	{
		if (uParam1->f_54 == 0)
		{
			if (Global_1903071.f_5.f_4 > 0.9f)
			{
				return false;
			}
		}
		else if ((!func_131() && func_51(&(uParam0->f_15))) && func_52(&(uParam0->f_15)) > 2000)
		{
			return false;
		}
	}
	if ((((((Global_1903071.f_5 != 6 || func_56(uParam1, 4096)) || !func_51(&(uParam1->f_203))) || func_161(&(uParam1->f_203)) <= IntToFloat(uParam1->f_165)) || func_545()) || !func_546(uParam1)) || (ENTITY::DOES_ENTITY_EXIST(func_141()) && func_385(func_142())))
	{
		return false;
	}
	return true;
}

float func_500(var uParam0, int iParam1)
{
	return func_547(uParam0, iParam1);
}

bool func_501(var uParam0, int iParam1)
{
	return (func_546(uParam0) && uParam0->f_15 > func_373(func_370(iParam1)));
}

float func_502(var uParam0, int iParam1, int iParam2)
{
	float fVar0;
	int iVar1;
	int iVar2;

	if (!func_213(iParam2))
	{
		return 0f;
	}
	fVar0 = 0f;
	iVar1 = func_548(iParam1);
	iVar2 = COMPENDIUM::COMPENDIUM_FISH_GET_LURE_SUITABILITY_BY_STAT_ITEM(iVar1, iParam2);
	switch (iVar2)
	{
		case joaat("OUTSTANDING"):
			fVar0 = 4f;
			break;
		case joaat("EXCELLENT"):
			fVar0 = 3f;
			break;
		case joaat("GOOD"):
			fVar0 = 2f;
			break;
		case joaat("NORMAL"):
			fVar0 = 1f;
			break;
		case joaat("BAD"):
			fVar0 = 0.5f;
			break;
		case 0:
			fVar0 = 0f;
			break;
		default:
			break;
	}
	if (fVar0 > 0f && uParam0->f_48 != -1)
	{
		if (func_219(Global_39.f_5803) || func_220(Global_39.f_5803))
		{
			if (((uParam0->f_48 == 0 && func_475(Global_39.f_5803)) || (uParam0->f_48 == 1 && func_476(Global_39.f_5803))) || (uParam0->f_48 == 2 && func_477(Global_39.f_5803)))
			{
				fVar0 = func_549(fVar0);
			}
		}
	}
	return fVar0;
}

void func_503(var uParam0, var uParam1, int iParam2)
{
	if (!ENTITY::_0x88AD6CC10D8D35B2(uParam1->f_123[iParam2]) || !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uParam1->f_123[iParam2], false))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam1->f_123[iParam2], true, true);
		return;
	}
	func_43(uParam0, uParam1, iParam2);
	func_145(uParam1, iParam2, 5);
	uParam0->f_156 = 0;
	uParam0->f_163 = 0;
	func_250(uParam1, iParam2);
	DECORATOR::DECOR_SET_BOOL(uParam1->f_123[iParam2], "Fish_Prevent_Tasking", true);
}

bool func_504(var uParam0, var uParam1)
{
	if ((func_550(uParam0, uParam1) && func_51(&(uParam0->f_160))) && func_52(&(uParam0->f_160)) > uParam0->f_166)
	{
		return true;
	}
	if (func_322(1))
	{
		return true;
	}
	return false;
}

bool func_505(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = func_77(uParam0);
	if ((func_126(iVar0) && func_61(uParam1->f_247[iVar0])) && uParam0->f_156 < uParam1->f_800[uParam1->f_247[iVar0] /*10*/])
	{
		if (!func_51(&(uParam0->f_160)) || func_244(&(uParam0->f_160)) >= uParam0->f_164)
		{
			return true;
		}
	}
	return false;
}

int func_506(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = func_77(uParam0);
	if ((func_126(iVar0) && func_61(uParam1->f_247[iVar0])) && uParam1->f_800[uParam1->f_247[iVar0] /*10*/].f_1[uParam0->f_156] == 1)
	{
		return 1;
	}
	return 0;
}

int func_507(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_77(uParam0);
	if (!func_126(iVar0) || uParam0->f_163 == 0)
	{
		return uParam1->f_955;
	}
	iVar1 = uParam1->f_956;
	switch (uParam1->f_309[iVar0])
	{
		case 0:
			iVar1 = uParam1->f_956;
			break;
		case 1:
			iVar1 = uParam1->f_957;
			break;
		case 2:
			iVar1 = uParam1->f_958;
			break;
		case 3:
			iVar1 = uParam1->f_959;
			break;
		case 4:
			iVar1 = uParam1->f_960;
			break;
	}
	if (uParam0->f_54 == 1)
	{
		iVar1 = (iVar1 + uParam1->f_961);
	}
	return iVar1;
}

int func_508(var uParam0, var uParam1)
{
	int iVar0;
	float fVar1;

	if (uParam0->f_163 == 0)
	{
		return 1;
	}
	iVar0 = func_77(uParam0);
	fVar1 = (func_551(uParam1, iVar0) * 100f);
	return (150 + BUILTIN::ROUND(fVar1));
}

int func_509(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = uParam0->f_166;
	if (uParam0->f_163 == 0)
	{
		iVar0 = (iVar0 + MISC::GET_RANDOM_INT_IN_RANGE(uParam1->f_951, uParam1->f_952));
	}
	else
	{
		iVar0 = (iVar0 + MISC::GET_RANDOM_INT_IN_RANGE(uParam1->f_953, uParam1->f_954));
	}
	return iVar0;
}

void func_510(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	int iVar3;

	iVar0 = func_77(uParam1);
	if (!func_126(iVar0))
	{
		return;
	}
	if (uParam1->f_163 == 1)
	{
		sVar1 = "LARGE_BITE";
		sVar2 = "LARGE_BITE_ROD";
	}
	else
	{
		sVar1 = "SMALL_BITE";
		sVar2 = "SMALL_BITE_ROD";
	}
	iVar3 = func_552(uParam1);
	if (iVar3 > -1)
	{
		AUDIO::_0xF1C5310FEAA36B48(uParam1->f_57[iVar3], sVar1, func_138(), *uParam0, 0, 0);
		AUDIO::_0x503703EC1781B7D6(uParam1->f_57[iVar3], "FishSize", uParam2->f_278[iVar0]);
	}
	iVar3 = func_553(uParam1);
	if (iVar3 > -1)
	{
		AUDIO::_0xF1C5310FEAA36B48(uParam1->f_62[iVar3], sVar2, PLAYER::PLAYER_PED_ID(), *uParam0, 0, 0);
		AUDIO::_0x503703EC1781B7D6(uParam1->f_62[iVar3], "FishSize", uParam2->f_278[iVar0]);
	}
}

void func_511(var uParam0, var uParam1)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	float fVar10;
	vector3 vVar11;

	if ((uParam1->f_54 == 0 && ENTITY::DOES_ENTITY_EXIST(func_138())) && uParam1->f_12 > -0.05f)
	{
		iVar0 = func_77(uParam1);
		if (func_126(iVar0))
		{
			vVar1 = { func_139() };
			vVar4 = { vVar1 };
			vVar4.f_2 = (vVar4.z - 1f);
			vVar7 = { func_419(vVar4 - vVar1) };
			if (uParam1->f_163 == 1)
			{
				fVar10 = uParam0->f_50;
			}
			else
			{
				fVar10 = uParam0->f_51;
			}
			vVar11 = { vVar7 * Vector(fVar10, fVar10, fVar10) };
			ENTITY::APPLY_FORCE_TO_ENTITY(func_138(), 3, vVar11, 0f, 0f, 0f, 0, false, true, true, false, true);
		}
	}
}

bool func_512(int iParam0, bool bParam1)
{
	if (bParam1 && !func_234(iParam0))
	{
		return true;
	}
	return func_493(iParam0, 4);
}

void func_513(int iParam0)
{
	if (func_218(iParam0))
	{
		return;
	}
	if (func_554(iParam0, 1, 0, -142743235))
	{
	}
}

bool func_514(var uParam0)
{
	int iVar0;

	if (func_182(16))
	{
		return false;
	}
	if (func_441(Global_39.f_5803) || func_442(Global_39.f_5803))
	{
		return true;
	}
	if (func_219(Global_39.f_5803))
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
		if (iVar0 <= uParam0->f_175)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return false;
}

bool func_515(int iParam0)
{
	if ((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 7) || iParam0 == 8) || iParam0 == 12) || iParam0 == 13) || iParam0 == 14)
	{
		return true;
	}
	return false;
}

void func_516(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	if (uParam1->f_173 > 0)
	{
		if (!func_51(&(uParam1->f_209)) || func_244(&(uParam1->f_209)) > uParam0->f_55)
		{
			func_93(&(uParam1->f_209));
			if (func_81(uParam2, iParam3))
			{
				iVar0++;
			}
			else
			{
				iVar0 += 2;
			}
			uParam1->f_173 = (uParam1->f_173 - iVar0);
		}
	}
}

bool func_517()
{
	return Global_1903071.f_5.f_2 > (IntToFloat(func_555()) - 0.1f);
}

void func_518(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = uParam0->f_54;
	if (func_270(uParam1) && (!func_51(&(uParam1->f_206)) || func_244(&(uParam1->f_206)) > iVar0))
	{
		func_93(&(uParam1->f_206));
		iVar1 = func_77(uParam1);
		if (func_126(iVar1))
		{
			iVar2 = 1;
			if (func_517())
			{
				func_280(uParam0, 40, 1, -2, 1);
			}
			if (func_131())
			{
				if (func_515(uParam2->f_247[iVar1]))
				{
					iVar2 += 2;
				}
				else
				{
					iVar2++;
				}
			}
			if (uParam1->f_176 == 0 && uParam1->f_173 > 75)
			{
				uParam1->f_176 = 1;
				uParam1->f_175++;
			}
			iVar2 = (iVar2 + uParam1->f_175);
			uParam1->f_173 = (uParam1->f_173 + iVar2);
		}
	}
}

struct<2> func_519(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

void func_520(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;
	var uVar17;
	struct<15> Var21;

	iVar0 = func_77(uParam0);
	if (!func_126(iVar0))
	{
		return;
	}
	iVar1 = func_437(uParam0);
	iVar2 = func_438(uParam1->f_247[iVar0], iVar1);
	if (uParam1->f_309[iVar0] == 4)
	{
		return;
	}
	else if (func_439(iVar2))
	{
		return;
	}
	if (!func_208(0) || func_209())
	{
		iVar3 = func_556(uParam1->f_247[iVar0]);
		iVar4 = func_557(iVar1);
		Var5.f_1 = 10;
		func_558(&Var5, iVar4);
		if (func_559(iVar3, &Var5, &uVar17, 0, 0))
		{
			Var21.f_3.f_1 = 10;
			Var21.f_1 = uParam1->f_278[iVar0];
			func_560(&uVar17, Var21);
		}
		return;
	}
	func_561(iVar2, uParam1->f_278[iVar0]);
}

void func_521(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (!func_562(iParam0))
	{
		return;
	}
	if (func_563(iParam0))
	{
		return;
	}
	if (!func_564(iParam0))
	{
		return;
	}
	iVar0 = iParam0;
	iVar1 = func_565(iParam1);
	if (iVar1 == 0 || iParam1 == -1)
	{
		return;
	}
	iVar2 = (Global_1139381.f_5693[iVar0] + iVar1);
	if (Global_1139381.f_5693[iVar0] <= (Global_1901947.f_801.f_1 + Global_1901947.f_801.f_3))
	{
		iVar2 = (Global_1901947.f_801.f_1 + Global_1901947.f_801.f_3);
	}
	if (Global_1139381.f_5693[iVar0] >= (Global_1901947.f_801.f_2 + Global_1901947.f_801.f_11))
	{
		iVar2 = (Global_1901947.f_801.f_2 + Global_1901947.f_801.f_11);
	}
	if (func_566(iParam0, iVar2))
	{
		iVar3 = func_567(iVar2);
		iVar4 = func_568(iVar3);
		iVar2 = iVar4;
	}
	if (func_569(iParam0))
	{
		return;
	}
	func_570(iParam0, iVar2);
	Global_1139381.f_5693[iVar0] = iVar2;
}

int func_522(int iParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_350(iParam0, 0, 0) };
	return func_571(iParam0, &Var0, 0, bParam1);
}

int func_523(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = func_77(uParam0);
	if (!func_126(iVar0))
	{
		return 15;
	}
	return uParam1->f_247[iVar0];
}

int func_524(var uParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_437(uParam0);
	if (iVar0 == 1 || uParam1->f_340[iParam3] == 1)
	{
		return 12;
	}
	else if (func_515(iParam2))
	{
		return 13;
	}
	return 12;
}

int func_525(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_572())
	{
		return 0;
	}
	if (!NETWORK::_0xDD73C9838CE7181D())
	{
		return 0;
	}
	if (func_573())
	{
		return 0;
	}
	iVar0 = func_574(iParam0);
	iVar1 = func_575(iVar0, 2);
	if (iVar1 >= 5)
	{
		return 0;
	}
	if (!func_211(func_576(iParam0), 0, 255, 0, 0))
	{
		return 0;
	}
	return 1;
}

bool func_526()
{
	if (Global_1048576)
	{
		return true;
	}
	if (Global_1572887.f_4)
	{
		return true;
	}
	if (Global_2883584)
	{
		return true;
	}
	if (Global_1048577)
	{
		return true;
	}
	if (!func_528(Global_1051213) && Global_1572887.f_7 & 1 != 0)
	{
		return true;
	}
	return false;
}

struct<2> func_527()
{
	return Global_1051213;
}

bool func_528(struct<2> Param0)
{
	if (!func_577(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_578(Param0))
	{
		return false;
	}
	return true;
}

struct<2> func_529()
{
	if (Global_1196205.f_129 <= 0)
	{
		return func_530(0);
	}
	if (Global_1196205.f_130 < 0 || Global_1196205.f_131 == 0)
	{
		return func_530(0);
	}
	return Global_1196205[Global_1196205.f_130 /*4*/].f_1;
}

struct<2> func_530(int iParam0)
{
	return Global_1900736.f_1[iParam0 /*2*/];
}

int func_531(var uParam0, var uParam1)
{
	return uParam0;
}

bool func_532(vector3 vParam0, int iParam3)
{
	vector3 vVar0;
	struct<2> Var3;
	var uVar6;

	func_579(iParam3, &vVar0, &Var3, &uVar6);
	if (func_580(vParam0, vVar0, Var3, Var3.f_1, uVar6))
	{
		return true;
	}
	return false;
}

bool func_533(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_534(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_39.f_3643[iVar1], iVar2);
}

bool func_535(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

struct<4> func_536()
{
	struct<4> Var0;

	return Var0;
}

bool func_537()
{
	return (func_581(joaat("UPGRADE_OFFHAND_HOLSTER"), 0, 0, 0) > 0 && func_582(func_351(joaat("WARDROBE"), func_467(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

int func_538(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_345(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_362(iParam0, joaat("DEFAULT")) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_351(iParam0, Param1, iParam5, bParam6) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_344(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_344(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

bool func_539(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_344(0);
	*uParam1 = { func_351(iParam0, func_468(0), iParam3, 0) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return false;
	}
	if (!INVENTORY::_0x025A1B1FB03FBF61(iVar0, uParam1, uParam2, 22, 1))
	{
		return false;
	}
	return true;
}

bool func_540(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 487172188)
	{
		if (ITEMDATABASE::_0xAA29A5F13B2C20B2(iParam1, joaat("DEFAULT")) == -1925887917)
		{
			return false;
		}
	}
	return ITEMDATABASE::_ITEM_DATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(iParam0, iParam1, iParam2);
}

bool func_541(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_344(bParam2);
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return false;
	}
	return true;
}

int func_542(int iParam0)
{
	return iParam0;
}

int func_543(int iParam0, int iParam1)
{
	if (!func_583(iParam0, 2))
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_0x99C6EA66DFE73757(iParam0, iParam1, 1120943070))
	{
		return 1;
	}
	return 0;
}

int func_544(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = func_338(func_337());
	if (func_584(iParam0, 1))
	{
		if (iVar0 >= 6 && iVar0 < 12)
		{
			return 1;
		}
	}
	if (func_584(iParam0, 2))
	{
		if (iVar0 >= 12 && iVar0 < 18)
		{
			return 1;
		}
	}
	if (func_584(iParam0, 4096))
	{
		if (iVar0 >= 11 && iVar0 < 14)
		{
			return 1;
		}
	}
	if (func_584(iParam0, 4))
	{
		if (iVar0 >= 18 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (func_584(iParam0, 8))
	{
		if (iVar0 >= 0 && iVar0 < 6)
		{
			return 1;
		}
	}
	if (func_584(iParam0, 16))
	{
		if (iVar0 >= 20 || iVar0 < 7)
		{
			return 1;
		}
	}
	if (func_584(iParam0, 1024))
	{
		if (iVar0 >= 5 && iVar0 < 12)
		{
			return 1;
		}
	}
	if (func_584(iParam0, 32))
	{
		if (iVar0 >= 5 && iVar0 < 22)
		{
			return 1;
		}
	}
	if (func_584(iParam0, 64))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return 1;
		}
	}
	if (func_584(iParam0, 128))
	{
		if (iVar0 >= 21 || iVar0 < 5)
		{
			return 1;
		}
	}
	if (func_584(iParam0, 256))
	{
		if (iVar0 >= 22 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (func_584(iParam0, 512))
	{
		if (iVar0 >= 0 && iVar0 < 5)
		{
			return 1;
		}
	}
	if (func_584(iParam0, 8192))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return 1;
		}
	}
	if (func_584(iParam0, 2048))
	{
		if (iVar0 >= 1 && iVar0 < 3)
		{
			return 1;
		}
	}
	if (func_584(iParam0, 16384))
	{
		if (iVar0 >= 6 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (func_584(iParam0, 32768))
	{
		if (iVar0 >= 21 || iVar0 < 6)
		{
			return 1;
		}
	}
	if (func_584(iParam0, 65536))
	{
		if (iVar0 >= 18 && iVar0 < 19)
		{
			return 1;
		}
	}
	return 0;
}

bool func_545()
{
	vector3 vVar0;

	if (Global_1903071.f_5.f_2 <= 3f)
	{
		return true;
	}
	vVar0 = { func_142() };
	if (!func_38(vVar0) && func_274(Global_35, vVar0) < 3f)
	{
		return true;
	}
	return false;
}

bool func_546(var uParam0)
{
	return (uParam0->f_14 != -99999f && uParam0->f_14 < 0.03f);
}

float func_547(var uParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;

	fVar0 = 0f;
	fVar1 = func_502(uParam0, iParam1, Global_39.f_5803);
	if (fVar1 > 0f)
	{
		fVar0 = (5f * fVar1);
	}
	if (fVar0 > 0f)
	{
		iVar2 = MISC::_GET_PREV_WEATHER_TYPE_HASH_NAME();
		fVar0 = (fVar0 * func_585(iVar2));
	}
	return fVar0;
}

int func_548(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("AT_FBLUEGIL");
		case 1:
			return joaat("AT_FBULLHEADCATFISH");
		case 2:
			return joaat("AT_FCHAINPICKEREL");
		case 3:
			return joaat("AT_FCHANNELCATFISH");
		case 4:
			return joaat("AT_FLAKESTURGEON");
		case 5:
			return joaat("AT_FLARGEMOUTHBASS");
		case 6:
			return joaat("AT_FLONGNOSEGAR");
		case 7:
			return joaat("AT_FMUSKIE");
		case 8:
			return joaat("AT_FNORTHERNPIKE");
		case 9:
			return joaat("AT_FPERCH");
		case 10:
			return joaat("AT_FREDFINPICKEREL");
		case 11:
			return joaat("AT_FROCKBASS");
		case 12:
			return joaat("AT_FSMALLMOUTHBASS");
		case 13:
			return joaat("AT_FSALMONSOCKEYE");
		case 14:
			return joaat("AT_FRAINBOWTROUT");
		default:
			break;
	}
	return 0;
}

float func_549(float fParam0)
{
	if (fParam0 == 4f)
	{
		fParam0 = 5f;
	}
	else if (fParam0 == 3f)
	{
		fParam0 = 4f;
	}
	else if (fParam0 == 2f)
	{
		fParam0 = 3f;
	}
	else if (fParam0 == 1f)
	{
		fParam0 = 2f;
	}
	else if (fParam0 == 0.5f)
	{
		fParam0 = 1f;
	}
	return fParam0;
}

bool func_550(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = func_77(uParam0);
	if ((func_126(iVar0) && func_61(uParam1->f_247[iVar0])) && uParam0->f_156 >= uParam1->f_800[uParam1->f_247[iVar0] /*10*/])
	{
		return true;
	}
	return false;
}

float func_551(var uParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;

	fVar0 = func_375(uParam0->f_247[iParam1], 0);
	fVar1 = func_376(uParam0->f_247[iParam1], 0);
	fVar2 = (fVar1 - fVar0);
	fVar3 = (uParam0->f_278[iParam1] - fVar0);
	fVar4 = func_183((fVar3 / fVar2), 0f, 1f);
	return fVar4;
}

int func_552(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (AUDIO::_0x84848E1C0FC67DBB(uParam0->f_57[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_553(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (AUDIO::_0x84848E1C0FC67DBB(uParam0->f_62[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_554(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;
	struct<5> Var7;

	if (!func_345(iParam0, 0))
	{
		return false;
	}
	if (iParam3 == -142743235)
	{
		if (func_586(iParam0))
		{
			iParam3 = 562618531;
		}
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_360(iParam0, 1);
	if (iVar3 != 0)
	{
		iVar4 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iVar3);
		iVar4 = (iVar4 - iParam1);
		if (iVar4 < 0)
		{
			return false;
		}
		WEAPON::_REMOVE_AMMO_FROM_PED_BY_TYPE(Global_34, iVar3, iParam1, iParam3);
		if (!bParam2)
		{
			func_587(iParam0, -iParam1, bVar0, bVar1, bVar2, 0, 0);
		}
		return false;
	}
	if (!func_210(iParam0, 1))
	{
		return false;
	}
	Var5 = { func_588(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var5))
	{
		if ((func_217(iParam0, 0, 0, 0) - iParam1) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var5, iParam1);
		}
		else if ((func_217(iParam0, 0, 0, 0) - iParam1) < 0)
		{
			func_554(iParam0, func_217(iParam0, 0, 0, 0), bParam2, iParam3);
			return false;
		}
	}
	if (func_346(iParam0) == joaat("WEAPON"))
	{
		if (!func_589(iParam0, iParam1, 0, iParam3))
		{
			return false;
		}
	}
	else if (!func_590(iParam0, iParam1, iParam3, bParam2, 0))
	{
		return false;
	}
	else
	{
		Var7 = { func_350(iParam0, 0, 0) };
		if (func_208(0) && Var7.f_4 == 1084182731)
		{
			func_591(1, 0, 0);
		}
	}
	if (iParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
	{
		Global_1940144.f_21 = 0;
	}
	if (!func_208(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != joaat("UPGRADE_FSH_BAIT_NONE"))
	{
		func_587(iParam0, -iParam1, bVar0, bVar1, bVar2, 0, 0);
	}
	return true;
}

int func_555()
{
	return BUILTIN::ROUND(Global_1903071.f_5.f_1);
}

int func_556(int iParam0)
{
	var uVar0;

	switch (iParam0)
	{
		case 0:
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;
		case 10:
			break;
		case 11:
			break;
		case 12:
			break;
		case 13:
			break;
		case 14:
			break;
		default:
			return 0;
	}
	return RDR_LOCAL_LOAD_S;
}

int func_557(int iParam0)
{
	if (iParam0 == 1)
	{
		return joaat("FISHING_RESULT_RUINED");
	}
	return joaat("FISHING_RESULT_NORMAL");
}

void func_558(var uParam0, int iParam1)
{
	bool bVar0;
	int iVar1;

	if (iParam1 == 0)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (uParam0->f_1[iVar1] == iParam1)
		{
			return;
		}
		switch (iParam1)
		{
			case joaat("LOOTER_PED_IS_FEMALE"):
			case joaat("LOOTER_PED_IS_MALE"):
				if (uParam0->f_1[iVar1] == joaat("LOOTER_PED_IS_MALE") || uParam0->f_1[iVar1] == joaat("LOOTER_PED_IS_FEMALE"))
				{
					bVar0 = true;
				}
				break;
			case joaat("LOOT_TYPE_NORMAL"):
			case joaat("LOOT_TYPE_SKINNING"):
				if (uParam0->f_1[iVar1] == joaat("LOOT_TYPE_NORMAL") || uParam0->f_1[iVar1] == joaat("LOOT_TYPE_SKINNING"))
				{
					bVar0 = true;
				}
				break;
			case joaat("FISHING_RESULT_RUINED"):
			case joaat("FISHING_RESULT_NORMAL"):
			case joaat("FISHING_RESULT_LEGENDARY"):
				if ((uParam0->f_1[iVar1] == joaat("FISHING_RESULT_NORMAL") || uParam0->f_1[iVar1] == joaat("FISHING_RESULT_RUINED")) || uParam0->f_1[iVar1] == joaat("FISHING_RESULT_LEGENDARY"))
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			uParam0->f_1[iVar1] = iParam1;
			return;
		}
		iVar1++;
	}
	if (*uParam0 >= 10)
	{
		return;
	}
	uParam0->f_1[*uParam0] = iParam1;
	*uParam0++;
}

bool func_559(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	var uVar0;
	struct<15> Var1;

	if (iParam0 == 0)
	{
		return false;
	}
	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
	{
		return false;
	}
	func_592(uParam1);
	if (!NETWORK::_0x77B299E8799B1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return false;
	}
	Var1.f_3.f_1 = 10;
	Var1 = iParam3;
	Var1.f_3 = { *uParam1 };
	Var1.f_2 = iParam4;
	func_593(uParam2, iParam0, Var1);
	return true;
}

void func_560(var uParam0, struct<15> Param1)
{
	int iVar0;

	if (!func_535(uParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1293346.f_2538)
	{
		if (func_594(&(Global_1293346.f_2538.f_1[iVar0 /*22*/]), uParam0))
		{
			if (Global_1293346.f_2538.f_1[iVar0 /*22*/].f_6 == 1)
			{
				Global_1293346.f_2538.f_1[iVar0 /*22*/].f_7 = { Param1 };
			}
			return;
		}
		iVar0++;
	}
}

void func_561(int iParam0, float fParam1)
{
	bool bVar0;

	bVar0 = func_595(iParam0);
	if (func_208(0) && !func_209())
	{
		if (func_596(iParam0, 1, bVar0, 0, 0, 752097756, fParam1, 0, 0, 0))
		{
		}
	}
}

bool func_562(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 1);
}

bool func_563(int iParam0)
{
	int iVar0;

	if (!func_562(iParam0))
	{
		return false;
	}
	iVar0 = MISC::GET_FRAME_COUNT();
	if (Global_1139381.f_5693.f_10[iParam0] == iVar0 || Global_1139381.f_5693.f_10[iParam0] == (iVar0 - 1))
	{
		return true;
	}
	return false;
}

bool func_564(int iParam0)
{
	int iVar0;

	if (!func_562(iParam0))
	{
		return false;
	}
	iVar0 = iParam0;
	if (!func_122(Global_1139381.f_5693.f_6[iVar0], 4))
	{
		return true;
	}
	if (Global_1139381.f_5693.f_4[iVar0] != 0)
	{
		return true;
	}
	switch (iParam0)
	{
		case 0:
			if (func_210(joaat("KIT_ROLE_NATURALIST_SAMPLE_KIT"), 1))
			{
				return true;
			}
			break;
		default:
			break;
	}
	return false;
}

int func_565(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 0;
		case 6:
			return Global_1901947.f_801.f_12;
		case 7:
			return Global_1901947.f_801.f_13;
		case 8:
			return Global_1901947.f_801.f_14;
		case 9:
			return Global_1901947.f_801.f_15;
		case 10:
			return Global_1901947.f_801.f_16;
		case 11:
			return Global_1901947.f_801.f_17;
		case 12:
			return Global_1901947.f_801.f_18;
		case 0:
			return Global_1901947.f_801.f_19;
		case 1:
			return Global_1901947.f_801.f_20;
		case 2:
			return Global_1901947.f_801.f_21;
		case 3:
			return Global_1901947.f_801.f_22;
		case 4:
			return Global_1901947.f_801.f_23;
		case 5:
			return Global_1901947.f_801.f_24;
		default:
			break;
	}
	return 0;
}

bool func_566(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (!func_562(iParam0))
	{
		return false;
	}
	iVar0 = iParam0;
	if (!func_122(Global_1139381.f_5693.f_6[iVar0], 2))
	{
		return false;
	}
	iVar1 = func_597(iParam0);
	iVar2 = iVar1;
	iVar3 = func_567(iParam1);
	iVar4 = iVar3;
	if (iVar4 < iVar2)
	{
		return true;
	}
	return false;
}

int func_567(int iParam0)
{
	if (iParam0 <= Global_1901947.f_801.f_3)
	{
		return 0;
	}
	if (iParam0 <= Global_1901947.f_801.f_4)
	{
		if (Global_1901947.f_801.f_4 > 0)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam0 <= Global_1901947.f_801.f_5)
	{
		if (Global_1901947.f_801.f_5 > 0)
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	if (iParam0 <= Global_1901947.f_801.f_6)
	{
		if (Global_1901947.f_801.f_6 > 0)
		{
			return 2;
		}
		else
		{
			return 3;
		}
	}
	if (iParam0 <= Global_1901947.f_801.f_7)
	{
		if (Global_1901947.f_801.f_7 > 0)
		{
			return 3;
		}
		else
		{
			return 4;
		}
	}
	if (iParam0 <= Global_1901947.f_801.f_8)
	{
		if (Global_1901947.f_801.f_8 > 0)
		{
			return 4;
		}
		else
		{
			return 5;
		}
	}
	if (iParam0 <= Global_1901947.f_801.f_9)
	{
		if (Global_1901947.f_801.f_9 > 0)
		{
			return 5;
		}
		else
		{
			return 6;
		}
	}
	if (iParam0 <= Global_1901947.f_801.f_10)
	{
		if (Global_1901947.f_801.f_10 > 0)
		{
			return 6;
		}
		else
		{
			return 7;
		}
	}
	if (iParam0 <= Global_1901947.f_801.f_11)
	{
		if (Global_1901947.f_801.f_11 > 0)
		{
			return 7;
		}
		else
		{
			return 8;
		}
	}
	return 8;
}

int func_568(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1901947.f_801.f_3;
		case 1:
			return Global_1901947.f_801.f_4;
		case 2:
			return Global_1901947.f_801.f_5;
		case 3:
			return Global_1901947.f_801.f_6;
		case 4:
			return Global_1901947.f_801.f_7;
		case 5:
			return Global_1901947.f_801.f_8;
		case 6:
			return Global_1901947.f_801.f_9;
		case 7:
			return Global_1901947.f_801.f_10;
		case 8:
			return Global_1901947.f_801.f_11;
		default:
			break;
	}
	return 0;
}

bool func_569(int iParam0)
{
	int iVar0;

	if (!func_562(iParam0))
	{
		return false;
	}
	iVar0 = iParam0;
	if (!func_122(Global_1139381.f_5693.f_6[iVar0], 1))
	{
		return false;
	}
	if (func_122(Global_1139381.f_5693.f_8[iVar0], 1))
	{
		return true;
	}
	return false;
}

void func_570(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_562(iParam0))
	{
		return;
	}
	iVar0 = iParam0;
	if (!func_122(Global_1139381.f_5693.f_6[iVar0], 1))
	{
		return;
	}
	if (func_569(iParam0))
	{
		return;
	}
	iVar1 = func_567(iParam1);
	iVar2 = iVar1;
	if (Global_1139381.f_5693.f_2[iVar0] > iVar2)
	{
		if ((func_122(Global_1139381.f_5693.f_6[iVar0], 2) && (iParam1 - 1) <= func_568(iVar1)) && iParam1 <= 0)
		{
			if (!func_122(Global_1139381.f_5693.f_8[iVar0], 1))
			{
				func_123(&(Global_1139381.f_5693.f_8[iVar0]), 1);
				return;
			}
			return;
		}
		else if (iParam1 > 0 && (iParam1 - 1) <= func_568(iVar1))
		{
			if (!func_122(Global_1139381.f_5693.f_8[iVar0], 1))
			{
				func_123(&(Global_1139381.f_5693.f_8[iVar0]), 1);
				return;
			}
		}
	}
}

int func_571(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_345(iParam0, 0) && !func_583(func_542(iParam0), 2))
	{
		return 0;
	}
	if (func_346(iParam0) == joaat("FEE"))
	{
		return -1;
	}
	if (!bParam2 && func_362(iParam0, joaat("DEFAULT")) == 0)
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return INVENTORY::_0xE80E50BEE276A54A(iParam0, uParam1->f_4);
	}
	return INVENTORY::_0xADDD1E7C0ECF7D95(func_344(bParam3), iParam0);
}

bool func_572()
{
	return (func_598(0) && func_598(1));
}

bool func_573()
{
	return (Global_1952637.f_1 != joaat("MPC_PLAYER_TYPE_MP_FEMALE") && Global_1952637.f_1 != joaat("MPC_PLAYER_TYPE_MP_MALE"));
}

int func_574(var uParam0)
{
	int iVar0;

	iVar0 = uParam0;
	if (iVar0 >= 1 && iVar0 <= 23)
	{
		return 0;
	}
	else if (iVar0 >= 24 && iVar0 <= 34)
	{
		return 1;
	}
	else if (iVar0 >= 35 && iVar0 <= 55)
	{
		return 2;
	}
	return 0;
}

int func_575(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_599(1);
	}
	switch (iParam1)
	{
		case 0:
			return Global_1956200.f_1431.f_50[iParam0];
		case 1:
			return Global_1956200.f_1565.f_2.f_50[iParam0];
		default:
			break;
	}
	return 1;
}

int func_576(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -84152915;
		case 2:
			return -1789085602;
		case 3:
			return -593725333;
		case 4:
			return 1619211297;
		case 5:
			return -1448204146;
		case 6:
			return -1918007793;
		case 7:
			return -2108757294;
		case 8:
			return -787840584;
		case 9:
			return -7905424;
		case 10:
			return -376205482;
		case 11:
			return -1753179328;
		case 12:
			return -1876855008;
		case 13:
			return 550082662;
		case 14:
			return -1964113;
		case 15:
			return 196458601;
		case 16:
			return 22941087;
		case 17:
			return 2017633379;
		case 24:
			return 253945992;
		case 25:
			return -1689046118;
		case 26:
			return -483357612;
		case 27:
			return -430722038;
		case 28:
			return 64082831;
		case 35:
			return -1498321291;
		case 36:
			return 1654907663;
		case 37:
			return 1059449568;
		case 38:
			return 2073287291;
		case 39:
			return 1110270789;
		case 40:
			return 417802449;
		case 41:
			return 2136672177;
		case 42:
			return -1930911028;
		case 43:
			return -739528491;
		case 55:
			return 2075984360;
		default:
			break;
	}
	return 0;
}

bool func_577(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
			return true;
		default:
			break;
	}
	return false;
}

int func_578(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return Global_1071686.f_636.f_601;
		case 3:
			return Global_1071686.f_636.f_2103;
		case 4:
			return Global_1071686.f_636.f_12605;
		case 5:
			return Global_1071686.f_636.f_12907;
		case 6:
			return Global_1071686.f_636.f_15909;
		case 7:
			return Global_1071686.f_636.f_16511;
		case 8:
			return Global_1071686.f_636.f_18913;
		default:
			break;
	}
	return -1;
}

void func_579(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -1616.769f, 1260.714f, 205.33f };
			*uParam2 = { 150f, 150f, 184f };
			*uParam3 = 0f;
			break;
		case 1:
			*uParam1 = { -5837.918f, -3738.832f, -20.6f };
			*uParam2 = { 40f, 35f, 70f };
			*uParam3 = 45f;
			break;
		case 2:
			*uParam1 = { -4160.689f, -2836.915f, -13.674f };
			*uParam2 = { 43f, 197f, 70f };
			*uParam3 = 38f;
			break;
		case 3:
			*uParam1 = { -4359.861f, -3083.375f, -13.674f };
			*uParam2 = { 30f, 30f, 70f };
			*uParam3 = 0f;
			break;
		case 4:
			*uParam1 = { -4446.777f, -2689.265f, -13.674f };
			*uParam2 = { 30f, 30f, 70f };
			*uParam3 = 0f;
			break;
		case 5:
			*uParam1 = { -4415.84f, -2199.774f, 22.356f };
			*uParam2 = { 13f, 21f, 47f };
			*uParam3 = 34f;
			break;
		case 6:
			*uParam1 = { -5554.764f, -2395.945f, 7.172f };
			*uParam2 = { 21f, 21f, 47f };
			*uParam3 = 0f;
			break;
		case 7:
			*uParam1 = { -3447.267f, -2257.723f, 7.172f };
			*uParam2 = { 40f, 23f, 47f };
			*uParam3 = 0f;
			break;
		case 8:
			*uParam1 = { -1425.852f, -2676.848f, 73.224f };
			*uParam2 = { 40f, 25f, 47f };
			*uParam3 = 26f;
			break;
		case 9:
			*uParam1 = { -3829.438f, -3009.26f, -13.674f };
			*uParam2 = { 39f, 54f, 70f };
			*uParam3 = -46f;
			break;
		case 10:
			*uParam1 = { -4696.308f, -3302.809f, -13.674f };
			*uParam2 = { 104f, 57f, 70f };
			*uParam3 = 0f;
			break;
		case 11:
			*uParam1 = { -5064.707f, -3139.862f, -13.674f };
			*uParam2 = { 23f, 26f, 70f };
			*uParam3 = 43f;
			break;
		case 12:
			*uParam1 = { -1631.875f, -2856.089f, -1.645f };
			*uParam2 = { 149f, 65f, 154f };
			*uParam3 = 39f;
			break;
		case 13:
			*uParam1 = { -347.889f, -131.72f, -1.645f };
			*uParam2 = { 52f, 40f, 154f };
			*uParam3 = 0f;
			break;
		case 14:
			*uParam1 = { -2126.5f, 88.317f, 139.179f };
			*uParam2 = { 334f, 171f, 277f };
			*uParam3 = -45f;
			break;
		case 15:
			*uParam1 = { 1574.061f, 1121.954f, 201.6f };
			*uParam2 = { 147f, 194f, 201f };
			*uParam3 = 0f;
			break;
		case 16:
			*uParam1 = { -2741.641f, -2375.761f, 31.492f };
			*uParam2 = { 86f, 61f, 50f };
			*uParam3 = 11f;
			break;
		case 17:
			*uParam1 = { 1773.323f, -5976.334f, 71.662f };
			*uParam2 = { 34f, 34f, 100f };
			*uParam3 = -124f;
			break;
		case 18:
			*uParam1 = { -2022.258f, -3039.913f, 25f };
			*uParam2 = { 25f, 25f, 45f };
			*uParam3 = 0f;
			break;
		case 19:
			*uParam1 = { 1394.172f, -647.735f, 72.455f };
			*uParam2 = { 19f, 18f, 100f };
			*uParam3 = 40f;
			break;
		case 20:
			*uParam1 = { -242.336f, 1624.373f, 212.894f };
			*uParam2 = { 98f, 52f, 120f };
			*uParam3 = 51f;
			break;
		case 21:
			*uParam1 = { -3543.512f, -3032.038f, -13.674f };
			*uParam2 = { 40f, 40f, 70f };
			*uParam3 = 0f;
			break;
		case 22:
			*uParam1 = { -4348.655f, -2427.582f, -13.674f };
			*uParam2 = { 40f, 40f, 70f };
			*uParam3 = 0f;
			break;
		case 23:
			*uParam1 = { -391.586f, 922.337f, 137.604f };
			*uParam2 = { 31f, 30f, 40f };
			*uParam3 = 0f;
			break;
		case 24:
			*uParam1 = { -2656.999f, 153.667f, 189.043f };
			*uParam2 = { 177f, 126f, 102f };
			*uParam3 = 52f;
			break;
		case 25:
			*uParam1 = { 156.109f, 425.799f, 120f };
			*uParam2 = { 249f, 112f, 120f };
			*uParam3 = -36f;
			break;
		case 26:
			*uParam1 = { -5868.5f, -2752.441f, -13.674f };
			*uParam2 = { 40f, 40f, 70f };
			*uParam3 = 0f;
			break;
		case 27:
			*uParam1 = { 898.505f, -335.252f, 48.403f };
			*uParam2 = { 56f, 152f, 70f };
			*uParam3 = -36f;
			break;
		case 28:
			*uParam1 = { -889.947f, -171.356f, 90.537f };
			*uParam2 = { 180f, 95f, 100f };
			*uParam3 = 29f;
			break;
		case 29:
			*uParam1 = { 571.454f, 1968.615f, 122.93f };
			*uParam2 = { 32f, 49f, 140f };
			*uParam3 = 0f;
			break;
		case 30:
			*uParam1 = { -2769.681f, -3210.99f, 25f };
			*uParam2 = { 25f, 25f, 45f };
			*uParam3 = 0f;
			break;
		case 31:
			*uParam1 = { -5409.034f, -3657.266f, -14.496f };
			*uParam2 = { 36f, 30f, 30f };
			*uParam3 = -24f;
			break;
		case 32:
			*uParam1 = { 2453.293f, 290.68f, 69.615f };
			*uParam2 = { 35f, 42f, 19f };
			*uParam3 = -4f;
			break;
		case 33:
			*uParam1 = { -643.042f, 278.359f, 95.5f };
			*uParam2 = { 70f, 67f, 65f };
			*uParam3 = -109f;
			break;
		case 34:
			*uParam1 = { -118.339f, -24.853f, 96.907f };
			*uParam2 = { 84f, 69f, 37f };
			*uParam3 = 0f;
			break;
		case 35:
			*uParam1 = { -2863.456f, -2723.259f, 93.195f };
			*uParam2 = { 196f, 157f, 85f };
			*uParam3 = -18f;
			break;
		case 36:
			*uParam1 = { -3484.814f, -3466.383f, -0.849f };
			*uParam2 = { 12f, 12f, 70f };
			*uParam3 = 0f;
			break;
		case 37:
			*uParam1 = { -3620.875f, -3575.926f, -0.849f };
			*uParam2 = { 126f, 86f, 70f };
			*uParam3 = -6f;
			break;
		case 38:
			*uParam1 = { -1382.32f, -1400.969f, 56.092f };
			*uParam2 = { 22f, 32f, 86f };
			*uParam3 = 0f;
			break;
		case 39:
			*uParam1 = { -713.105f, -538.091f, 59.42f };
			*uParam2 = { 160f, 22f, 100f };
			*uParam3 = 26f;
			break;
		case 40:
			*uParam1 = { 1083.588f, -693.478f, 48.403f };
			*uParam2 = { 45f, 46f, 70f };
			*uParam3 = 0f;
			break;
		case 41:
			*uParam1 = { -956.489f, 2175.227f, 307.401f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
		case 42:
			*uParam1 = { 1457.354f, -1576.261f, 95.401f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
		case 43:
			*uParam1 = { 348.488f, -669.098f, 95f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
		case 44:
			*uParam1 = { 2008.052f, 617.155f, 95f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
		case 45:
			*uParam1 = { 2099.835f, -283.012f, 42f };
			*uParam2 = { 21f, 29f, 49f };
			*uParam3 = 52f;
			break;
		case 46:
			*uParam1 = { -1759.31f, -224.369f, 168f };
			*uParam2 = { 21f, 29f, 116f };
			*uParam3 = 56f;
			break;
		case 47:
			*uParam1 = { 2142.39f, -1284.068f, 85f };
			*uParam2 = { 40f, 71f, 116f };
			*uParam3 = 70f;
			break;
		case 48:
			*uParam1 = { 2309.119f, -343.031f, 85f };
			*uParam2 = { 15f, 15f, 116f };
			*uParam3 = 0f;
			break;
		case 49:
			*uParam1 = { -1815.147f, -2405.116f, 71f };
			*uParam2 = { 25f, 25f, 50f };
			*uParam3 = 0f;
			break;
		case 50:
			*uParam1 = { -2269.232f, -1145.787f, 214f };
			*uParam2 = { 37f, 33f, 68f };
			*uParam3 = 0f;
			break;
	}
}

bool func_580(vector3 vParam0, vector3 vParam3, float fParam6, float fParam7, float fParam8)
{
	vector3 vVar0;
	struct<2> Var3;
	float fVar6;

	vVar0 = { vParam0 - vParam3 };
	Var3 = ((vVar0.x * BUILTIN::COS(fParam8)) + (vVar0.y * BUILTIN::SIN(fParam8)));
	Var3.f_1 = ((vVar0.x * BUILTIN::SIN(fParam8)) - (vVar0.y * BUILTIN::COS(fParam8)));
	fVar6 = (((Var3 * Var3) / (fParam6 * fParam6)) + ((Var3.f_1 * Var3.f_1) / (fParam7 * fParam7)));
	return fVar6 <= 1f;
}

int func_581(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_600(iParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_344(bParam1), iParam0, iParam3);
}

int func_582(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_601(&uParam0, iParam4, bParam5, iParam6);
}

bool func_583(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_0x4308812A6E9CA62E(iParam0, iParam1);
}

bool func_584(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

float func_585(int iParam0)
{
	float fVar0;

	fVar0 = 1f;
	switch (iParam0)
	{
		case joaat("DRIZZLE"):
		case joaat("SHOWER"):
			fVar0 = (fVar0 * 1.25f);
			break;
		case joaat("SANDSTORM"):
		case joaat("THUNDER"):
		case joaat("SNOW"):
		case joaat("SLEET"):
		case joaat("SNOWLIGHT"):
		case joaat("BLIZZARD"):
		case joaat("WHITEOUT"):
		case joaat("HURRICANE"):
		case joaat("SNOWCLEARING"):
		case joaat("HAIL"):
		case joaat("THUNDERSTORM"):
		case joaat("GROUNDBLIZZARD"):
			fVar0 = (fVar0 * 0.5f);
			break;
	}
	return fVar0;
}

bool func_586(int iParam0)
{
	return func_346(iParam0) == joaat("CONSUMABLE");
}

void func_587(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	int iVar1;
	char cVar2[32];
	int iVar6;
	struct<2> Var7;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	char* sVar14;
	char* sVar15;
	int iVar16;
	char* sVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	char* sVar21;
	char cVar22[128];

	if (!func_345(iParam0, 0))
	{
		return;
	}
	else if (iParam0 == joaat("KIT_HANDHELD_CATALOG"))
	{
		return;
	}
	else if (iParam1 == 0)
	{
		return;
	}
	if (!func_602() || bParam6)
	{
		func_603(iParam0, iParam1, bParam2, bParam4, bParam3, bParam5);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	StringCopy(&cVar2, func_604(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam0 == joaat("AMMO_MOONSHINEJUG_MP"))
	{
		StringCopy(&cVar2, "ITEM_GET_PUMP", 32);
	}
	if (iParam1 > 0)
	{
	}
	else if (bParam3 || bParam4)
	{
		StringCopy(&cVar2, func_604(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		bVar0 = true;
	}
	else if (bParam2 && func_605(iParam0, 2097152))
	{
		StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
	}
	else
	{
		bVar0 = true;
	}
	iVar6 = func_346(iParam0);
	iVar10 = 0;
	iVar11 = joaat("INVENTORY");
	if (((((((iVar6 == joaat("AMMO") && iParam0 != joaat("AMMO_HATCHET")) && iParam0 != joaat("AMMO_HATCHET_CLEAVER")) && iParam0 != joaat("AMMO_HATCHET_HUNTER")) && iParam0 != joaat("AMMO_TOMAHAWK_ANCIENT")) && iParam0 != joaat("AMMO_BOLAS")) && iParam0 != joaat("AMMO_POISONBOTTLE")) && iParam0 != joaat("AMMO_MOONSHINEJUG_MP"))
	{
		iVar10 = joaat("AMMO_TYPES");
		iVar11 = joaat("AMMO_TYPES");
	}
	iVar12 = func_461(iParam0);
	if (((((((iVar6 == joaat("WEAPON_MOD") || iVar6 == joaat("WEAPON_DECORATION")) || iVar12 == -1674363638) || iVar12 == 252325943) || iVar12 == 829857647) || iVar12 == -636562458) || iVar12 == 1341188928) || iVar12 == 1216664798)
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!func_606(iParam0, &Var7, iVar11, iVar10, 0, joaat("UI_ITEMVIEWER")))
	{
		Var7 = "_PLACEHOLDER";
		Var7.f_1 = "inventory_items";
	}
	if (MISC::GET_HASH_KEY(Var7) == 121560594)
	{
		Var7 = "DOCUMENT_MAP_GENERIC";
	}
	if (bParam5)
	{
		Var7 = "ITEMTYPE_ORDERED_ITEM";
		Var7.f_1 = "itemtype_textures";
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(Var7))
	{
		return;
	}
	iVar13 = joaat("COLOR_PURE_WHITE");
	sVar14 = "Transaction_Positive";
	sVar15 = "Transaction_Feed_Sounds";
	iVar16 = 0;
	if (bVar0)
	{
		iVar13 = joaat("COLOR_GREYMID");
		sVar14 = "Transaction_Negative";
		iVar16 = 1;
	}
	if (func_479(iParam0, 474910316))
	{
		sVar17 = func_607(iParam0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar17))
		{
			sVar14 = sVar17;
			sVar15 = "RDRO_Collectible_Sounds_Travelling_Saleswoman";
		}
	}
	if (ITEMDATABASE::_ITEM_DATABASE_IS_OVERPOWERED_ITEM(iParam0))
	{
		if (!bVar0 && !bParam2)
		{
			iVar13 = joaat("COLOR_RPG_SPECIAL_1");
		}
		else
		{
			iVar13 = joaat("COLOR_YELLOWDARK");
		}
	}
	if (func_479(iParam0, 1816585950))
	{
		iVar13 = joaat("COLOR_OBJECTIVE");
	}
	if (func_608(iParam0))
	{
		if (!bVar0 && !bParam2)
		{
			iVar13 = joaat("COLOR_YELLOW");
		}
		else
		{
			iVar13 = joaat("COLOR_YELLOWDARK");
		}
	}
	iVar18 = func_358(iParam0);
	if ((func_609(iVar12) && func_479(iParam0, -306684263)) && iVar18 != 0)
	{
		iVar18 = func_610(iParam0);
	}
	else if (func_346(iParam0) == joaat("CLOTHING"))
	{
		iVar19 = func_611(iParam0);
		if (func_345(iVar19, 0))
		{
			iVar18 = func_358(iVar19);
		}
	}
	if (func_612(iParam0, 1443104131) && bParam3)
	{
		iVar20 = 1;
		func_613(iParam0, -915411861, &iVar20, 0);
		iVar1 = BUILTIN::CEIL((BUILTIN::TO_FLOAT(iVar1) / BUILTIN::TO_FLOAT(iVar20)));
		iParam1 = BUILTIN::CEIL((BUILTIN::TO_FLOAT(iParam1) / BUILTIN::TO_FLOAT(iVar20)));
	}
	sVar21 = func_359(MISC::_CREATE_VAR_STRING(10, &cVar2, MISC::_CREATE_VAR_STRING(0, iVar18), iVar1), iVar13);
	if (iParam1 == 1)
	{
		sVar21 = MISC::_CREATE_VAR_STRING(0, iVar18);
	}
	if ((((((iVar12 == -1839668642 && iParam0 != joaat("CLOTHING_ITEM_HAIR_NONE")) && iParam0 != 1326838792) && iParam0 != -230310728) || ((iVar12 == 231148558 && iParam0 != joaat("CLOTHING_ITEM_M_BEARD_STUBBLE")) && iParam0 != joaat("CLOTHING_ITEM_BEARD_NONE"))) || (iVar12 == 252325943 && iParam0 != joaat("CLOTHING_BLEND_LIPSTICK_NONE"))) || (iVar12 == -636562458 && iParam0 != joaat("CLOTHING_BLEND_EYESHADOW_NONE")))
	{
		sVar21 = MISC::_CREATE_VAR_STRING(0, func_614(iParam0, -442898163));
	}
	if (iVar12 == -126813555 || iVar12 == 1946043663)
	{
		StringCopy(&cVar22, "", 128);
		if (func_615(iParam0, &cVar22))
		{
			sVar21 = func_216(func_616(cVar22), joaat("COLOR_PURE_WHITE"));
		}
	}
	func_617(sVar21, Var7.f_1, MISC::GET_HASH_KEY(Var7), iVar16, iVar13, sVar15, sVar14, 0, 1);
}

struct<2> func_588(int iParam0)
{
	struct<2> Var0;
	struct<2> Var2;

	if (!func_345(iParam0, 0))
	{
		return Var0;
	}
	if (func_479(iParam0, -305066475))
	{
		if (func_200() == -1)
		{
			if (func_479(iParam0, -537818634))
			{
				return func_519(joaat("MEDICINE_AND_DEADEYE_ITEMS"));
			}
			else
			{
				return func_519(joaat("DEADEYE_ITEMS"));
			}
		}
	}
	else if (func_479(iParam0, -537818634))
	{
		return func_519(joaat("MEDICINE_ITEMS"));
	}
	if (func_479(iParam0, 2084895747))
	{
		return func_519(joaat("LOCK_BREAKER_ITEMS"));
	}
	return Var2;
}

bool func_589(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<14> Var0;
	int iVar14;
	int iVar15;
	struct<10> Var16;
	struct<4> Var30;
	int iVar35;
	int iVar36;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return false;
	}
	Var0 = { func_481(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam2)
	{
		func_482(&Var0, func_468(0));
	}
	if (!func_483(&Var0, &iVar14, &iVar15, 0))
	{
		return false;
	}
	Var16.f_9 = -1591664384;
	iVar35 = 0;
	while (iVar35 < iVar15)
	{
		if (iVar36 >= iParam1)
		{
		}
		else
		{
			if (!func_458(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_618(iParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_460(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return true;
}

bool func_590(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<5> Var1;
	struct<4> Var6;

	if (!func_345(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	iVar0 = func_362(iParam0, joaat("DEFAULT"));
	if (iVar0 != 0)
	{
		return func_619(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var1 = { func_350(iParam0, bParam4, 0) };
	Var6 = { func_351(iParam0, Var1, Var1.f_4, bParam4) };
	return func_618(iParam0, &Var6, &Var1, iParam1, iParam2, bParam3, bParam4);
}

void func_591(int iParam0, bool bParam1, int iParam2)
{
	Global_1940311.f_4 = iParam0;
	Global_1940311.f_34 = iParam2;
	if (bParam1 || (func_620() && iParam2 == 0))
	{
		func_621(1);
		func_622(1);
	}
}

void func_592(var uParam0)
{
	func_558(uParam0, joaat("MULTIPLAYER_GAME"));
	if (func_623() == joaat("MPC_PLAYER_TYPE_MP_MALE"))
	{
		func_558(uParam0, joaat("LOOTER_PED_IS_MALE"));
	}
	else
	{
		func_558(uParam0, joaat("LOOTER_PED_IS_FEMALE"));
	}
}

void func_593(var uParam0, int iParam1, struct<15> Param2)
{
	int iVar0;
	struct<22> Var1;

	if (!func_535(uParam0))
	{
		return;
	}
	if (Global_1293346.f_2538 < 20)
	{
		Global_1293346.f_2538++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			Global_1293346.f_2538.f_1[iVar0 /*22*/] = { Global_1293346.f_2538.f_1[iVar0 + 1 /*22*/] };
			iVar0++;
		}
	}
	Var1.f_7.f_3.f_1 = 10;
	Var1 = { *uParam0 };
	Var1.f_4 = iParam1;
	Var1.f_6 = 1;
	Var1.f_7 = { Param2 };
	Global_1293346.f_2538.f_1[(Global_1293346.f_2538 - 1) /*22*/] = { Var1 };
}

bool func_594(var uParam0, var uParam1)
{
	if (((*uParam0 == *uParam1 && uParam0->f_1 == uParam1->f_1) && uParam0->f_2 == uParam1->f_2) && uParam0->f_3 == uParam1->f_3)
	{
		return true;
	}
	return false;
}

int func_595(int iParam0)
{
	if (((((((((((((((((((((((((((((iParam0 == joaat("PROVISION_FISH_BLUEGILL_POOR") || iParam0 == joaat("PROVISION_FISH_BLUEGILL")) || iParam0 == joaat("PROVISION_FISH_BULLHEAD_CATFISH_POOR")) || iParam0 == joaat("PROVISION_FISH_BULLHEAD_CATFISH")) || iParam0 == joaat("PROVISION_FISH_CHAIN_PICKEREL_POOR")) || iParam0 == joaat("PROVISION_FISH_CHAIN_PICKEREL")) || iParam0 == joaat("PROVISION_FISH_CHANNEL_CATFISH_POOR")) || iParam0 == joaat("PROVISION_FISH_CHANNEL_CATFISH")) || iParam0 == joaat("PROVISION_FISH_LAKE_STURGEON_POOR")) || iParam0 == joaat("PROVISION_FISH_LAKE_STURGEON")) || iParam0 == joaat("PROVISION_FISH_LARGEMOUTH_BASS_POOR")) || iParam0 == joaat("PROVISION_FISH_LARGEMOUTH_BASS")) || iParam0 == joaat("PROVISION_FISH_LONGNOSE_GAR_POOR")) || iParam0 == joaat("PROVISION_FISH_LONGNOSE_GAR")) || iParam0 == joaat("PROVISION_FISH_MUSKIE_POOR")) || iParam0 == joaat("PROVISION_FISH_MUSKIE")) || iParam0 == joaat("PROVISION_FISH_NORTHERN_PIKE_POOR")) || iParam0 == joaat("PROVISION_FISH_NORTHERN_PIKE")) || iParam0 == joaat("PROVISION_FISH_PERCH_POOR")) || iParam0 == joaat("PROVISION_FISH_PERCH")) || iParam0 == joaat("PROVISION_FISH_REDFIN_PICKEREL_POOR")) || iParam0 == joaat("PROVISION_FISH_REDFIN_PICKEREL")) || iParam0 == joaat("PROVISION_FISH_ROCK_BASS_POOR")) || iParam0 == joaat("PROVISION_FISH_ROCK_BASS")) || iParam0 == joaat("PROVISION_FISH_SMALLMOUTH_BASS_POOR")) || iParam0 == joaat("PROVISION_FISH_SMALLMOUTH_BASS")) || iParam0 == joaat("PROVISION_FISH_SOCKEYE_SALMON_POOR")) || iParam0 == joaat("PROVISION_FISH_SOCKEYE_SALMON")) || iParam0 == joaat("PROVISION_FISH_STEELHEAD_TROUT_POOR")) || iParam0 == joaat("PROVISION_FISH_STEELHEAD_TROUT"))
	{
		return 0;
	}
	return 1;
}

bool func_596(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	struct<13> Var6;
	int iVar29;
	struct<2> Var30;
	bool bVar32;

	if (!func_345(iParam0, 0))
	{
		return false;
	}
	if (!func_624(iParam0, iParam1, bParam2, iParam5))
	{
		return false;
	}
	if (!func_625(iParam0, &iVar0, iParam1))
	{
		return false;
	}
	func_626(iParam0, bParam2);
	iVar2 = 0;
	if (func_346(iParam0) == joaat("CLOTHING"))
	{
		if (!func_479(iParam0, 866047851) && !func_479(iParam0, -1979000645))
		{
			bVar3 = true;
		}
	}
	if (func_605(iParam0, 8388608) && !func_454(27))
	{
		func_627(27);
	}
	func_628(iParam0);
	if (!bVar3)
	{
		if (func_479(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			iVar1 = func_630(func_629(iParam0, 1), 0);
			if (WEAPON::IS_WEAPON_VALID(iVar1))
			{
				if (func_200() == -1)
				{
					func_631(iVar1);
				}
				if (func_208(0) && func_632(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
				{
					func_633(iParam0, iVar0, iParam5);
					if (!bParam9)
					{
						bParam2 = false;
					}
				}
				else
				{
					func_634(iParam0, iVar0, iParam5);
				}
			}
		}
		else if (func_346(iParam0) == joaat("WEAPON"))
		{
			if (!func_635(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_346(iParam0) == joaat("AMMO") && func_600(iParam0))
		{
			if (!func_636(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_479(iParam0, -103750053))
		{
			func_638(func_637(joaat("CLAWS_COLLECTED")), iVar0);
		}
		else if (iParam0 == joaat("PROVISION_ALLIGATOR_TOOTH"))
		{
			func_638(func_639(joaat("COLLECTED"), joaat("ALLIGATOR_TOOTH")), iVar0);
		}
		else if (func_479(iParam0, -121341956) && !func_479(iParam0, 606799272))
		{
			if (iParam0 != joaat("WEAPON_KIT_DETECTOR"))
			{
				func_640(536, 0);
			}
			if (func_479(iParam0, -2017733358) || func_479(iParam0, -1369131378))
			{
			}
		}
		else if (func_479(iParam0, -136654233))
		{
			if (func_479(iParam0, -1021472396))
			{
			}
		}
		else if (func_479(iParam0, -1466706512) && func_479(iParam0, 1147021565))
		{
			func_640(519, 0);
		}
		else if (func_479(iParam0, 1147021565) && func_479(iParam0, -524514947))
		{
		}
		else if (func_479(iParam0, 554195525))
		{
		}
		else if (func_479(iParam0, 589988438))
		{
			if (func_641())
			{
				func_642(joaat("REWARD_SMALL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_479(iParam0, 787083290) && func_479(iParam0, 949916894))
		{
			func_643(iParam0);
		}
		else if (func_479(iParam0, -1718133314))
		{
			func_644(iParam0);
		}
		else if (func_479(iParam0, -1738650224))
		{
			func_645(iParam0);
		}
		else if (func_479(iParam0, -1112814642) && func_479(iParam0, 949916894))
		{
			func_646(iParam0);
		}
		else if (iParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
		{
			Global_1940144.f_21 = 0;
		}
		else if (func_479(iParam0, 1841149704))
		{
			func_647();
		}
		else if (func_479(iParam0, -1979000645))
		{
		}
		else if (func_479(iParam0, 606799272))
		{
		}
		else if (func_479(iParam0, -1112814642) && func_479(iParam0, -1697809989))
		{
		}
		else if (func_479(iParam0, -2017733358) || func_479(iParam0, -1369131378))
		{
		}
		else if (func_479(iParam0, -1921346699))
		{
			return false;
		}
		else if (func_479(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"):
					if (!func_210(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1))
					{
						func_596(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!func_210(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1))
					{
						func_596(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!func_210(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1))
					{
						func_596(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!func_210(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1))
					{
						func_596(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!func_210(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1))
					{
						func_596(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!func_210(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1))
					{
						func_596(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_479(iParam0, -839724752) && func_605(iParam0, 4))
		{
		}
		else if (func_479(iParam0, 1399091007))
		{
			func_648(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		switch (iParam0)
		{
			case joaat("AMMO_ARROW_BUNDLE"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("ARROW_BUNDLE");
				break;
			case joaat("AMMO_THROWING_KNIVES_POISON_BUNDLE"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("THROWING_KNIVES_POISON_BUNDLE");
				break;
			case joaat("UPGRADE_FSH_BAIT_CRICKET_TIN"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("BAIT_CRICKETS");
				break;
			case joaat("UPGRADE_FSH_BAIT_WORM_CAN"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("BAIT_WORMS");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_FNCY_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_FNCY_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_PLN_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_PLN_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_PLN_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_PLN_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_POOR_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_POOR");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_POOR_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_POOR");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_POOR_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_POOR");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_POOR_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_POOR");
				break;
			case joaat("PROVISION_MP_TREASURE_MAP_REWARDS_BOX_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("REWARD_ABANDONED_LOOT_MALE");
				break;
			case joaat("WEAPON_KIT_BINOCULARS"):
			case joaat("WEAPON_KIT_BINOCULARS_IMPROVED"):
				break;
			case joaat("DOCUMENT_GENERIC_MAP_ROLLED"):
				bParam2 = true;
				bVar4 = true;
				break;
			case joaat("CONSUMABLE_AGED_PIRATE_RUM"):
				func_649(272, func_358(joaat("CONSUMABLE_AGED_PIRATE_RUM")), 0);
				break;
			case joaat("CONSUMABLE_GINSENG_ELIXIER"):
				func_649(270, func_358(joaat("CONSUMABLE_GINSENG_ELIXIER")), 0);
				break;
			case joaat("CONSUMABLE_VALERIAN_ROOT"):
				func_649(271, func_358(joaat("CONSUMABLE_VALERIAN_ROOT")), 0);
				break;
			case joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"):
			case joaat("CONSUMABLE_POTENT_MEDICINE"):
			case joaat("CONSUMABLE_MEDICINE"):
			case joaat("CONSUMABLE_MOONSHINE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1940311.f_10903 + 60000))
				{
					func_650(685, 1934060482 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Health Bar." */, 1, 1);
					Global_1940311.f_10903 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_POTENT_RESTORATIVE"):
			case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
			case joaat("CONSUMABLE_COCAINE_CHEWING_GUM"):
			case joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"):
			case joaat("CONSUMABLE_RESTORATIVE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1940311.f_10903 + 60000))
				{
					func_650(685, 1110018439 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Stamina Bar." */, 1, 1);
					Global_1940311.f_10903 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_SNAKE_OIL"):
			case joaat("CONSUMABLE_POTENT_SNAKE_OIL"):
			case joaat("CONSUMABLE_CHEWING_TOBACCO"):
			case joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"):
			case joaat("CONSUMABLE_CHEWING_TOBACCO_USED"):
				if (MISC::GET_GAME_TIMER() >= (Global_1940311.f_10903 + 60000))
				{
					func_650(685, 1408511260 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Dead Eye Bar." */, 1, 1);
					Global_1940311.f_10903 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED"):
			case joaat("CONSUMABLE_TONIC"):
			case joaat("CONSUMABLE_POTENT_TONIC"):
				if (MISC::GET_GAME_TIMER() >= (Global_1940311.f_10903 + 60000))
				{
					func_650(685, -1228016946 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Health, Stamina and Dea" +
    "d Eye Bars." */, 1, 1);
					Global_1940311.f_10903 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_MEAL_LAMB_HEART"):
			case joaat("CONSUMABLE_MEAL_PRIME_RIB"):
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH"):
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL"):
			case joaat("CONSUMABLE_MEAL_CONSOMME"):
			case joaat("CONSUMABLE_MEAL_FRIED_CATFISH"):
			case joaat("CONSUMABLE_MEAL_PRAIRIE_CHICKEN"):
			case joaat("CONSUMABLE_MEAL_LAMB_FRY"):
			case joaat("CONSUMABLE_MEAL_OYSTER_STEW"):
			case joaat("CONSUMABLE_MEAL_TURTLE_SOUP"):
			case joaat("CONSUMABLE_MEAL_OATMEAL"):
			case joaat("CONSUMABLE_MEAL_CORNED_BEEF_HASH"):
			case joaat("CONSUMABLE_MEAL_ROAST_BEEF"):
				if (MISC::GET_GAME_TIMER() >= (Global_1940311.f_10903 + 60000))
				{
					func_650(686, -103579 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health Core." */, 1, 1);
					Global_1940311.f_10903 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH_EGGS"):
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL_EGGS"):
				if (MISC::GET_GAME_TIMER() >= (Global_1940311.f_10903 + 60000))
				{
					func_650(686, -1531530025 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health and Dead Eye" +
    " Cores." */, 1, 1);
					Global_1940311.f_10903 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_HAIR_TONIC"):
				func_640(526, 0);
				break;
			case joaat("CONSUMABLE_HAIR_GREASE"):
				func_640(529, 0);
				break;
			case joaat("CONSUMABLE_CIGARETTE_BOX"):
				break;
			case joaat("CONSUMABLE_COFFEE_GNDS_REG"):
				if (func_454(1))
				{
					func_640(522, 0);
				}
				break;
			case joaat("KIT_GUN_OIL"):
				func_640(521, 0);
				break;
			case joaat("UPGRADE_UPG_MORTAR_PESTLE"):
				if (func_200() == -1)
				{
					iParam0 = -1448210800; /* GXTEntry: "Crafting Tools" */
				}
				break;
			case joaat("UPGRADE_UPG_COFFEE_KIT"):
				func_640(534, 0);
				break;
			default:
				break;
		}
	}
	if (!bVar4)
	{
		if (iVar0 <= 0)
		{
			return false;
		}
		iVar5 = iParam0;
		func_651(&iVar5);
		if (!func_634(iVar5, iVar0, iParam5))
		{
			return false;
		}
		else if (!func_208(0))
		{
			return true;
		}
		if (func_346(iParam0) == joaat("CLOTHING"))
		{
			func_652(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_208(0) && !func_209())
		{
			Var6.f_1 = 10;
			Var6.f_12 = 10;
			MISC::_0x48E4D50F87A96AA5(Global_34, 0, 0, iVar2, &Var6, 0);
			iVar29 = 0;
			while (iVar29 < Var6)
			{
				func_596(Var6.f_1[iVar29], Var6.f_12[iVar29], 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar29++;
			}
		}
		else
		{
			func_653(iVar2, 0);
		}
	}
	Var30 = { func_588(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var30))
	{
		STATS::_STAT_ID_INCREMENT_INT(&Var30, iVar0);
	}
	func_654(iParam0);
	if (fParam6 > 0f)
	{
		if (func_479(iParam0, -839724752))
		{
			func_655(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar32 = iParam5 == 1248274121;
		func_587(iParam0, iVar0, 0, bVar32, 0, 0, 0);
	}
	return true;
}

int func_597(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!func_562(iParam0))
	{
		return -1;
	}
	iVar0 = iParam0;
	iVar1 = func_567(Global_1139381.f_5693[iVar0]);
	return iVar1;
}

bool func_598(int iParam0)
{
	return func_656(&(Global_1956200.f_1565), iParam0, 1);
}

int func_599(int iParam0)
{
	return func_657(func_598(iParam0));
}

bool func_600(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

int func_601(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_658(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

bool func_602()
{
	return !Global_1913504;
}

void func_603(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1913504.f_3)
	{
		if ((((Global_1913504.f_4[iVar0 /*6*/] == iParam0 && Global_1913504.f_4[iVar0 /*6*/].f_2 == bParam2) && Global_1913504.f_4[iVar0 /*6*/].f_3 == bParam3) && Global_1913504.f_4[iVar0 /*6*/].f_4 == bParam4) && Global_1913504.f_4[iVar0 /*6*/].f_5 == bParam5)
		{
			Global_1913504.f_4[iVar0 /*6*/].f_1 = (Global_1913504.f_4[iVar0 /*6*/].f_1 + iParam1);
			return;
		}
		iVar0++;
	}
	if (Global_1913504.f_3 < 19)
	{
		Global_1913504.f_4[Global_1913504.f_3 /*6*/] = iParam0;
		Global_1913504.f_4[Global_1913504.f_3 /*6*/].f_1 = iParam1;
		Global_1913504.f_4[Global_1913504.f_3 /*6*/].f_2 = bParam2;
		Global_1913504.f_4[Global_1913504.f_3 /*6*/].f_3 = bParam3;
		Global_1913504.f_4[Global_1913504.f_3 /*6*/].f_4 = bParam4;
		Global_1913504.f_4[Global_1913504.f_3 /*6*/].f_5 = bParam5;
		Global_1913504.f_3++;
	}
}

char* func_604(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_605(int iParam0, int iParam1)
{
	if (!func_345(iParam0, 0))
	{
		return false;
	}
	return INVENTORY::_0x245D07651B1D183B(iParam0, iParam1);
}

bool func_606(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<19> Var3;

	Var3.f_2 = 5;
	Var3.f_18 = 8;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_UI_DATA(iParam0, &Var3))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(Var3.f_2[iVar0 /*3*/]))
			{
				Jump @227; //curOff = 56
			}
			else if (MISC::IS_STRING_NULL_OR_EMPTY(Var3.f_2[iVar0 /*3*/].f_1))
			{
			}
			else
			{
				iVar1 = MISC::GET_HASH_KEY(Var3.f_2[iVar0 /*3*/]);
				iVar2 = MISC::GET_HASH_KEY(Var3.f_2[iVar0 /*3*/].f_1);
				if (iParam2 != 0 && Var3.f_2[iVar0 /*3*/].f_2 != iParam2)
				{
					Jump @227; //curOff = 137
				}
				else if (iParam3 != 0 && iVar2 != iParam3)
				{
					Jump @227; //curOff = 160
				}
				else if (iParam4 != 0 && iVar1 != iParam4)
				{
					Jump @227; //curOff = 183
				}
				else if (iParam5 != 0 && iVar2 == iParam5)
				{
				}
				else
				{
					*uParam1 = { Var3.f_2[iVar0 /*3*/] };
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

char* func_607(int iParam0)
{
	if (func_479(iParam0, -1995062316))
	{
		return "collectible_arrowheads";
	}
	if (func_479(iParam0, 1239889275))
	{
		return "collectible_liquor_bottles";
	}
	if (func_479(iParam0, 143267379))
	{
		return "collectible_coins";
	}
	if (func_479(iParam0, -944041124))
	{
		return "colectible_heirlooms";
	}
	if (func_479(iParam0, 1562621600))
	{
		return "collectible_jewelry";
	}
	if (func_479(iParam0, -149719013))
	{
		return "collectible_bird_eggs";
	}
	if (func_479(iParam0, 1940829793))
	{
		return "collectible_tarot_cards";
	}
	if (func_479(iParam0, 781094263))
	{
		return "collectible_flowers";
	}
	if (((func_479(iParam0, -352095726) || func_479(iParam0, -2014783736)) || func_479(iParam0, -545064757)) || func_479(iParam0, 679186220))
	{
		return "collectible_found_fossil";
	}
	return "";
}

bool func_608(int iParam0)
{
	if (func_479(iParam0, -189374246))
	{
		if (((func_659(iParam0, joaat("CI_TAG_FOLDER_ANIMAL_SAMPLES_LEGENDARY_ALBINO")) || func_659(iParam0, joaat("CI_TAG_FOLDER_ANIMAL_SAMPLES_LEGENDARY_MELANISTIC"))) || func_659(iParam0, joaat("CI_TAG_FOLDER_ANIMAL_SAMPLES_LEGENDARY_PATTERNED"))) || func_659(iParam0, joaat("CI_TAG_FOLDER_ANIMAL_SAMPLES_LEGENDARY_RED_BLONDE")))
		{
			return true;
		}
	}
	if (func_479(iParam0, -753854379) || func_479(iParam0, 173360570))
	{
		return true;
	}
	return false;
}

bool func_609(int iParam0)
{
	switch (iParam0)
	{
		case -1696039442:
		case 688466329:
		case 759802290:
			return false;
		default:
			break;
	}
	return true;
}

int func_610(int iParam0)
{
	struct<19> Var0;
	int iVar35;

	if (!func_345(iParam0, 0))
	{
		return 0;
	}
	Var0.f_2 = 5;
	Var0.f_18 = 8;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_UI_DATA(iParam0, &Var0))
	{
		iVar35 = 0;
		while (iVar35 < 8)
		{
			if (Var0.f_18[iVar35 /*2*/].f_1 == 14460646)
			{
				if (Var0.f_18[iVar35 /*2*/] != 0)
				{
					return Var0.f_18[iVar35 /*2*/];
				}
			}
			iVar35++;
		}
	}
	return 0;
}

int func_611(int iParam0)
{
	int iVar0;
	struct<10> Var1;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;

	iVar0 = func_660(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_661(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar0, 0) };
	if (func_662(Var1, &iVar11, &iVar12, 0))
	{
		iVar13 = 0;
		while (iVar13 < iVar12)
		{
			if (ITEMDATABASE::_0x8750F69A720C2E41(iVar11, iVar13, &iVar14) && func_663(iVar14))
			{
				func_664(iVar11);
				return iVar14;
			}
			iVar13++;
		}
		func_664(iVar11);
	}
	return 0;
}

bool func_612(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if (iParam1 == 0)
	{
		return false;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_DOES_ITEM_HAVE_TAG(iParam0, iParam1, -949239683))
	{
		return true;
	}
	return false;
}

int func_613(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<37> Var0;

	if (!func_345(iParam0, 0) && !func_583(func_542(iParam0), 2))
	{
		return 0;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ACQUIRE_COST(iParam0, iParam1, &Var0))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	if (!bParam3)
	{
	}
	*iParam2 = Var0.f_1;
	return 1;
}

int func_614(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_665(iParam0, iParam1);
	if (iVar0 == 0)
	{
		return 0;
	}
	return iVar0;
}

bool func_615(int iParam0, char* sParam1)
{
	int iVar0;
	char cVar1[128];

	if (!func_345(iParam0, 0))
	{
		return false;
	}
	StringCopy(sParam1, func_215(iParam0), 128);
	iVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam1);
	if (!func_666(iParam0))
	{
		return false;
	}
	StringCopy(&cVar1, func_667(iParam0), 128);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
	{
		return false;
	}
	StringConCat(&cVar1, " - ", 128);
	iVar0 = (iVar0 + HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar1));
	StringConCat(&cVar1, sParam1, 128);
	if (iVar0 >= 127)
	{
		return false;
	}
	*sParam1 = { cVar1 };
	return true;
}

char* func_616(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	return HUD::_0xD8402B858F4DDD88(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

var func_617(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
{
	struct<4> Var0;
	struct<7> Var13;
	var uVar20;

	Var0 = -2;
	Var0.f_1 = sParam5;
	Var0.f_2 = sParam6;
	Var0.f_3 = iParam7;
	Var0 = 450;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = iParam2;
	Var13.f_4 = iParam3;
	Var13.f_5 = iParam4;
	Var13.f_6 = 0;
	uVar20 = UIFEED::_0xB249EBCB30DD88E0(&Var0, &Var13, iParam8);
	func_668(sParam0, sParam1, iParam2);
	return uVar20;
}

bool func_618(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<14> Var0;
	int iVar14;
	struct<13> Var15;
	struct<17> Var31;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return false;
	}
	if (func_669(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_474(*uParam1, &Var0, bParam6, 0, -1))
	{
		return false;
	}
	if (iParam3 < 0)
	{
		iParam3 = Var0.f_11;
	}
	else if (iParam3 > Var0.f_11)
	{
		iParam3 = Var0.f_11;
	}
	if (!func_208(bParam6))
	{
		iVar14 = -1;
		if (Var0.f_13)
		{
		}
		else if (func_200() == 0)
		{
			Var15.f_9 = 1;
			Var15.f_11 = -1591664384;
			Var15.f_8 = iParam0;
			Var15 = { *uParam1 };
			Var15.f_4 = { *uParam2 };
			Var15.f_11 = uParam2->f_4;
			Var15.f_9 = iParam3;
			Var15.f_12 = iParam4;
			iVar14 = func_670(joaat("USE"), &Var15, 1);
			if (iVar14 != -1)
			{
				Var31.f_7 = -142743235;
				Var31.f_16 = -1;
				Var31 = bParam5;
				Var31.f_7 = iParam4;
				func_671(iVar14, Var31);
			}
		}
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_344(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

int func_619(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<6> Var1[10];
	int iVar62;
	int iVar63;
	int iVar64;
	struct<16> Var65;
	struct<17> Var81;

	if (func_669(iParam0))
	{
		return 0;
	}
	if (iParam1 <= 0)
	{
		return 0;
	}
	iVar0 = func_362(iParam0, joaat("DEFAULT"));
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!func_208(bParam4))
	{
		if (iVar0 == 0)
		{
			return 0;
		}
		if (!func_672(&Var1, &iVar62, iParam0, iVar0, iParam1, 1) || iVar62 < 1)
		{
			return 0;
		}
		iVar64 = -1;
		Var65.f_9 = 1;
		Var65.f_11 = -1591664384;
		iVar63 = 0;
		while (iVar63 < iVar62)
		{
			Var65 = { func_673(iParam0, &(Var1[iVar63 /*6*/])) };
			Var65.f_12 = iParam2;
			iVar64 = func_670(joaat("USE"), &Var65, 1);
			if (iVar64 == -1)
			{
				return 0;
			}
			iVar63++;
		}
		if (iVar64 != -1)
		{
			Var81.f_7 = -142743235;
			Var81.f_16 = -1;
			Var81 = bParam3;
			Var81.f_7 = iParam2;
			func_671(iVar64, Var81);
			return 1;
		}
		return 0;
	}
	if (!INVENTORY::_0xB4158C8C9A3B5DCE(func_344(bParam4), iParam0, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

bool func_620()
{
	if ((Global_1940311.f_10901 != (Global_1940311.f_38.f_203 - 1) || func_675(func_674(0), Global_1940311.f_10893, 0, 1, 1) > 0) || Global_1940311.f_10901 == 15)
	{
		return true;
	}
	func_676();
	if (Global_1940311.f_6)
	{
		return true;
	}
	return false;
}

void func_621(int iParam0)
{
	Global_1940311.f_10 = iParam0;
}

void func_622(int iParam0)
{
	Global_1940311.f_9 = iParam0;
}

int func_623()
{
	return Global_1952637.f_1;
}

bool func_624(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_200() == -1)
	{
		if (func_677(iParam0) && func_678(iParam0))
		{
			func_679(iParam0, iParam1, 1, &bParam2, iParam3);
			return false;
		}
	}
	else if (iParam0 == joaat("CUSTOM_SATCHEL"))
	{
		bParam2 = true;
	}
	else if (iParam0 == joaat("WEAPON_UNARMED"))
	{
		return false;
	}
	return true;
}

bool func_625(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	*iParam1 = iParam2;
	func_680(iParam0, iParam1);
	Var0 = { func_350(iParam0, 0, 1) };
	iVar5 = func_571(iParam0, &Var0, 0, 0);
	iVar6 = func_581(iParam0, 0, 0, 0);
	if (iVar5 > 1 && (iVar6 + iParam2) >= iVar5)
	{
		if (func_479(iParam0, -2051813666))
		{
			func_640(674, 1);
		}
		else if (func_200() == -1)
		{
			func_640(673, 0);
		}
	}
	if (func_681(iParam0, &Var0, *iParam1, 0, 0, -1, 0))
	{
		if (iVar6 < iVar5)
		{
			*iParam1 = (iVar5 - iVar6);
		}
		else
		{
			return false;
		}
	}
	return true;
}

void func_626(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	if (!func_682())
	{
		return;
	}
	switch (func_683(iParam0, -949239683))
	{
		case -1565009253:
		case -1420737577:
		case -1273369295:
		case -1239610997:
		case -1229959999:
		case -1050374492:
		case -873135685:
		case -164980960:
		case 10252101:
		case 24248412:
		case 82200319:
		case 632545869:
		case 733893097:
		case 871191033:
		case 1513351077:
		case 1712126263:
		case 1894156335:
			Global_1940144.f_70.f_5 = 1;
			Global_1940144.f_70.f_6 = 0;
			Global_1940144.f_70.f_1 = iParam0;
			break;
	}
}

void func_627(int iParam0)
{
	if (!func_533(iParam0))
	{
		return;
	}
	func_684(iParam0);
	func_685(iParam0);
}

void func_628(int iParam0)
{
	if (func_479(iParam0, -1522723129))
	{
		func_211(-848633709, 0, 255, 0, 0);
	}
	else if (func_479(iParam0, -283942357))
	{
		func_211(-981153234, 0, 255, 0, 0);
	}
	else if (func_479(iParam0, 683680997))
	{
		func_211(-756350192, 0, 255, 0, 0);
	}
	else if (func_479(iParam0, 1307628809))
	{
		func_211(603094518, 0, 255, 0, 0);
	}
}

int func_629(int iParam0, bool bParam1)
{
	int iVar0;

	switch (iParam0)
	{
		case joaat("AMMO_THROWING_KNIVES"):
			iVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_THROWING_KNIVES_CONFUSE"):
			iVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_THROWING_KNIVES_DISORIENT"):
			iVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_THROWING_KNIVES_DRAIN"):
			iVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_THROWING_KNIVES_IMPROVED"):
			iVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_THROWING_KNIVES_POISON"):
			iVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_THROWING_KNIVES_TRAIL"):
			iVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_THROWING_KNIVES_WOUND"):
			iVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_DYNAMITE"):
			iVar0 = joaat("WEAPON_THROWN_DYNAMITE");
			break;
		case joaat("AMMO_DYNAMITE_VOLATILE"):
			iVar0 = joaat("WEAPON_THROWN_DYNAMITE");
			break;
		case joaat("AMMO_MOLOTOV"):
			iVar0 = joaat("WEAPON_THROWN_MOLOTOV");
			break;
		case joaat("AMMO_MOLOTOV_VOLATILE"):
			iVar0 = joaat("WEAPON_THROWN_MOLOTOV");
			break;
		case joaat("AMMO_TOMAHAWK"):
			iVar0 = joaat("WEAPON_THROWN_TOMAHAWK");
			break;
		case joaat("AMMO_TOMAHAWK_ANCIENT"):
			iVar0 = joaat("WEAPON_THROWN_TOMAHAWK_ANCIENT");
			break;
		case joaat("AMMO_TOMAHAWK_HOMING"):
			iVar0 = joaat("WEAPON_THROWN_TOMAHAWK");
			break;
		case joaat("AMMO_TOMAHAWK_IMPROVED"):
			iVar0 = joaat("WEAPON_THROWN_TOMAHAWK");
			break;
		case joaat("AMMO_BOLAS"):
			iVar0 = joaat("WEAPON_THROWN_BOLAS");
			break;
		case joaat("AMMO_POISONBOTTLE"):
			iVar0 = joaat("WEAPON_THROWN_POISONBOTTLE");
			break;
		case joaat("AMMO_HATCHET"):
			iVar0 = joaat("WEAPON_MELEE_HATCHET");
			break;
		case joaat("AMMO_HATCHET_HUNTER"):
			iVar0 = joaat("WEAPON_MELEE_HATCHET_HUNTER");
			break;
		case joaat("AMMO_HATCHET_HUNTER_RUSTED"):
			iVar0 = joaat("WEAPON_MELEE_HATCHET_HUNTER_RUSTED");
			break;
		case joaat("AMMO_HATCHET_ANCIENT"):
			iVar0 = joaat("WEAPON_MELEE_ANCIENT_HATCHET");
			break;
		case joaat("AMMO_HATCHET_CLEAVER"):
			iVar0 = joaat("WEAPON_MELEE_CLEAVER");
			break;
		case joaat("AMMO_HATCHET_DOUBLE_BIT"):
			iVar0 = joaat("WEAPON_MELEE_HATCHET_DOUBLE_BIT");
			break;
		case joaat("AMMO_HATCHET_DOUBLE_BIT_RUSTED"):
			iVar0 = joaat("WEAPON_MELEE_HATCHET_DOUBLE_BIT_RUSTED");
			break;
		case joaat("AMMO_HATCHET_HEWING"):
			iVar0 = joaat("WEAPON_MELEE_HATCHET_HEWING");
			break;
		case joaat("AMMO_HATCHET_VIKING"):
			iVar0 = joaat("WEAPON_MELEE_HATCHET_VIKING");
			break;
		default:
			break;
	}
	if (func_345(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_686(iVar0) || func_687(iVar0))
			{
				return iVar0;
			}
		}
		else
		{
			return iVar0;
		}
	}
	return iParam0;
}

int func_630(int iParam0, bool bParam1)
{
	if (!func_345(iParam0, 0))
	{
		return 0;
	}
	if (WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return iParam0;
	}
	if (!bParam1)
	{
	}
	return 0;
}

void func_631(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_13 != -1)
	{
		return;
	}
	if (!func_459(iParam0))
	{
		return;
	}
	iVar0 = WEAPON::_GET_WEAPON_UNLOCK(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(iVar0, true);
}

bool func_632(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<4> Var27;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_MELEE(iParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_34, iParam0, 0, false))
	{
		Var0 = { func_350(iParam0, 0, 1) };
		if (func_470(iParam0, &Var0, Var0.f_4, 0, 0))
		{
			Var5.f_9 = -1591664384;
			if (func_471(iParam0, &Var5, Var0.f_4))
			{
				Var27 = { func_351(iParam0, Var0, Var0.f_4, 0) };
				func_618(iParam0, &Var27, &Var0, 1, -142743235, 1, 0);
			}
		}
	}
	if (func_208(0))
	{
		WEAPON::_GIVE_WEAPON_TO_PED_2(Global_34, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_34, iParam0, 0, false))
		{
			return false;
		}
		func_633(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0), iParam1, iParam6);
		func_688(iParam0, iParam1);
		return true;
	}
	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_34, iParam0, 0, false))
	{
		return false;
	}
	if (iParam1 > 0)
	{
	}
	WEAPON::_GIVE_WEAPON_TO_PED_2(Global_34, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
	return true;
}

bool func_633(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_600(iParam0))
	{
		return false;
	}
	if (!func_208(0))
	{
		return false;
	}
	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_34, iParam0, iParam1, iParam2);
	return true;
}

int func_634(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<5> Var1;
	struct<4> Var6;

	if (!func_345(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	iVar0 = func_362(iParam0, joaat("DEFAULT"));
	if (iVar0 != 0)
	{
		return func_689(iParam0, iParam1, iParam2);
	}
	Var1 = { func_350(iParam0, 0, 1) };
	Var6 = { func_351(iParam0, Var1, Var1.f_4, 0) };
	return func_690(iParam0, &Var6, &Var1, iParam1, iParam2, 0);
}

bool func_635(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	int iVar6;
	int iVar7;

	iVar0 = func_630(iParam0, 0);
	if (WEAPON::IS_WEAPON_VALID(iVar0))
	{
		if (func_200() == -1)
		{
			func_631(iVar0);
			if (iParam1 == 1248274121)
			{
				func_691(iVar0);
			}
		}
		if (!func_681(iParam0, &uVar1, 1, 0, 0, -1, 0))
		{
			func_679(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_692(iVar0);
			if (WEAPON::_IS_WEAPON_SNIPER(iVar0))
			{
				func_632(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == joaat("WEAPON_FISHINGROD") || WEAPON::_IS_WEAPON_BINOCULARS(iVar0))
			{
				func_632(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::_IS_WEAPON_LASSO(iVar0))
			{
				func_632(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::_IS_WEAPON_MELEE(iVar0))
			{
				if (iVar0 == joaat("WEAPON_MELEE_KNIFE_JOHN") && !func_693())
				{
					return false;
				}
				if (WEAPON::_0x2C83212A7AA51D3D(iParam0))
				{
				}
				else if (!func_694(iVar0))
				{
					func_632(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_632(iVar0, WEAPON::_GET_WEAPON_CLIP_SIZE(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
			{
				iVar7 = func_695(Global_34, 2, 0, 1);
				if ((((func_459(iVar7) && !Global_26640) && iVar7 != iVar0) && !func_210(joaat("UPGRADE_OFFHAND_HOLSTER"), 1)) && bParam4)
				{
					WEAPON::_0xE9BD19F8121ADE3E(Global_34, iVar7);
				}
				if (func_459(iVar7) && func_210(joaat("UPGRADE_OFFHAND_HOLSTER"), 1))
				{
					if (!func_632(iVar0, iVar6, bParam3, bParam4, 3, 1, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_632(iVar0, iVar6, bParam3, bParam4, 0, 1, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_632(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
			{
				return false;
			}
		}
	}
	else
	{
		return false;
	}
	if (WEAPON::_0x9F0E1892C7F228A8(1) != 0 && iParam1 == 1248274121)
	{
		func_640(515, 1);
	}
	return true;
}

int func_636(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!func_600(iParam0))
	{
		return 0;
	}
	iVar4 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(iParam0);
	iVar3 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iParam0);
	if (func_459(iVar4))
	{
		WEAPON::GET_MAX_AMMO(Global_34, &iVar2, iVar4);
	}
	iVar5 = (iVar2 - iVar3);
	if (WEAPON::_IS_WEAPON_BOW(iVar4))
	{
		iVar1 = 5;
	}
	else
	{
		iVar1 = WEAPON::_GET_WEAPON_CLIP_SIZE(iVar4);
	}
	if (*iParam1 > 0)
	{
		iVar6 = *iParam1;
	}
	else if (*iParam1 < 0)
	{
		iVar6 = (iVar1 * MISC::ABSI(*iParam1));
	}
	if (iVar5 >= iVar6)
	{
		iVar0 = iVar6;
	}
	else if (iVar5 < iVar6 && iVar5 >= 1)
	{
		iVar0 = iVar5;
	}
	else
	{
		func_649(func_696(iParam0), func_358(iParam0), 1);
		return 0;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (func_208(0))
	{
		if (func_633(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return 1;
		}
	}
	else
	{
		return func_634(iParam0, *iParam1, iParam2);
	}
	return 0;
}

struct<2> func_637(int iParam0)
{
	struct<2> Var0;

	Var0.f_1 = iParam0;
	return Var0;
}

void func_638(var uParam0, int iParam1, int iParam2)
{
	if (!STATS::_STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

struct<2> func_639(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_640(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_697(iParam0, &iVar0, &iVar1);
	if (!func_698(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_699(iVar0, iVar1);
}

bool func_641()
{
	return false;
}

int func_642(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;

	if (func_200() == 0)
	{
		func_653(iParam0, 0);
		return 0;
	}
	iVar0 = func_700(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_701(iVar0, sParam4, iParam5, 0);
	}
	func_702(iVar0, bParam1, fParam2, iParam3);
	return iVar0;
}

void func_643(int iParam0)
{
}

void func_644(int iParam0)
{
}

void func_645(int iParam0)
{
}

void func_646(int iParam0)
{
}

void func_647()
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(joaat("SP_CHAL_EXPL_ROOT")) < 2)
	{
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("SP_CHAL_EXPL_ROOT"), joaat("ACW_EXPL_RANK_01_TREASURE"), 1);
	}
}

void func_648(int iParam0, int iParam1)
{
	var uVar0;

	func_480(iParam0, iParam1, &uVar0);
}

void func_649(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_697(iParam0, &iVar0, &iVar1);
	if (!func_698(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_703(iParam0, 1024))
	{
		return;
	}
	func_699(iVar0, iVar1);
	Global_1904651.f_33[iParam0 /*9*/].f_3[0 /*2*/] = iParam1;
	Global_1904651.f_33[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 2;
}

void func_650(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	func_697(iParam0, &iVar0, &iVar1);
	if (!func_698(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_703(iParam0, 1024))
	{
		return;
	}
	func_699(iVar0, iVar1);
	Global_1904651.f_33[iParam0 /*9*/].f_3[0 /*2*/] = iParam1;
	if (!bParam3)
	{
		Global_1904651.f_33[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 1;
	}
	else
	{
		Global_1904651.f_33[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 5;
	}
}

void func_651(int iParam0)
{
	switch (*iParam0)
	{
		case joaat("CONSUMABLE_CIGARETTE_BOX_USED"):
			*iParam0 = joaat("CONSUMABLE_CIGARETTE_BOX");
			break;
		case joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP_USED"):
			*iParam0 = joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP");
			break;
		case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
			*iParam0 = joaat("CONSUMABLE_COCAINE_CHEWING_GUM");
			break;
	}
}

void func_652(int iParam0)
{
	if (func_200() != -1)
	{
		return;
	}
}

bool func_653(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> Var4;

	if (0 == iParam0)
	{
		return false;
	}
	Var4.f_1 = 10;
	func_558(&Var4, joaat("LOOT_TYPE_NORMAL"));
	return func_559(iParam0, &Var4, &uVar0, iParam1, 0);
}

void func_654(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_BIRD_FEATHER_FLIGHT"):
			break;
	}
}

void func_655(int iParam0, char* sParam1)
{
	char* sVar0;

	sVar0 = func_704(Global_1903071.f_37);
	func_617(MISC::_CREATE_VAR_STRING(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_705(iParam0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

bool func_656(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_657(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

bool func_658(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_344(bParam3);
	}
	if (!INVENTORY::_0x22E590F108289A9D(iParam4, uParam0, iParam1, &uVar0))
	{
		return false;
	}
	if (!func_541(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return false;
	}
	return true;
}

int func_659(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_DOES_ITEM_HAVE_TAG(iParam0, iParam1, 1224357681))
	{
		return 1;
	}
	return 0;
}

int func_660(int iParam0)
{
	var uVar0[5];
	int iVar6;

	if (!func_345(iParam0, 0))
	{
		return 0;
	}
	iVar6 = ITEMDATABASE::_0x8870895BA5ED9385(iParam0, -442898163, &uVar0);
	if (iVar6 > 0)
	{
		return uVar0[0];
	}
	return 0;
}

struct<10> func_661(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	struct<10> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	if (iParam0 != 0 && iParam0 != -1591664384)
	{
		Var0 = iParam0;
	}
	if (iParam1 != 0 && iParam1 != -1591664384)
	{
		Var0.f_1 = iParam1;
	}
	if (iParam2 != 0 && iParam2 != -1)
	{
		Var0.f_2 = iParam2;
	}
	if (iParam3 != 0)
	{
		Var0.f_3 = iParam3;
	}
	if (iParam4 != 0)
	{
		Var0.f_4 = iParam4;
	}
	if (iParam5 != 0)
	{
		Var0.f_5 = iParam5;
	}
	if (iParam6 != -1)
	{
		Var0.f_6 = iParam6;
	}
	if (iParam7 != 0)
	{
		Var0.f_8 = iParam7;
	}
	if (iParam8 != 0)
	{
		Var0.f_7 = iParam8;
	}
	return Var0;
}

bool func_662(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11, int iParam12)
{
	*iParam10 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return true;
	}
	return false;
}

int func_663(int iParam0)
{
	if (!func_345(iParam0, 0))
	{
	}
	if (func_479(iParam0, -393037696))
	{
		return 1;
	}
	return 0;
}

int func_664(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (!ITEMDATABASE::_0xCBB7B6EDFA933ADE(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_665(int iParam0, int iParam1)
{
	struct<2> Var0[20];
	int iVar41;
	int iVar42;
	int iVar43;

	iVar41 = 0;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_TAG_DATA(iParam0, &Var0, &iVar42, 20))
	{
		iVar43 = 0;
		while (iVar43 < iVar42)
		{
			if (Var0[iVar43 /*2*/].f_1 == iParam1)
			{
				iVar41 = Var0[iVar43 /*2*/];
				return iVar41;
			}
			iVar43++;
		}
	}
	return 0;
}

bool func_666(int iParam0)
{
	if (func_461(iParam0) == -126813555 || func_461(iParam0) == 1946043663)
	{
		return true;
	}
	return false;
}

char* func_667(int iParam0)
{
	int iVar0;

	if (!func_345(iParam0, 0))
	{
		return "";
	}
	iVar0 = func_610(iParam0);
	if (iVar0 == 0)
	{
		return "";
	}
	return HUD::_GET_LABEL_TEXT_BY_HASH(iVar0);
}

void func_668(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXT"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTUREDICT"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTURENAME"), iParam2);
}

bool func_669(int iParam0)
{
	if (ITEMDATABASE::_ITEM_DATABASE_IS_INTRINSIC_ITEM(iParam0))
	{
		return true;
	}
	return false;
}

int func_670(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_706(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			return func_708(func_707(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_709(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 16), iVar0, uParam1);
	}
	return -1;
}

void func_671(int iParam0, struct<17> Param1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1293346.f_20)
	{
		if (Global_1293346.f_20.f_1[iVar0 /*21*/] == iParam0)
		{
			if (Global_1293346.f_20.f_1[iVar0 /*21*/].f_1 == 1 || Global_1293346.f_20.f_1[iVar0 /*21*/].f_1 == 5)
			{
				Global_1293346.f_20.f_1[iVar0 /*21*/].f_4 = { Param1 };
			}
			return;
		}
		iVar0++;
	}
}

bool func_672(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	*iParam1 = 0;
	if (iParam4 < 1)
	{
		return false;
	}
	else if (*uParam0 != 10)
	{
		return false;
	}
	if (iParam3 == 0)
	{
		iParam3 = func_362(iParam2, joaat("DEFAULT"));
		if (iParam3 == 0)
		{
			return false;
		}
	}
	if (!NETSHOPPING::_0xD1555FBC96C88444(iParam2, iParam3, iParam4, uParam0, 10))
	{
		return false;
	}
	if (!func_710(uParam0, iParam1, iParam4, bParam5))
	{
		return false;
	}
	return true;
}

struct<16> func_673(int iParam0, var uParam1)
{
	struct<16> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0 = { func_351(iParam0, *uParam1, uParam1->f_4, 1) };
	Var0.f_4 = { *uParam1 };
	Var0.f_8 = iParam0;
	Var0.f_9 = uParam1->f_5;
	Var0.f_11 = uParam1->f_4;
	return Var0;
}

int func_674(int iParam0)
{
	return PLAYER::_GET_MOUNT_OF_PLAYER(PLAYER::GET_PLAYER_INDEX());
}

int func_675(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = func_217(iParam1, bParam2, 0, 0);
	iVar0 = (iVar0 + func_711(iParam0, iParam1));
	if (bParam3)
	{
		iVar0 = (iVar0 + func_712(iParam1, bParam4));
	}
	return iVar0;
}

void func_676()
{
	if (!func_345(Global_1940311.f_10893, 0))
	{
		Global_1940311.f_6 = 0;
	}
	else if ((((func_683(Global_1940311.f_10893, 1224357681) != 0 && Global_1940311.f_10892 != 0) && Global_1940311.f_10892 != -2074770370) && !Global_1915715.f_20638) && !Global_1915715.f_22504.f_1)
	{
		Global_1940311.f_6 = 1;
	}
	else
	{
		Global_1940311.f_6 = 0;
	}
}

bool func_677(int iParam0)
{
	return func_346(iParam0) == joaat("WEAPON");
}

bool func_678(int iParam0)
{
	var uVar0;

	if (func_200() != -1)
	{
		return false;
	}
	if (func_605(iParam0, 1048576))
	{
		return false;
	}
	if (WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return func_681(iParam0, &uVar0, 1, 0, 0, -1, 0);
	}
	return func_210(iParam0, 1);
}

void func_679(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (func_346(iParam0) != joaat("WEAPON"))
	{
		return;
	}
	iVar0 = func_630(iParam0, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		return;
	}
	if (bParam2 || !func_687(iVar0))
	{
		if (bParam2 || (!WEAPON::HAS_PED_GOT_WEAPON(Global_34, iVar0, 0, false) && func_217(iParam0, 0, 0, 0) == 0))
		{
			if (func_200() == -1)
			{
				func_631(iVar0);
			}
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				func_587(iParam0, iParam1, 0, 0, 0, 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_680(int iParam0, int iParam1)
{
	if (func_479(iParam0, 58855631))
	{
		func_613(iParam0, -915411861, iParam1, 1);
	}
}

bool func_681(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)
{
	struct<4> Var0;
	struct<10> Var4;
	int iVar26;
	int iVar27;

	func_713(&iParam0);
	if (!func_345(iParam0, 0) && !func_583(func_542(iParam0), 2))
	{
		return false;
	}
	if (!bParam3 && func_362(iParam0, joaat("DEFAULT")) == 0)
	{
		bParam3 = true;
	}
	if (func_677(iParam0) && WEAPON::_0x705BE297EEBDB95D(iParam0))
	{
		Var0 = { func_468(0) };
		Var4.f_9 = -1591664384;
		if (!func_470(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
		{
			return false;
		}
		else if (func_471(iParam0, &Var4, 1728382685 /* GXTEntry: "Right" */))
		{
			return false;
		}
		if (func_469(iParam0, 1))
		{
			if (!func_470(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
			{
				return false;
			}
			else if (func_471(iParam0, &Var4, -649335959 /* GXTEntry: "Left" */))
			{
				return false;
			}
		}
		return true;
	}
	iVar26 = iParam5;
	if (iParam5 < 0)
	{
		iVar26 = func_571(iParam0, uParam1, bParam3, bParam4);
	}
	if (iVar26 < 0)
	{
		return false;
	}
	else if (iVar26 == 0)
	{
		return true;
	}
	iVar27 = func_538(iParam0, *uParam1, uParam1->f_4, bParam4, bParam3, iParam6);
	if ((iVar27 + iParam2) > iVar26)
	{
		return true;
	}
	return false;
}

bool func_682()
{
	if (((((!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_34, -1) && !PED::IS_PED_USING_ANY_SCENARIO(Global_34)) && !func_714(Global_34, 1369124074)) && !func_714(Global_34, 713668775)) && !TASK::_0xEC7E480FF8BD0BED(Global_34)) && !PED::IS_PED_IN_ANY_VEHICLE(Global_34, false))
	{
		return true;
	}
	return false;
}

int func_683(int iParam0, int iParam1)
{
	struct<2> Var0[20];
	int iVar41;
	int iVar42;

	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_TAG_DATA(iParam0, &Var0, &iVar41, 20))
	{
		iVar42 = 0;
		while (iVar42 < iVar41)
		{
			if (Var0[iVar42 /*2*/].f_1 == iParam1)
			{
				return Var0[iVar42 /*2*/];
			}
			iVar42++;
		}
	}
	return 0;
}

void func_684(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = Global_39.f_3643[iVar1];
	MISC::SET_BIT(&uVar3, iVar2);
	Global_39.f_3643[iVar1] = uVar3;
}

void func_685(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;
		case 11:
			func_715(1);
			break;
		case 14:
			break;
		case 15:
			break;
		case 16:
			break;
		case 17:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(5, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(4, 0);
			func_716(1);
			break;
		case 18:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_716(2);
			break;
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_716(3);
			break;
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(7, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(6, 0);
			break;
		case 21:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(9, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(8, 0);
			break;
		case 30:
			break;
		case 10:
			break;
		case 12:
			break;
		case 13:
			break;
		case 31:
			break;
		case 32:
			func_717(1);
			break;
		case 33:
			func_718(1);
			break;
		case 34:
			func_719(1);
			break;
		case 35:
			break;
		case 36:
			func_720(0);
			break;
		case 37:
			func_721(0);
			break;
		case 38:
			func_722(0);
			break;
		case 39:
			break;
		case 40:
			break;
		case 41:
			break;
		case 42:
			break;
		case 1:
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		case 2:
			if (func_723() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
			{
				func_724("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", joaat("HUD_TOASTS"), 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			func_640(677, 0);
			break;
		case 3:
			if (func_723() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
			{
				func_724("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", joaat("HUD_TOASTS"), 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			func_640(678, 0);
			break;
		case 4:
			if (func_723() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4))
			{
				func_724("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", joaat("HUD_TOASTS"), 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			func_640(679, 0);
			break;
		case 5:
			if (func_723() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5))
			{
				func_724("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", joaat("HUD_TOASTS"), 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5);
			func_640(680, 0);
			break;
		case 23:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_WEAPON_DUALWIELD"), true);
			UNLOCK::_UNLOCK_SET_VISIBLE(joaat("SP_WEAPON_DUALWIELD"), true);
			WEAPON::_0x83B8D50EB9446BBA(PLAYER::PLAYER_PED_ID(), 1);
			break;
		case 47:
			if (func_200() == -1)
			{
				if (!func_210(1013902307, 1))
				{
					func_634(1013902307, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_200() == -1)
			{
				if (!func_210(1013902307, 1))
				{
					func_634(1013902307, 1, 752097756);
				}
				if (!func_210(142640135, 1))
				{
					func_634(142640135, 1, 752097756);
				}
			}
			break;
		case 48:
			if (func_200() == -1)
			{
				if (!func_210(786809402, 1))
				{
					func_634(786809402, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_200() == -1)
			{
				if (!func_210(786809402, 1))
				{
					func_634(786809402, 1, 752097756);
				}
				if (!func_210(-518019409, 1))
				{
					func_634(-518019409, 1, 752097756);
				}
			}
			break;
		case 22:
			PLAYER::_0x5B9813ECF7633FE8(0);
			break;
		case 24:
			break;
		case 25:
			break;
		case 26:
			break;
		case 27:
			break;
		case 28:
			break;
		case 29:
			break;
		case 43:
			break;
		case 44:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER"), true);
			Global_1940258.f_41 = 1;
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Enable", true, true);
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Disable", false, true);
			break;
		case 45:
			break;
		case 46:
			PLAYER::_0xA63FCAD3A6FEC6D2(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		case 51:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_POST_GANG1"), true);
			break;
		case 52:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_NATIVE_AMERICAN_DIALOGUE_RECEPTIVE"), true);
			break;
		case 53:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_NATIVE_AMERICAN_DIALOGUE_TRUSTED"), true);
			break;
		case 54:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("COMPENDIUM"), true);
			break;
		case 55:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_PEDS_REACT_TO_SICK_ATHUR"), true);
			break;
	}
}

bool func_686(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_UNLOCK(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if (UNLOCK::_UNLOCK_IS_VISIBLE(iVar0))
	{
		return true;
	}
	return false;
}

bool func_687(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_UNLOCK(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(iVar0))
	{
		return true;
	}
	return false;
}

void func_688(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_34, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < WEAPON::_GET_WEAPON_CLIP_SIZE(iParam0))
	{
		iVar2 = func_725(WEAPON::_GET_WEAPON_CLIP_SIZE(iParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_34, iParam0, iVar2);
		if (WEAPON::GET_MAX_AMMO(Global_34, &iVar1, iParam0) && WEAPON::GET_AMMO_IN_PED_WEAPON(Global_34, iParam0) > iVar1)
		{
			WEAPON::SET_PED_AMMO(Global_34, iParam0, iVar1);
		}
	}
}

int func_689(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<5> Var1;
	var uVar6;

	if (!func_345(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_362(iParam0, joaat("DEFAULT"));
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_350(iParam0, 0, 0) };
	if (func_681(iParam0, &Var1, iParam1, 0, 0, -1, 0))
	{
		return 0;
	}
	if (!func_208(0))
	{
		return 0;
	}
	if (!INVENTORY::_0xCB5D11F9508A928D(func_344(0), &uVar6, &Var1, iParam0, Var1.f_4, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

int func_690(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_345(iParam0, 0))
	{
		return 0;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam2))
	{
		return 0;
	}
	if (func_681(iParam0, uParam2, iParam3, bParam5, 0, -1, 0))
	{
		return 0;
	}
	if (!func_208(0))
	{
		return 0;
	}
	if (!INVENTORY::_0xCB5D11F9508A928D(func_344(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

void func_691(int iParam0)
{
	char* sVar0;
	char* sVar1;
	int iVar2;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_34) || Global_1940258.f_6)
	{
		return;
	}
	if (WEAPON::_IS_WEAPON_BOW(iParam0))
	{
		return;
	}
	sVar0 = "player_newWeaponType";
	sVar1 = "player_newWeaponTime";
	if (WEAPON::_IS_WEAPON_PISTOL(iParam0))
	{
		sVar0 = "player_newPistolWeaponType";
		sVar1 = "player_newPistolWeaponTime";
	}
	else if (WEAPON::_IS_WEAPON_REVOLVER(iParam0))
	{
		sVar0 = "player_newRevolverWeaponType";
		sVar1 = "player_newRevolverWeaponTime";
	}
	else if (WEAPON::_IS_WEAPON_RIFLE(iParam0))
	{
		sVar0 = "player_newRifleWeaponType";
		sVar1 = "player_newRifleWeaponTime";
	}
	else if (WEAPON::_IS_WEAPON_SHOTGUN(iParam0))
	{
		sVar0 = "player_newShotgunWeaponType";
		sVar1 = "player_newShotgunWeaponTime";
	}
	DECORATOR::DECOR_SET_INT(Global_34, sVar0, iParam0);
	iVar2 = func_337();
	func_726(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	DECORATOR::DECOR_SET_INT(Global_34, sVar1, iVar2);
}

int func_692(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_727(iParam0))
	{
		if (WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, joaat("AMMO_ARROW")) <= 0)
		{
			iVar0 = 10;
		}
		else
		{
			iVar0 = 0;
		}
	}
	else if (WEAPON::_0x705BE297EEBDB95D(iParam0))
	{
		if (WEAPON::_IS_WEAPON_SNIPER(iParam0))
		{
			iVar0 = 12;
		}
		else
		{
			iVar0 = WEAPON::_GET_WEAPON_CLIP_SIZE(iParam0) * 4;
		}
		iVar1 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0));
		if (iVar1 >= iVar0)
		{
			iVar0 = 0;
		}
		else if (iVar1 > 0)
		{
			iVar0 = (iVar0 - iVar1);
		}
	}
	return iVar0;
}

bool func_693()
{
	return false;
}

bool func_694(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0));
}

int func_695(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_696(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(iParam0);
	if (WEAPON::_0x705BE297EEBDB95D(iVar0))
	{
		if (WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
		{
			if (!func_454(49))
			{
				if (!func_454(47))
				{
					return 149;
				}
				return 151;
			}
		}
		else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
		{
			if (!func_454(50))
			{
				if (!func_454(48))
				{
					return 150;
				}
				return 152;
			}
		}
	}
	return 153;
}

void func_697(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_698(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return false;
	}
	if (func_728(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_729(iParam0))
	{
		return false;
	}
	if (func_730(iParam0))
	{
		return false;
	}
	if ((Global_1900736.f_67 && !func_703(iParam0, 1)) || func_731(32768))
	{
		if (!func_703(iParam0, 262144) || !Global_1904651.f_8686)
		{
			return false;
		}
	}
	if (!func_732())
	{
		return false;
	}
	return true;
}

void func_699(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1904651[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1904651[iParam0] = uVar0;
}

int func_700(int iParam0, bool bParam1, int iParam2)
{
	float fVar0;
	struct<13> Var1;
	int iVar24;
	int iVar25;

	if (func_200() == 0)
	{
		return 0;
	}
	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_210(joaat("PROVISION_TRINKET_ELK_ANTLER"), 1))
	{
		fVar0 = (fVar0 + 0.1f);
	}
	Var1.f_1 = 10;
	Var1.f_12 = 10;
	MISC::_0x48E4D50F87A96AA5(Global_34, 1, 1, iParam0, &Var1, 0);
	iVar24 = 0;
	while (iVar24 < Var1)
	{
		if (Var1.f_1[iVar24] == joaat("CURRENCY_CASH"))
		{
			return BUILTIN::CEIL((IntToFloat(Var1.f_12[iVar24]) * fVar0));
		}
		else
		{
			iVar25 = Var1.f_1[iVar24];
			if (func_345(iVar25, 0) && func_479(iVar25, -1921346699))
			{
				return BUILTIN::CEIL((IntToFloat(Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_701(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		if (bParam3)
		{
			func_733(iParam0, 1000);
			return;
		}
		sParam1 = "FEED_MONEY_EARN";
	}
	func_617(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
}

void func_702(int iParam0, bool bParam1, float fParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = BUILTIN::ROUND((BUILTIN::TO_FLOAT(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_734() || func_735())
		{
			iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_617(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_TOTAL_TAKE"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
		}
		func_617(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(iVar1, 752097756);
		func_638(func_519(joaat("CAREER_CASH")), iVar1);
	}
}

bool func_703(int iParam0, int iParam1)
{
	return (Global_1904651.f_33[iParam0 /*9*/].f_2 && iParam1) != 0;
}

char* func_704(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PROVISION_FISH_BLUEGILL";
		case 1:
			return "PROVISION_FISH_BULLHEAD_CATFISH";
		case 2:
			return "PROVISION_FISH_CHAIN_PICKEREL";
		case 3:
			return "PROVISION_FISH_CHANNEL_CATFISH";
		case 4:
			return "PROVISION_FISH_LAKE_STURGEON";
		case 5:
			return "PROVISION_FISH_LARGEMOUTH_BASS";
		case 6:
			return "PROVISION_FISH_LONGNOSE_GAR";
		case 7:
			return "PROVISION_FISH_MUSKIE";
		case 8:
			return "PROVISION_FISH_NORTHERN_PIKE";
		case 9:
			return "PROVISION_FISH_PERCH";
		case 10:
			return "PROVISION_FISH_REDFIN_PICKEREL";
		case 11:
			return "PROVISION_FISH_ROCK_BASS";
		case 12:
			return "PROVISION_FISH_SMALLMOUTH_BASS";
		case 13:
			return "PROVISION_FISH_SOCKEYE_SALMON";
		case 14:
			return "PROVISION_FISH_STEELHEAD_TROUT";
		default:
			break;
	}
	return "FISHTYPE_UNKNOWN";
}

int func_705(int iParam0)
{
	var uVar0;

	if (!func_736(iParam0, &uVar0, joaat("INVENTORY"), 0, 0, joaat("UI_ITEMVIEWER")))
	{
		return joaat("_PLACEHOLDER");
	}
	return uVar0;
}

bool func_706(int iParam0, var uParam1)
{
	var uVar0;

	uVar0 = NETSHOPPING::_0x6C9F12700BCE69F4(iParam0, uParam1);
	if (iParam0 == joaat("USE"))
	{
		if ((func_737(uParam1->f_8, iParam0, uVar0, 2048) || func_737(uParam1->f_8, iParam0, uVar0, 32768)) || func_737(uParam1->f_8, iParam0, uVar0, 65536))
		{
			return false;
		}
	}
	else if (iParam0 == 1168099063)
	{
		if (((func_737(uParam1->f_8, iParam0, uVar0, 4) || func_737(uParam1->f_8, iParam0, uVar0, 256)) || func_737(uParam1->f_8, iParam0, uVar0, 65536)) || func_737(uParam1->f_8, iParam0, uVar0, 131072))
		{
			return false;
		}
	}
	else if (iParam0 == joaat("SPEND"))
	{
		if (((func_737(uParam1->f_8, iParam0, uVar0, 1) || func_737(uParam1->f_8, iParam0, uVar0, 8)) || func_737(uParam1->f_8, iParam0, uVar0, 65536)) || func_737(uParam1->f_8, iParam0, uVar0, 32))
		{
			return false;
		}
	}
	else if (iParam0 == joaat("SELL"))
	{
		if (((func_737(uParam1->f_8, iParam0, uVar0, 1) || func_737(uParam1->f_8, iParam0, uVar0, 16)) || func_737(uParam1->f_8, iParam0, uVar0, 2)) || func_737(uParam1->f_8, iParam0, uVar0, 65536))
		{
			return false;
		}
	}
	else if (((func_737(uParam1->f_8, iParam0, uVar0, 8) || func_737(uParam1->f_8, iParam0, uVar0, 4096)) || func_737(uParam1->f_8, iParam0, uVar0, 256)) || func_737(uParam1->f_8, iParam0, uVar0, 65536))
	{
		return false;
	}
	return true;
}

bool func_707(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 16, uParam2, 0);
}

int func_708(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			func_738(iParam1, 1, 0, 0);
			return iParam1;
		}
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iParam1) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	func_738(iParam1, 2, 0, 0);
	return -1;
}

int func_709(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		func_738(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

bool func_710(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	*iParam1 = 0;
	if (*uParam0 != 10)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iParam2 < 1)
		{
			Jump @253; //curOff = 37
		}
		else if ((uParam0[iVar0 /*6*/])->f_4 == 0)
		{
			Jump @244; //curOff = 55
		}
		else if ((uParam0[iVar0 /*6*/])->f_5 == 0)
		{
			Jump @244; //curOff = 73
		}
		else if (func_739(uParam0[iVar0 /*6*/]))
		{
		}
		else
		{
			if (iVar0 != *iParam1)
			{
				*(uParam0[*iParam1 /*6*/]) = { *(uParam0[iVar0 /*6*/]) };
				(uParam0[*iParam1 /*6*/])->f_4 = (uParam0[iVar0 /*6*/])->f_4;
			}
			if ((uParam0[iVar0 /*6*/])->f_5 > iParam2)
			{
				(uParam0[*iParam1 /*6*/])->f_5 = iParam2;
				iParam2 = 0;
			}
			else
			{
				(uParam0[*iParam1 /*6*/])->f_5 = (uParam0[iVar0 /*6*/])->f_5;
				iParam2 = (iParam2 - (uParam0[*iParam1 /*6*/])->f_5);
			}
			if (iVar0 > *iParam1)
			{
				*(uParam0[iVar0 /*6*/]) = { func_536() };
				(uParam0[iVar0 /*6*/])->f_4 = 0;
				(uParam0[iVar0 /*6*/])->f_5 = 0;
			}
			*iParam1++;
		}
		iVar0++;
	}
	if (bParam3 && iParam2 > 0)
	{
		*iParam1 = 0;
		return false;
	}
	return true;
}

int func_711(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (func_740(iParam1))
		{
			iVar0 = 0;
			iVar1 = 0;
			while (iVar1 < 3)
			{
				if (Global_1904087.f_113[iVar1 /*96*/].f_1 == iParam1)
				{
					iVar0++;
				}
				iVar1++;
			}
			return iVar0;
		}
		else
		{
			return func_741(INVENTORY::_INVENTORY_GET_PED_INVENTORY_ID(iParam0), iParam1);
		}
	}
	return 0;
}

int func_712(int iParam0, bool bParam1)
{
	if (!bParam1 || func_742())
	{
		return func_538(iParam0, func_467(1), -2015960939, 1, 1, 0);
	}
	return 0;
}

int func_713(int iParam0)
{
	if (!func_345(*iParam0, 0))
	{
		return 0;
	}
	if (!func_743(*iParam0))
	{
		return 0;
	}
	switch (*iParam0)
	{
		case joaat("UPGRADE_FSH_BAIT_CRICKET_TIN"):
			*iParam0 = joaat("UPGRADE_FSH_BAIT_CRICKET");
			break;
		case joaat("UPGRADE_FSH_BAIT_WORM_CAN"):
			*iParam0 = joaat("UPGRADE_FSH_BAIT_WORM");
			break;
		case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
			*iParam0 = joaat("CONSUMABLE_COCAINE_CHEWING_GUM");
			break;
		case joaat("CONSUMABLE_CHEWING_TOBACCO_USED"):
			*iParam0 = joaat("CONSUMABLE_CHEWING_TOBACCO");
			break;
		case joaat("CONSUMABLE_CIGARETTE_BOX_USED"):
			*iParam0 = joaat("CONSUMABLE_CIGARETTE_BOX");
			break;
		default:
			return 0;
	}
	return 1;
}

bool func_714(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

void func_715(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_34))
	{
		return;
	}
	if (bParam0)
	{
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 15, 1);
	}
	else
	{
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 15, 0);
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 1, 1);
	}
}

void func_716(int iParam0)
{
	int iVar0;

	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1956200.f_5.f_7))
	{
		return;
	}
	if (DATABINDING::_DATABINDING_GET_ARRAY_COUNT(Global_1956200.f_5.f_7) > iParam0)
	{
		iVar0 = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(Global_1956200.f_5.f_7, iParam0);
		if (iVar0 == Global_1956200.f_5.f_14[iParam0 /*102*/])
		{
			return;
		}
	}
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1956200.f_5.f_7, iParam0, "pause_info_panel_list", Global_1956200.f_5.f_14[iParam0 /*102*/]);
}

void func_717(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_34))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_34) || PED::IS_PED_INJURED(Global_34))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_34, 440, !bParam0);
}

void func_718(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_34))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_34) || PED::IS_PED_INJURED(Global_34))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_34, 439, !bParam0);
}

void func_719(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_34))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_34) || PED::IS_PED_INJURED(Global_34))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_34, 438, !bParam0);
}

void func_720(bool bParam0)
{
	int iVar0;

	iVar0 = 398076311;
	if (bParam0)
	{
		HUD::_HIDE_HUD_COMPONENT(iVar0);
	}
	else
	{
		HUD::_DISPLAY_HUD_COMPONENT(iVar0);
	}
}

void func_721(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 50;
	iVar1 = PLAYER::PLAYER_ID();
	if (bParam0)
	{
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 0, 1);
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 1, 1);
	}
	else
	{
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 0, 0);
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 1, 0);
	}
}

void func_722(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 49;
	iVar1 = PLAYER::PLAYER_ID();
	if (bParam0)
	{
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 0, 1);
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 1, 1);
	}
	else
	{
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 0, 0);
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 1, 0);
	}
}

bool func_723()
{
	return true;
	if (Global_1572887.f_13 == 0)
	{
		return true;
	}
	return Global_39.f_1;
}

var func_724(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	struct<4> Var0;
	struct<8> Var13;
	var uVar21;

	Var0 = -2;
	Var0 = iParam4;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam8;
	Var13.f_7 = 1;
	Var13 = iParam7;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = iParam2;
	Var13.f_5 = iParam3;
	Var13.f_7 = 1;
	uVar21 = UIFEED::_SHOW_ADVANCED_NOTIFICATION(&Var0, &Var13, iParam9, iParam10);
	return uVar21;
}

int func_725(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_726(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_744(*iParam0);
	iVar1 = func_745(*iParam0);
	iVar2 = func_746(*iParam0);
	iVar3 = func_338(*iParam0);
	iVar4 = func_339(*iParam0);
	iVar5 = func_747(*iParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_748(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_748(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	if (!bParam7)
	{
		iVar0 = (iVar0 + iParam6);
	}
	func_749(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_727(int iParam0)
{
	return WEAPON::_IS_WEAPON_BOW(iParam0);
}

bool func_728(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_17411.f_2565[iParam0], iParam1);
}

bool func_729(int iParam0)
{
	if (func_703(iParam0, 4))
	{
		return false;
	}
	return true;
}

bool func_730(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (Global_1904651.f_33[iParam0 /*9*/].f_2 & 98304 == 0)
	{
		return false;
	}
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	iVar0 = 0;
	while (iVar0 < Global_39.f_3534)
	{
		if (Global_39.f_3534[iVar0 /*3*/].f_2 == iParam0)
		{
			iVar3 = 3;
			if (Global_1904651.f_33[iParam0 /*9*/].f_2 & 131072 != 0)
			{
				iVar3 = 2;
			}
			if (Global_1904651.f_33[iParam0 /*9*/].f_2 & 524288 != 0)
			{
				iVar3 = 5;
			}
			iVar2 = (iVar1 - Global_39.f_3534[iVar0 /*3*/]);
			if (Global_39.f_3534[iVar0 /*3*/].f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && Global_1904651.f_33[iParam0 /*9*/].f_2 & 32768 != 0)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_731(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

bool func_732()
{
	if (!func_750())
	{
		return false;
	}
	return Global_1904651.f_8684;
}

void func_733(int iParam0, int iParam1)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (func_751())
	{
		Global_1913504.f_125 = MISC::GET_GAME_TIMER();
		Global_1913504.f_126 = iParam1;
	}
	Global_1913504.f_127 = (Global_1913504.f_127 + iParam0);
}

bool func_734()
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

bool func_735()
{
	return DLC::IS_DLC_PRESENT(joaat("DLC_ULTIMATEEDITION"));
}

bool func_736(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<19> Var3;

	Var3.f_2 = 5;
	Var3.f_18 = 8;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_UI_DATA(iParam0, &Var3))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(Var3.f_2[iVar0 /*3*/]))
			{
				Jump @230; //curOff = 56
			}
			else if (MISC::IS_STRING_NULL_OR_EMPTY(Var3.f_2[iVar0 /*3*/].f_1))
			{
			}
			else
			{
				iVar1 = MISC::GET_HASH_KEY(Var3.f_2[iVar0 /*3*/]);
				iVar2 = MISC::GET_HASH_KEY(Var3.f_2[iVar0 /*3*/].f_1);
				if (iParam2 != 0 && Var3.f_2[iVar0 /*3*/].f_2 != iParam2)
				{
					Jump @230; //curOff = 137
				}
				else if (iParam3 != 0 && iVar2 != iParam3)
				{
					Jump @230; //curOff = 160
				}
				else if (iParam4 != 0 && iVar1 != iParam4)
				{
					Jump @230; //curOff = 183
				}
				else if (iParam5 != 0 && iVar2 == iParam5)
				{
				}
				else
				{
					*uParam1 = iVar1;
					uParam1->f_1 = iVar2;
					uParam1->f_2 = iParam2;
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

int func_737(var uParam0, int iParam1, var uParam2, int iParam3)
{
	if (func_122(uParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

void func_738(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1293346.f_20)
	{
		if (Global_1293346.f_20.f_1[iVar0 /*21*/] == iParam0)
		{
			if (Global_1293346.f_20.f_1[iVar0 /*21*/].f_1 == iParam1)
			{
			}
			else
			{
				Global_1293346.f_20.f_1[iVar0 /*21*/].f_1 = iParam1;
			}
			if (iParam2 != 0 && iParam3 != 0)
			{
				Global_1293346.f_20.f_1[iVar0 /*21*/].f_2 = iParam2;
				Global_1293346.f_20.f_1[iVar0 /*21*/].f_3 = iParam3;
			}
			return;
		}
		iVar0++;
	}
	func_752(iParam0, iParam1, iParam2, iParam3);
}

bool func_739(var uParam0)
{
	if (!func_753(uParam0))
	{
		return false;
	}
	return INVENTORY::_0x0137C77A2EC64536(uParam0);
}

bool func_740(int iParam0)
{
	if (!func_612(iParam0, 1955773996))
	{
		return false;
	}
	if (!func_754(iParam0, 1))
	{
		return false;
	}
	return true;
}

int func_741(int iParam0, int iParam1)
{
	struct<4> Var0;
	int iVar4;

	if (!func_345(iParam1, 0))
	{
		return 0;
	}
	Var0 = { func_755(iParam0, iParam1) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var0))
	{
		return 0;
	}
	iVar4 = INVENTORY::_0xC97E0D2302382211(iParam0, &Var0, 0);
	return iVar4;
}

bool func_742()
{
	int iVar0;

	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	iVar0 = PLAYER::_GET_VEHICLE_OWNED_BY_PLAYER(PLAYER::PLAYER_ID());
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (!func_756(iVar0))
	{
		return false;
	}
	return true;
}

bool func_743(int iParam0)
{
	return func_479(iParam0, 1279601681);
}

int func_744(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_757(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_745(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_746(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_747(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_748(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
		default:
			break;
	}
	return 30;
}

void func_749(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_758(iParam0, iParam6);
	func_759(iParam0, iParam5);
	func_760(iParam0, iParam4);
	func_761(iParam0, iParam3);
	func_762(iParam0, iParam2);
	func_763(iParam0, iParam1);
}

bool func_750()
{
	if (NETWORK::_0xDD73C9838CE7181D())
	{
		return true;
	}
	return false;
}

bool func_751()
{
	return Global_1913504.f_127 == 0;
}

void func_752(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (Global_1293346.f_20 < 20)
	{
		Global_1293346.f_20++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			Global_1293346.f_20.f_1[iVar0 /*21*/] = { Global_1293346.f_20.f_1[iVar0 + 1 /*21*/] };
			iVar0++;
		}
	}
	func_764(&(Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/]));
	Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/] = iParam0;
	Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/].f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/].f_2 = iParam2;
		Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/].f_3 = iParam3;
	}
}

bool func_753(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

bool func_754(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_765(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return iVar0 > iParam1;
}

struct<4> func_755(int iParam0, int iParam1)
{
	struct<5> Var0;

	Var0 = { func_766(iParam0) };
	return func_767(iParam0, iParam1, Var0, Var0.f_4);
}

bool func_756(int iParam0)
{
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("HUNTERCART01"):
			return true;
		default:
			break;
	}
	return false;
}

int func_757(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_758(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam1 > 1930 || iParam1 < 1866)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 2080374784);
	if (iParam1 < 1898)
	{
		*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT((1898 - iParam1), 26));
		*iParam0 |= -2147483648;
	}
	else
	{
		*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT((iParam1 - 1898), 26));
		*iParam0 = (*iParam0 - *iParam0 & -2147483648);
	}
}

void func_759(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_760(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_745(*iParam0);
	iVar1 = func_744(*iParam0);
	if (iParam1 < 1 || iParam1 > func_748(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_761(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_762(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_763(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

void func_764(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_768(&(uParam0->f_4));
}

int func_765(int iParam0)
{
	var uVar0;

	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_SATCHEL_DATA(iParam0, &uVar0))
	{
		return -1;
	}
	return uVar0;
}

struct<5> func_766(int iParam0)
{
	struct<5> Var0;

	Var0 = { func_767(iParam0, joaat("CHARACTER"), func_536(), -1591664384) };
	Var0.f_4 = 1084182731;
	return Var0;
}

struct<4> func_767(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4, var uParam5, int iParam6)
{
	struct<4> Var0;

	if (!func_345(iParam1, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(iParam0, &uParam2, iParam1, iParam6, &Var0);
	return Var0;
}

void func_768(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = -142743235;
	uParam0->f_8 = 0;
	uParam0->f_8.f_1 = 0;
	uParam0->f_8.f_2 = 0;
	uParam0->f_8.f_3 = 0;
	StringCopy(&(uParam0->f_12), "", 32);
	uParam0->f_16 = -1;
}

