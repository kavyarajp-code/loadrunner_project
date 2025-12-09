Buyitem()
{

	lr_start_transaction("buyitem");

	web_add_auto_header("Accept-Language", 
		"en-GB,en;q=0.9");

	lr_think_time(30);

/*Correlation comment - Do not change!  Original value='kavyaa@gmail.com' Name ='Email' Type ='RecordReplay'*/
	web_reg_save_param_regexp(
		"ParamName=Email",
		"RegExp=\">(.*?)</a",
		SEARCH_FILTERS,
		"Scope=Body",
		LAST);

	web_url("cart", 
		"URL=https://demowebshop.tricentis.com/cart", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://demowebshop.tricentis.com/books", 
		"Snapshot=t55.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("0000130_computing-and-internet_80.jpeg", 
		"URL=https://demowebshop.tricentis.com/content/images/thumbs/0000130_computing-and-internet_80.jpeg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://demowebshop.tricentis.com/cart", 
		"Snapshot=t56.inf", 
		LAST);

	web_url("favicon.ico_5", 
		"URL=https://demowebshop.tricentis.com/favicon.ico", 
		"Resource=1", 
		"RecContentType=image/x-icon", 
		"Referer=https://demowebshop.tricentis.com/cart", 
		"Snapshot=t57.inf", 
		LAST);

	web_concurrent_end(NULL);

	lr_think_time(10);

	web_submit_data("cart_2", 
		"Action=https://demowebshop.tricentis.com/cart", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"RecContentType=text/html", 
		"Referer=https://demowebshop.tricentis.com/cart", 
		"Snapshot=t58.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=itemquantity6109139", "Value=1", ENDITEM, 
		"Name=discountcouponcode", "Value=", ENDITEM, 
		"Name=giftcardcouponcode", "Value=", ENDITEM, 
		"Name=CountryId", "Value=0", ENDITEM, 
		"Name=StateProvinceId", "Value=0", ENDITEM, 
		"Name=ZipPostalCode", "Value=", ENDITEM, 
		"Name=termsofservice", "Value=on", ENDITEM, 
		"Name=checkout", "Value=checkout", ENDITEM, 
		LAST);

	web_concurrent_start(NULL);

	web_url("public.onepagecheckout.js", 
		"URL=https://demowebshop.tricentis.com/Scripts/public.onepagecheckout.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=https://demowebshop.tricentis.com/onepagecheckout", 
		"Snapshot=t59.inf", 
		LAST);

	web_url("public.accordion.js", 
		"URL=https://demowebshop.tricentis.com/Scripts/public.accordion.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=https://demowebshop.tricentis.com/onepagecheckout", 
		"Snapshot=t60.inf", 
		LAST);

	web_url("favicon.ico_6", 
		"URL=https://demowebshop.tricentis.com/favicon.ico", 
		"Resource=1", 
		"RecContentType=image/x-icon", 
		"Referer=https://demowebshop.tricentis.com/onepagecheckout", 
		"Snapshot=t61.inf", 
		LAST);

	web_concurrent_end(NULL);

	lr_end_transaction("buyitem",LR_AUTO);

	lr_start_transaction("logout");

	return 0;
}
