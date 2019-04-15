﻿
<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="Info.aspx.cs" Inherits="FindOutPages.Info" %>
<!DOCTYPE html>
<html xmlns="http://www.w3.org/1999/xhtml" lang="en">

<head runat="server">
  <title>Programs | Saint Joseph's College of Marian University - Indianapolis</title>
  <meta name="description" content="Our two year program will leave with the confidence and passion to not only take on the jobs of today but the upcoming careers of the future.">
  <!--#include virtual="/twoyearcollege/inc/headscripts.inc"-->
  <!--#include virtual="/twoyearcollege/inc/gtm.inc"-->
</head>

<body class="twoyear" id="programspage">
  <form id="form1" runat="server">
    <!--gtm(noscript)-->
    <noscript><iframe src="https://www.googletagmanager.com/ns.html?id=GTM-N4R8CJ9" height="0" width="0" style="display:none;visibility:hidden"></iframe></noscript>
    <!--/gtm(noscript)-->

    <!--sticky nav and responsive nav for all screens-->
    <div data-sticky-container id="stickitcontainer">
      <div data-sticky data-options="marginTop:0;" data-sticky-on="small">
        <div class="title-bar show-for-small-only" data-responsive-toggle="sjcmenu">
          <button class="menu-icon" type="button" data-toggle="sjcmenu" aria-label="open site menu" role="button" name="menuopen"></button>
          <div class="title-bar-title">
            <!--#include virtual="/twoyearcollege/inc/logo.inc"-->
          </div>
        </div>
        <div class="top-bar" id="sjcmenu">
          <!--#include virtual="/twoyearcollege/inc/mainmenu.inc"-->
        </div>
      </div>
    </div>


    <!--  branding container with the logo and contact info-->
    <header class="sectioncontainer branding">
      <div class="row align-middle">
        <div class="small-12 medium-6 columns logo show-for-medium">
          <div class="title">
            <!--#include virtual="/twoyearcollege/inc/logo.inc"-->
          </div>
        </div>
        <aside class="small-12 medium-6 columns show-for-mediummu applygivecontainer">
          <!--#include virtual="/twoyearcollege/inc/ctacontainerbuttons.inc"-->
        </aside>
      </div>
    </header>

    <!--  hero container with the image and form-->
    <section class="sectioncontainer hero" id="contact">
      <div class="show-for-small-onlymu heromessagecontainer">
        <div class="heromessage">
          <picture>
            <source media="(min-width: 1152px)" srcset="imgtwoyear/hero-girlstudying-1152.jpg">
            <source media="(min-width: 768px)" srcset="imgtwoyear/hero-girlstudying-768.jpg">
            <img src="imgtwoyear/hero-girlstudying-384.jpg" style="width: 100vw;" alt="programs we offer">
          </picture>
        </div>
      </div>
    </section>


    <!--    intro-->
    <div id="stickycontainment" class="row maincontentcontainer">
      <div class="small-order-2 large-order-1 small-12 large-9 columns contentcolumn">
        <section class="sectioncontainer light" id="about">
          <div class="row column">
            <h2 class="sectionheading">An innovative approach to a successful degree.
              <small>Creating a path to success.</small></h2>
            <p>Through the combination of coursework and strategic partnerships with leading companies in the community, you will leave with the confidence and passion to not only take on the jobs of today but the upcoming careers of the
              future—starting
              a new life that is no longer out of your reach. </p>

            <p>As a mission-driven institution, our faculty's main focus is to mentor our students to ensure you successfully complete the two-year program and move on to a successful career, completing a bachelor's degree at Marian University or in another four-year program.</p>

            <p>To make these dreams happen, we offer two associate degree tracks and program plug-in options.</p>

            <h2 id="ba">Associate of Business Administration</h2>
            <p>With a business degree, you can work in almost any industry in a variety of positions. Many students choose to earn an associate degree in business so they can learn business fundamentals, and a broad range of skills in accounting, finance, marketing, management, and operations.</p>
            <p>
              <a href="programs-businessadministration.aspx" class="button mariangold">Learn more about our Associate of Business Administration</a>
            </p>
            </li>
            <h2 id="la">Associate of Arts in Liberal Arts</h2>
            <p>An associate degree in liberal arts exposes you to a variety of subjects and skills that will enhance critical thinking and communication skills and provide credits that are easily transferable into a four-year institution.</p>
            <p>
              <a href="programs-liberalarts.aspx" class="button mariangold">Learn more about our Associate of Arts in Liberal Arts</a>
            </p>

            <h2 id="infotechjumplink">Information Technology Plug-In</h2>
            <p>Information technology is the life-line of every industry. Careers are in high-demand and new jobs are being developed every day. Add an information technology plug-in to your associate degree to make you more versatile, and stand out
              from the pack to your future employers.</p>
            <p>A plug-in allows you to take elective courses in computer science, work hands-on with a coding academy, or gain credit for other tech-associated experiences.</p>
            <p class="text-center"><img src="imgtwoyear/sji-puzzle.gif" alt="develop a strong work ethic"></p>


          </div>

        </section>
      </div>

      <div id="sidebar" class="small-order-1 large-order-2 small-12 large-3 columns" data-sticky-container>
        <div class="localnav sticky" data-sticky data-anchor="stickycontainment" data-margin-top="7" data-sticky-on="large">
          <p><strong>On this page:</strong></p>
          <ul data-smooth-scroll data-offset="50">
            <li><a href="#ba">Associate of Business Administration</a></li>
            <li><a href="#la">Associate of Arts in Liberal Arts</a></li>
            <li><a href="#infotechjumplink">Information Technology Plug-In</a></li>
          </ul>
        </div>
      </div>
    </div>







    <!-- rfi button and form start -->
    <!--#include virtual="/twoyearcollege/inc/rfiform.inc"-->

    <!--#include virtual="/twoyearcollege/inc/footerscripts.inc"-->

  </form>
</body>

</html>
