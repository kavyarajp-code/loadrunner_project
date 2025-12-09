Logout()
{

	web_add_auto_header("Accept-Language", 
		"en-GB,en;q=0.9");

	lr_think_time(18);

	web_url("logout", 
		"URL=https://demowebshop.tricentis.com/logout", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://demowebshop.tricentis.com/onepagecheckout", 
		"Snapshot=t62.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("nivo-slider.css_3", 
		"URL=https://demowebshop.tricentis.com/Plugins/Widgets.NivoSlider/Content/nivoslider/nivo-slider.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://demowebshop.tricentis.com/", 
		"Snapshot=t63.inf", 
		LAST);

	web_url("default.css_3", 
		"URL=https://demowebshop.tricentis.com/Plugins/Widgets.NivoSlider/Content/nivoslider/themes/default/default.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://demowebshop.tricentis.com/", 
		"Snapshot=t64.inf", 
		LAST);

	web_url("favicon.ico_7", 
		"URL=https://demowebshop.tricentis.com/favicon.ico", 
		"Resource=1", 
		"RecContentType=image/x-icon", 
		"Referer=https://demowebshop.tricentis.com/", 
		"Snapshot=t65.inf", 
		LAST);

	web_concurrent_end(NULL);

	return 0;
}