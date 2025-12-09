Addtocart()
{

	lr_start_transaction("addtocart");

	web_add_header("Accept-Language", 
		"en-GB,en;q=0.9");

	web_concurrent_start(NULL);

	web_url("top-menu-list-image.png", 
		"URL=https://demowebshop.tricentis.com/Themes/DefaultClean/Content/images/top-menu-list-image.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://demowebshop.tricentis.com/Themes/DefaultClean/Content/styles.css", 
		"Snapshot=t40.inf", 
		LAST);

	web_add_header("Accept-Language", 
		"en-GB,en;q=0.9");

	web_url("top-menu-background.png", 
		"URL=https://demowebshop.tricentis.com/Themes/DefaultClean/Content/images/top-menu-background.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://demowebshop.tricentis.com/Themes/DefaultClean/Content/styles.css", 
		"Snapshot=t41.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_auto_header("Accept-Language", 
		"en-GB,en;q=0.9");

	lr_think_time(14);

	web_url("books", 
		"URL=https://demowebshop.tricentis.com/books", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://demowebshop.tricentis.com/", 
		"Snapshot=t42.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("0000208_fiction-ex_125.jpeg", 
		"URL=https://demowebshop.tricentis.com/content/images/thumbs/0000208_fiction-ex_125.jpeg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://demowebshop.tricentis.com/books", 
		"Snapshot=t43.inf", 
		LAST);

	web_url("0000209_copy-of-computing-and-internet-ex_125.jpeg", 
		"URL=https://demowebshop.tricentis.com/content/images/thumbs/0000209_copy-of-computing-and-internet-ex_125.jpeg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://demowebshop.tricentis.com/books", 
		"Snapshot=t44.inf", 
		LAST);

	web_url("0000130_computing-and-internet_125.jpeg", 
		"URL=https://demowebshop.tricentis.com/content/images/thumbs/0000130_computing-and-internet_125.jpeg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://demowebshop.tricentis.com/books", 
		"Snapshot=t45.inf", 
		LAST);

	web_url("0000133_fiction_125.jpeg", 
		"URL=https://demowebshop.tricentis.com/content/images/thumbs/0000133_fiction_125.jpeg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://demowebshop.tricentis.com/books", 
		"Snapshot=t46.inf", 
		LAST);

	web_url("0000131_health-book_125.jpeg", 
		"URL=https://demowebshop.tricentis.com/content/images/thumbs/0000131_health-book_125.jpeg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://demowebshop.tricentis.com/books", 
		"Snapshot=t48.inf", 
		LAST);

	web_url("0000132_science_125.jpeg", 
		"URL=https://demowebshop.tricentis.com/content/images/thumbs/0000132_science_125.jpeg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://demowebshop.tricentis.com/books", 
		"Snapshot=t49.inf", 
		LAST);

	web_url("favicon.ico_4", 
		"URL=https://demowebshop.tricentis.com/favicon.ico", 
		"Resource=1", 
		"RecContentType=image/x-icon", 
		"Referer=https://demowebshop.tricentis.com/books", 
		"Snapshot=t50.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_url("ico-arrow-r.gif", 
		"URL=https://demowebshop.tricentis.com/Themes/DefaultClean/Content/images/ico-arrow-r.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://demowebshop.tricentis.com/Themes/DefaultClean/Content/styles.css", 
		"Snapshot=t47.inf", 
		LAST);

	lr_think_time(4);

	web_url("ajax_loader_large.gif", 
		"URL=https://demowebshop.tricentis.com/Themes/DefaultClean/Content/images/ajax_loader_large.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://demowebshop.tricentis.com/Themes/DefaultClean/Content/styles.css", 
		"Snapshot=t51.inf", 
		LAST);

	web_custom_request("1", 
		"URL=https://demowebshop.tricentis.com/addproducttocart/catalog/13/1/1", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://demowebshop.tricentis.com/books", 
		"Snapshot=t52.inf", 
		"Mode=HTTP", 
		"EncType=", 
		LAST);

	web_concurrent_start(NULL);

	web_url("ico-close-notification-bar.png", 
		"URL=https://demowebshop.tricentis.com/Themes/DefaultClean/Content/images/ico-close-notification-bar.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://demowebshop.tricentis.com/Themes/DefaultClean/Content/styles.css", 
		"Snapshot=t53.inf", 
		LAST);

	web_url("0000130_computing-and-internet_47.jpeg", 
		"URL=https://demowebshop.tricentis.com/content/images/thumbs/0000130_computing-and-internet_47.jpeg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://demowebshop.tricentis.com/books", 
		"Snapshot=t54.inf", 
		LAST);

	web_concurrent_end(NULL);

	lr_end_transaction("addtocart",LR_AUTO);

	return 0;
}
