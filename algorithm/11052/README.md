# [카드 구매하기](https://acmicpc.net/problem/11052)

## 문제

요즘 민규네 동네에서는 스타트링크에서 만든 PS카드를 모으는 것이 유행이다.

PS카드는 PS(Problem Solving)분야에서 유명한 사람들의 아이디와 얼굴이 적혀있는 카드이다. 각각의 카드에는 등급을 나타내는 색이 칠해져 있고, 다음과 같이 8가지가 있다.

- 전설카드
- 레드카드
- 오렌지카드
- 퍼플카드
- 블루카드
- 청록카드
- 그린카드
- 그레이카드

카드는 카드팩의 형태로만 구매할 수 있고, 카드팩의 종류는 카드 1개가 포함된 카드팩, 카드 2개가 포함된 카드팩, ... 카드 N개가 포함된 카드팩과 같이 총 N가지가 존재한다.

민규는 카드의 개수가 적은 팩이더라도 가격이 비싸면 높은 등급의 카드가 많이 들어있을 것이라는 미신을 믿고 있다. 따라서, 민규는 돈을 최대한 많이 지불해서 카드 N개 구매하려고 한다. 카드가 i개 포함된 카드팩의
가격은 Pi원이다.

예를 들어, 카드팩이 총 4가지 종류가 있고, P1 = 1, P2 = 5, P3 = 6, P4 = 7인 경우에 민규가 카드 4개를 갖기 위해 지불해야 하는 금액의 최댓값은 10원이다. 2개 들어있는 카드팩을 2번
사면 된다.

P1 = 5, P2 = 2, P3 = 8, P4 = 10인 경우에는 카드가 1개 들어있는 카드팩을 4번 사면 20원이고, 이 경우가 민규가 지불해야 하는 금액의 최댓값이다.

마지막으로, P1 = 3, P2 = 5, P3 = 15, P4 = 16인 경우에는 3개 들어있는 카드팩과 1개 들어있는 카드팩을 구매해 18원을 지불하는 것이 최댓값이다.

카드 팩의 가격이 주어졌을 때, N개의 카드를 구매하기 위해 민규가 지불해야 하는 금액의 최댓값을 구하는 프로그램을 작성하시오. N개보다 많은 개수의 카드를 산 다음, 나머지 카드를 버려서 N개를 만드는 것은
불가능하다. 즉, 구매한 카드팩에 포함되어 있는 카드 개수의 합은 N과 같아야 한다.

## 입력

첫째 줄에 민규가 구매하려고 하는 카드의 개수 N이 주어진다. (1 ≤ N ≤ 1,000)

둘째 줄에는 Pi가 P1부터 PN까지 순서대로 주어진다. (1 ≤ Pi ≤ 10,000)

## 출력

첫째 줄에 민규가 카드 N개를 갖기 위해 지불해야 하는 금액의 최댓값을 출력한다.


<div class="col-md-6">
						<section id="sampleoutput1">
						<div class="headline">
						<h2>예제 출력 1
							<button type="button" class="btn btn-link copy-button" style="padding: 0px;" data-clipboard-target="#sample-output-1">복사</button>
						</h2>
						</div>
						<pre class="sampledata" id="sample-output-1">10
</pre>
						</section>
					</div>
									</div>
				</div>
								<div class="col-md-12">
				<div class="row">
					<div class="col-md-6">
						<section id="sampleinput2">
						<div class="headline">
						<h2>예제 입력 2
							<button type="button" class="btn btn-link copy-button" style="padding: 0px;" data-clipboard-target="#sample-input-2">복사</button>
						</h2>
						</div>
						<pre class="sampledata" id="sample-input-2">5
10 9 8 7 6
</pre>
						</section>
					</div>
					<div class="col-md-6">
						<section id="sampleoutput2">
						<div class="headline">
						<h2>예제 출력 2
							<button type="button" class="btn btn-link copy-button" style="padding: 0px;" data-clipboard-target="#sample-output-2">복사</button>
						</h2>
						</div>
						<pre class="sampledata" id="sample-output-2">50
</pre>
						</section>
					</div>
									</div>
				</div>
								<div class="col-md-12">
				<div class="row">
					<div class="col-md-6">
						<section id="sampleinput3">
						<div class="headline">
						<h2>예제 입력 3
							<button type="button" class="btn btn-link copy-button" style="padding: 0px;" data-clipboard-target="#sample-input-3">복사</button>
						</h2>
						</div>
						<pre class="sampledata" id="sample-input-3">10
