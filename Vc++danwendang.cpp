//单文档的打印与菜单操作
//新建——项目——MFC——单文档——完成
//打印内容
View.spp
void CMy20210506View::OnDraw(CDC* pDC)//后侧的指针需要修改
pDC->TextOut(50,90,_T("Hello World"));//打印一行文字
CFont newFont;     // 新字体   
CFont *pOldFont;   // 选择新字体之前的字体
CFont *pfntOld=(CFont*)pDC ->SelectObject(&m_font);    //设置字体
pDC->SetTextColor(RGB(255,0,0));        //设置字体颜色
newFont.CreatePointFont(180, _T("微软雅黑")); // 创建一种新的字体  
pOldFont=(CFont*)pDC->SelectObject(&newFont);    
pDC->TextOut(m_nX,m_nY,m_strText);

//窗口和菜单
//资源视图——Menu——选择需要的菜单——使用&x可以作为快捷键——添加事件处理程序
//资源视图——Dialog——新建文本框——所有变量
//Menu里设置打开对话框
CFontDialog dlgFont;           //通用字体对话框
        if(dlgFont.DoModal() == IDOK)
        {
               LOGFONT LogFnt;
               m_font.DeleteObject();   
                // 使用选定字体的LOGFONT创建新的字体   
               dlgFont.GetCurrentFont(&LogFnt);        
               m_font.CreateFontIndirectW(&LogFnt); 
               m_TextColor = dlgFont.GetColor();       
               RedrawWindow();
        }
//换一个方式在Menu里定义
CTextDialog tdlg;           //定义一个对话框对象
    if(tdlg.DoModal()==IDOK)    //显示对话框
    {  
        m_nX=tdlg.m_nX;
        m_nY=tdlg.m_nY;
        m_strText=tdlg.m_strText;         
    }
     Invalidate(FALSE);
//显示在View里面的时候必须调用Menu的函数
pDC->TextOut(m_nX,m_nY,m_strText);


