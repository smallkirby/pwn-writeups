if(window.BrowserSupport={getBrowser:function(e,t){for(var r=0;r<e.length;r++){var i=e[r].string,n=e[r].prop;if(this.versionSearchString=e[r].versionSearch||e[r].identity,i&&-1!=i.indexOf(e[r].subString))return e[r];if(n&&t&&-1!=t.indexOf(e[r].identity)||!t)return e[r]}return null},getVersion:function(e){var t=new RegExp(this.versionSearchString+"/? ?:?([0-9]+(\\.?[0-9]+)*)"),r=e.match(t);return r?r[1].split("."):null},dataBrowser:function(e){return[{string:e.userAgent,subString:"OPR",identity:"Opera",versionSearch:"OPR",min:[50,0],link:"https://www.opera.com/"},{string:e.userAgent,subString:"Edge",identity:"Edge",min:[15,15063],link:"https://www.microsoft.com/windows/microsoft-edge"},{string:e.userAgent,subString:"Chrome",identity:"Chrome",min:[65,0],link:"https://www.google.com/chrome"},{string:e.userAgent,subString:"Apple",identity:"Safari",versionSearch:"Version",min:[10,0],mobile_min:[10,3],link:"https://www.apple.com/safari/"},{prop:window.opera,identity:"Opera",versionSearch:"Version",min:[15,0],link:"https://www.opera.com/"},{string:e.userAgent,subString:"Firefox",identity:"Firefox",min:[43,0],link:"https://getfirefox.com"},{string:e.userAgent,subString:"MSIE",identity:"Explorer",versionSearch:"MSIE",min:[99,0],link:"https://www.google.com/chrome"},{string:e.userAgent,subString:"Trident",identity:"Explorer",versionSearch:"rv",min:[99,0],link:"https://www.google.com/chrome"}]},blacklist:["Opera Mini","IEMobile"],getSupported:function(e){e||(e=navigator);var t=this.dataBrowser(e),r=this.getBrowser(t,e.userAgent),i=this.getVersion(e.userAgent),n=!!e.userAgent.match(/Mobile/);if(r&&i){for(var o,s=n&&r.mobile_min?r.mobile_min:r.min,l=0;l<s.length;l++){var g=s[l];void 0===o&&i[l]&&(i[l]<g&&(o=!1),i[l]>g&&(o=!0))}for(l=0;l<this.blacklist.length;l++){var a=new RegExp(this.blacklist[l]);e.userAgent.match(a)&&(o=!1)}return void 0===o&&(o=r.min.length<=i.length),{browser:r.identity,version:i.join("."),supported:o,link:r.link,mobile:n}}}},!1!==window.__enforceBrowserSupport){var browser=BrowserSupport.getSupported();browser&&!1===browser.supported&&setTimeout(function(){var e=document.createElement("div");e.id="outdated_banner",e.style.backgroundColor="#00d38f",e.style.color="#06070d",e.style.width="100%",e.style.height="auto",e.style.lineHeight="14px",e.style.textAlign="center",e.style.position="absolute",e.style.top="-1px",e.style.zIndex=9999999,e.style.fontFamily="Helvetica, Arial, sans-serif",e.style.fontSize="14px",e.style.padding="16px 0px",e.innerHTML='We don\'t support your current browser version. Please <a style="font-weight: bold; color: #06070d" href="'+browser.link+'">upgrade your browser</a>.<a href="#" id="x-button" style="color: #06070d; position: fixed; top: 0px; right: 10px; font-size: 18px; line-height: normal; text-decoration: none; " onclick="document.getElementById(\'outdated_banner\').style.top = \'-1000px\'; document.getElementById(\'x-button\').style.top = \'-1000px\'; return false;">&times;</a>',document.body.append(e)},1)}