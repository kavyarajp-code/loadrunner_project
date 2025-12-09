Login()
{

	lr_start_transaction("login");

	web_add_auto_header("Accept-Language", 
		"en-GB,en;q=0.9");

	lr_think_time(18);

	web_url("login", 
		"URL=https://demowebshop.tricentis.com/login", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://demowebshop.tricentis.com/", 
		"Snapshot=t34.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("favicon.ico_2", 
		"URL=https://demowebshop.tricentis.com/favicon.ico", 
		"Resource=1", 
		"RecContentType=image/x-icon", 
		"Referer=https://demowebshop.tricentis.com/login", 
		"Snapshot=t35.inf", 
		LAST);

	web_submit_data("login_2",
		"Action=https://demowebshop.tricentis.com/login",
		"Method=POST",
		"EncodeAtSign=YES",
		"RecContentType=text/html",
		"Referer=https://demowebshop.tricentis.com/login",
		"Snapshot=t36.inf",
		"Mode=HTTP",
		ITEMDATA,
		"Name=Email", "Value={Email}", ENDITEM,
		"Name=Password", "Value=kavyaraj", ENDITEM,
		"Name=RememberMe", "Value=false", ENDITEM,
		LAST);

	web_concurrent_start(NULL);

	web_url("nivo-slider.css_2", 
		"URL=https://demowebshop.tricentis.com/Plugins/Widgets.NivoSlider/Content/nivoslider/nivo-slider.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://demowebshop.tricentis.com/", 
		"Snapshot=t37.inf", 
		LAST);

	web_url("default.css_2", 
		"URL=https://demowebshop.tricentis.com/Plugins/Widgets.NivoSlider/Content/nivoslider/themes/default/default.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://demowebshop.tricentis.com/", 
		"Snapshot=t38.inf", 
		LAST);

	web_url("favicon.ico_3", 
		"URL=https://demowebshop.tricentis.com/favicon.ico", 
		"Resource=1", 
		"RecContentType=image/x-icon", 
		"Referer=https://demowebshop.tricentis.com/", 
		"Snapshot=t39.inf", 
		LAST);

	web_concurrent_end(NULL);

	lr_end_transaction("login",LR_AUTO);

	return 0;
}
