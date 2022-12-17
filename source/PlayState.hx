package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.util.FlxColor;
import haxe.Exception;

var click:Bool = false;
var num:Int = 0;

class PlayState extends FlxState
{
	override public function create()
	{
		super.create();

		var text:FlxText = new flixel.text.FlxText(0, 0, 0, Std.string(num), 64);
		text.screenCenter();
		add(text);
	}

	override public function update(elapsed:Float)
	{
		if (FlxG.mouse.justReleased) {
			num++;

			if (num >= 12) {
				throw Exception;
			}

			var cover = new FlxSprite();
			cover.makeGraphic(200, 200, FlxColor.BLACK);
			cover.screenCenter();
			add(cover);
			
			var text:FlxText = new flixel.text.FlxText(0, 0, 0, Std.string(num), 64);
			text.screenCenter();
			add(text);
		}

		super.update(elapsed);
	}
}
