#pragma once


// CPartDlg dialog

class CPartDlg : public CDialog
{
	DECLARE_DYNAMIC(CPartDlg)

public:
	CPartDlg(CWnd* pParent = NULL);   // standard constructor
	virtual ~CPartDlg();
	PtrCorePart ppart;
	PtrCore pcore;
	IMainUI *MainUI;
	void SetIcons(HICON iJumpIcon);
	CString sArtPath;
	CBMPMDLButton mdlbmp;
	CBMPMDLButton mdlbmp2;
	CBMPMDLButton mdlbmp3;
	// Dialog Data
	enum { IDD = IDD_PARTDLG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	BOOL OnInitDialog(void);
	void OnClickedOk(void);
	void OnClickedCancel(void);
	afx_msg void OnBnClickedUsem0();
	afx_msg void OnBnClickedBprojid();
	afx_msg void OnLbnSelchangeUmlist();
	afx_msg void OnBnClickedBsucc();
	afx_msg void OnBnClickedBeditdescr();
};
