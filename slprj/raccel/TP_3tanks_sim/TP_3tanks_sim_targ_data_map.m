    function targMap = targDataMap(),

    ;%***********************
    ;% Create Parameter Map *
    ;%***********************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 1;
        sectIdxOffset = 0;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc paramMap
        ;%
        paramMap.nSections           = nTotSects;
        paramMap.sectIdxOffset       = sectIdxOffset;
            paramMap.sections(nTotSects) = dumSection; %prealloc
        paramMap.nTotData            = -1;

        ;%
        ;% Auto data (rtP)
        ;%
            section.nData     = 27;
            section.data(27)  = dumData; %prealloc

                    ;% rtP.S1
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.S2
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.S3
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% rtP.Sp
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 3;

                    ;% rtP.g
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 4;

                    ;% rtP.k1
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 5;

                    ;% rtP.k2
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 6;

                    ;% rtP.mu13
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 7;

                    ;% rtP.mu20
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 8;

                    ;% rtP.mu32
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 9;

                    ;% rtP.PID1_D
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 10;

                    ;% rtP.PID2_D
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 11;

                    ;% rtP.PID1_I
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 12;

                    ;% rtP.PID2_I
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 13;

                    ;% rtP.PID1_InitialConditionForFilter
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 14;

                    ;% rtP.PID2_InitialConditionForFilter
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 15;

                    ;% rtP.PID1_InitialConditionForIntegrator
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 16;

                    ;% rtP.PID2_InitialConditionForIntegrator
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 17;

                    ;% rtP.PID1_N
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 18;

                    ;% rtP.PID2_N
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 19;

                    ;% rtP.PID1_P
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 20;

                    ;% rtP.PID2_P
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 21;

                    ;% rtP.Integrator_IC
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 22;

                    ;% rtP.Integrator_IC_nctofbypav
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 23;

                    ;% rtP.Integrator_IC_fn2t5hk1b2
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 24;

                    ;% rtP.SP1_Value
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 25;

                    ;% rtP.SP2_Value
                    section.data(27).logicalSrcIdx = 26;
                    section.data(27).dtTransOffset = 26;

            nTotData = nTotData + section.nData;
            paramMap.sections(1) = section;
            clear section


            ;%
            ;% Non-auto Data (parameter)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        paramMap.nTotData = nTotData;



    ;%**************************
    ;% Create Block Output Map *
    ;%**************************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 1;
        sectIdxOffset = 0;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc sigMap
        ;%
        sigMap.nSections           = nTotSects;
        sigMap.sectIdxOffset       = sectIdxOffset;
            sigMap.sections(nTotSects) = dumSection; %prealloc
        sigMap.nTotData            = -1;

        ;%
        ;% Auto data (rtB)
        ;%
            section.nData     = 50;
            section.data(50)  = dumData; %prealloc

                    ;% rtB.pyylnyrkyk
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtB.fmrdtcysiy
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% rtB.gzvje4yheq
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% rtB.ho30ajnioy
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 3;

                    ;% rtB.oni5qfqo4q
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 4;

                    ;% rtB.aka4x4s0xm
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 5;

                    ;% rtB.nwl0ktgay5
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 6;

                    ;% rtB.ldqo4vwyfq
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 7;

                    ;% rtB.anf324wzqo
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 8;

                    ;% rtB.cd5xvvmkid
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 9;

                    ;% rtB.aktygf4nak
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 10;

                    ;% rtB.lh1rtamgwh
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 11;

                    ;% rtB.keno31gsoo
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 12;

                    ;% rtB.dxfp3apcae
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 13;

                    ;% rtB.h3txu4rfn2
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 14;

                    ;% rtB.f4zspnal5r
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 15;

                    ;% rtB.lrudrzn5eh
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 16;

                    ;% rtB.d5gtrcd41l
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 17;

                    ;% rtB.i2ubtdbpju
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 18;

                    ;% rtB.jcpfllxmgs
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 19;

                    ;% rtB.ndg5bbvt5t
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 20;

                    ;% rtB.kqg5clejgl
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 21;

                    ;% rtB.gepgmjqvmm
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 22;

                    ;% rtB.oifske3om2
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 23;

                    ;% rtB.l3cekvdxlr
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 24;

                    ;% rtB.k3aiqwltvr
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 25;

                    ;% rtB.lfoknfwtyg
                    section.data(27).logicalSrcIdx = 26;
                    section.data(27).dtTransOffset = 26;

                    ;% rtB.mowvetndkm
                    section.data(28).logicalSrcIdx = 27;
                    section.data(28).dtTransOffset = 27;

                    ;% rtB.dckkxlj4az
                    section.data(29).logicalSrcIdx = 28;
                    section.data(29).dtTransOffset = 28;

                    ;% rtB.kpowoosouy
                    section.data(30).logicalSrcIdx = 29;
                    section.data(30).dtTransOffset = 29;

                    ;% rtB.lsawee0sba
                    section.data(31).logicalSrcIdx = 30;
                    section.data(31).dtTransOffset = 30;

                    ;% rtB.fx1u3t3o3i
                    section.data(32).logicalSrcIdx = 31;
                    section.data(32).dtTransOffset = 31;

                    ;% rtB.mqzdj3zbcj
                    section.data(33).logicalSrcIdx = 32;
                    section.data(33).dtTransOffset = 32;

                    ;% rtB.d5tmbkoarw
                    section.data(34).logicalSrcIdx = 33;
                    section.data(34).dtTransOffset = 33;

                    ;% rtB.jrevm41lxg
                    section.data(35).logicalSrcIdx = 34;
                    section.data(35).dtTransOffset = 34;

                    ;% rtB.ndeq0grkrm
                    section.data(36).logicalSrcIdx = 35;
                    section.data(36).dtTransOffset = 35;

                    ;% rtB.l3es4ln0w5
                    section.data(37).logicalSrcIdx = 36;
                    section.data(37).dtTransOffset = 36;

                    ;% rtB.nk000jat4c
                    section.data(38).logicalSrcIdx = 37;
                    section.data(38).dtTransOffset = 37;

                    ;% rtB.aktocjtkco
                    section.data(39).logicalSrcIdx = 38;
                    section.data(39).dtTransOffset = 38;

                    ;% rtB.dkgc1qgtrh
                    section.data(40).logicalSrcIdx = 39;
                    section.data(40).dtTransOffset = 39;

                    ;% rtB.drc5u4dikf
                    section.data(41).logicalSrcIdx = 40;
                    section.data(41).dtTransOffset = 40;

                    ;% rtB.ny1xywtzn1
                    section.data(42).logicalSrcIdx = 41;
                    section.data(42).dtTransOffset = 41;

                    ;% rtB.lhc3o3c552
                    section.data(43).logicalSrcIdx = 42;
                    section.data(43).dtTransOffset = 42;

                    ;% rtB.frc20fcpgj
                    section.data(44).logicalSrcIdx = 43;
                    section.data(44).dtTransOffset = 43;

                    ;% rtB.prgwjhcjyd
                    section.data(45).logicalSrcIdx = 44;
                    section.data(45).dtTransOffset = 44;

                    ;% rtB.hkeghjoqcd
                    section.data(46).logicalSrcIdx = 45;
                    section.data(46).dtTransOffset = 45;

                    ;% rtB.ponnfk2reb
                    section.data(47).logicalSrcIdx = 46;
                    section.data(47).dtTransOffset = 46;

                    ;% rtB.i5v2w35adz
                    section.data(48).logicalSrcIdx = 47;
                    section.data(48).dtTransOffset = 47;

                    ;% rtB.mkd5pkiwbq
                    section.data(49).logicalSrcIdx = 48;
                    section.data(49).dtTransOffset = 48;

                    ;% rtB.owaggtb3jh
                    section.data(50).logicalSrcIdx = 49;
                    section.data(50).dtTransOffset = 49;

            nTotData = nTotData + section.nData;
            sigMap.sections(1) = section;
            clear section


            ;%
            ;% Non-auto Data (signal)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        sigMap.nTotData = nTotData;



    ;%*******************
    ;% Create DWork Map *
    ;%*******************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 3;
        sectIdxOffset = 1;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc dworkMap
        ;%
        dworkMap.nSections           = nTotSects;
        dworkMap.sectIdxOffset       = sectIdxOffset;
            dworkMap.sections(nTotSects) = dumSection; %prealloc
        dworkMap.nTotData            = -1;

        ;%
        ;% Auto data (rtDW)
        ;%
            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.h5vm5r025g.LoggedData
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(1) = section;
            clear section

            section.nData     = 6;
            section.data(6)  = dumData; %prealloc

                    ;% rtDW.kryzqeen4d
                    section.data(1).logicalSrcIdx = 1;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.ck4nryb5ej
                    section.data(2).logicalSrcIdx = 2;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.m5ds05o3uu
                    section.data(3).logicalSrcIdx = 3;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.ltm5x5tfmn
                    section.data(4).logicalSrcIdx = 4;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.bdm1pgxghb
                    section.data(5).logicalSrcIdx = 5;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.jmoyubmnmq
                    section.data(6).logicalSrcIdx = 6;
                    section.data(6).dtTransOffset = 5;

            nTotData = nTotData + section.nData;
            dworkMap.sections(2) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% rtDW.gzq4y3twyi
                    section.data(1).logicalSrcIdx = 7;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.iqeu5zjhk3
                    section.data(2).logicalSrcIdx = 8;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.dnginylpjf
                    section.data(3).logicalSrcIdx = 9;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            dworkMap.sections(3) = section;
            clear section


            ;%
            ;% Non-auto Data (dwork)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        dworkMap.nTotData = nTotData;



    ;%
    ;% Add individual maps to base struct.
    ;%

    targMap.paramMap  = paramMap;
    targMap.signalMap = sigMap;
    targMap.dworkMap  = dworkMap;

    ;%
    ;% Add checksums to base struct.
    ;%


    targMap.checksum0 = 4088835168;
    targMap.checksum1 = 706497940;
    targMap.checksum2 = 710590238;
    targMap.checksum3 = 3535080702;

