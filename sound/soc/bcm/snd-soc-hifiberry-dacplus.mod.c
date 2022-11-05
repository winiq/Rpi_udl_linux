#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x460c70a6, "module_layout" },
	{ 0xf9a482f9, "msleep" },
	{ 0x57a9e072, "devm_snd_soc_register_card" },
	{ 0x3c2b68f7, "of_changeset_apply" },
	{ 0x696f2b63, "of_changeset_init" },
	{ 0xc08f6533, "of_parse_phandle" },
	{ 0xce8bdf9e, "snd_soc_add_card_controls" },
	{ 0xcce69d19, "i2c_put_adapter" },
	{ 0x5dbd6b7c, "snd_soc_component_update_bits" },
	{ 0xac437f7b, "snd_interval_ratnum" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xde164253, "__platform_driver_register" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x6d425738, "snd_soc_info_enum_double" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0xe536ac87, "of_find_property" },
	{ 0xff3959af, "i2c_smbus_read_byte" },
	{ 0x52418596, "of_changeset_action" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xb2351ad2, "devm_kfree" },
	{ 0x49500711, "snd_soc_dai_set_bclk_ratio" },
	{ 0xae102ed8, "_dev_info" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x43519f78, "of_find_compatible_node" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x644ac6b8, "devm_gpiod_get_optional" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0xfd389cbc, "gpiod_set_value_cansleep" },
	{ 0xcdfcd18e, "snd_soc_component_read" },
	{ 0x923c82d, "snd_soc_limit_volume" },
	{ 0x81c1d19d, "platform_driver_unregister" },
	{ 0x39e0287c, "of_property_read_variable_u32_array" },
	{ 0x2796b1a5, "i2c_get_adapter" },
	{ 0xc6f3cca5, "devm_kmalloc" },
};

MODULE_INFO(depends, "snd-soc-core,snd-pcm");

MODULE_ALIAS("of:N*T*Chifiberry,hifiberry-dacplus");
MODULE_ALIAS("of:N*T*Chifiberry,hifiberry-dacplusC*");

MODULE_INFO(srcversion, "A4CCC32BDDFFACD3A44521C");
