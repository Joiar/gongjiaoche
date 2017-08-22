@me = [field:global.autoindex/];
                        if(@me % 3 == 0)
                    @me ='<li><dl>'

                            <dd>
                                <a href="[field:arcurl/]" target="_blank"><img src="[field:picname/]" /></a>
                                <h3><a href="[field:arcurl/]" target="_blank">[field:title/]</a></h3>
                                <p>[field:description function="cn_substr(@me,400)"/]...</p>
                            </dd>

                            @me = [field:global.autoindex/];
                            if(@me % 3 == 0)
                        @me='</dl></li>';