1 1 2 3 5 8 13 21 34 55
</pre>
						</section>
					</div>
					<div class="col-md-6">
						<section id="sampleoutput3">
						<div class="headline">
						<h2>예제 출력 3
							<button type="button" class="btn btn-link copy-button" style="padding: 0px;" data-clipboard-target="#sample-output-3">복사</button>
						</h2>
						</div>
						<pre class="sampledata" id="sample-output-3">55
</pre>
						</section>
					</div>
									</div>
				</div>
								<div class="col-md-12">
				<div class="row">
					<div class="col-md-6">
						<section id="sampleinput4">
						<div class="headline">
						<h2>예제 입력 4
							<button type="button" class="btn btn-link copy-button" style="padding: 0px;" data-clipboard-target="#sample-input-4">복사</button>
						</h2>
						</div>
						<pre class="sampledata" id="sample-input-4">10
5 10 11 12 13 30 35 40 45 47
</pre>
						</section>
					</div>
					<div class="col-md-6">
						<section id="sampleoutput4">
						<div class="headline">
						<h2>예제 출력 4
							<button type="button" class="btn btn-link copy-button" style="padding: 0px;" data-clipboard-target="#sample-output-4">복사</button>
						</h2>
						</div>
						<pre class="sampledata" id="sample-output-4">50
</pre>
						</section>
					</div>
									</div>
				</div>
								<div class="col-md-12">
				<div class="row">
					<div class="col-md-6">
						<section id="sampleinput5">
						<div class="headline">
						<h2>예제 입력 5
							<button type="button" class="btn btn-link copy-button" style="padding: 0px;" data-clipboard-target="#sample-input-5">복사</button>
						</h2>
						</div>
						<pre class="sampledata" id="sample-input-5">4
5 2 8 10
</pre>
						</section>
					</div>
					<div class="col-md-6">
						<section id="sampleoutput5">
						<div class="headline">
						<h2>예제 출력 5
							<button type="button" class="btn btn-link copy-button" style="padding: 0px;" data-clipboard-target="#sample-output-5">복사</button>
						</h2>
						</div>
						<pre class="sampledata" id="sample-output-5">20
</pre>
						</section>
					</div>
									</div>
				</div>
								<div class="col-md-12">
				<div class="row">
					<div class="col-md-6">
						<section id="sampleinput6">
						<div class="headline">
						<h2>예제 입력 6
							<button type="button" class="btn btn-link copy-button" style="padding: 0px;" data-clipboard-target="#sample-input-6">복사</button>
						</h2>
						</div>
						<pre class="sampledata" id="sample-input-6">4
3 5 15 16
</pre>
						</section>
					</div>
					<div class="col-md-6">
						<section id="sampleoutput6">
						<div class="headline">
						<h2>예제 출력 6
							<button type="button" class="btn btn-link copy-button" style="padding: 0px;" data-clipboard-target="#sample-output-6">복사</button>
						</h2>
						</div>
						<pre class="sampledata" id="sample-output-6">18
</pre>
						</section>
					</div>
									</div>
				</div>
										<div class="col-md-12">
				<section id="hint" class="problem-section">
				<div class="headline">
				<h2>힌트</h2>
				</div>
				<div id="problem_hint" class="problem-text">
				<p><img alt="" src="https://upload.acmicpc.net/ffb63d22-5554-46ca-8e8b-7f3482d518b7/-/resize/600x/" style="width: 300px; height: 409px;"><img alt="" src="https://upload.acmicpc.net/d7c63a92-8f10-4546-bbdd-208242610cd5/-/resize/600x/" style="width: 300px; height: 409px;"><img alt="" src="https://upload.acmicpc.net/564c40e9-47d1-48fa-bf74-d494f4e0a2da/-/resize/600x/" style="width: 300px; height: 409px;"><img alt="" src="https://upload.acmicpc.net/6558125f-de39-4f5a-821b-a28367ead81d/-/resize/600x/" style="width: 300px; height: 409px;"><img alt="" src="https://upload.acmicpc.net/0e1ddc25-a3b4-441c-9461-4bb97a1d5b4b/-/resize/600x/" style="width: 300px; height: 409px;"><img alt="" src="https://upload.acmicpc.net/9a88e5aa-c6de-4b53-bd64-ef7de69dd1ec/-/resize/600x/" style="width: 300px; height: 409px;"><img alt="" src="https://upload.acmicpc.net/b626cbbd-81ac-43d5-8ebc-ddb990f1e333/-/resize/600x/" style="width: 300px; height: 409px;"></p>

				</div>
				</section>
			</div>