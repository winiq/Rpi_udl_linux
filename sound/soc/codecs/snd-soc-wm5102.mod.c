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
	{ 0x7ccf0af7, "arizona_request_irq" },
	{ 0x3e93312, "arizona_lhpf4_mode" },
	{ 0xf9874b17, "arizona_set_fll" },
	{ 0x49ba01b3, "__pm_runtime_idle" },
	{ 0xd30e5847, "arizona_free_spk_irqs" },
	{ 0x90fe3f61, "arizona_lhpf_coeff_put" },
	{ 0x7d41810e, "arizona_init_vol_limit" },
	{ 0x76685e8a, "__pm_runtime_disable" },
	{ 0x33a515ec, "wm_adsp_early_event" },
	{ 0xd90bb8ee, "snd_soc_dapm_get_enum_double" },
	{ 0xe5b9736c, "arizona_init_dai" },
	{ 0x269fdf77, "regmap_update_bits_base" },
	{ 0xd16b6555, "arizona_in_ev" },
	{ 0x7809c8fa, "snd_soc_component_disable_pin" },
	{ 0xb2484f0f, "arizona_jack_set_jack" },
	{ 0xfd925cd7, "dapm_regulator_event" },
	{ 0x51d11cb5, "arizona_lhpf1_mode" },
	{ 0x729a5ef3, "arizona_mixer_values" },
	{ 0x6baf8827, "wm_adsp_compr_set_params" },
	{ 0x3e133aeb, "regmap_write_async" },
	{ 0x971d705b, "arizona_dvfs_down" },
	{ 0x3be36b28, "wm_adsp_compr_trigger" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xdf41c580, "wm_adsp_fw_get" },
	{ 0xcbc26637, "snd_soc_put_volsw" },
	{ 0xf93042ef, "regmap_read" },
	{ 0x4892918d, "arizona_init_dvfs" },
	{ 0xf3362132, "snd_soc_get_volsw" },
	{ 0xa8fabcb1, "wm_adsp2_init" },
	{ 0xde164253, "__platform_driver_register" },
	{ 0x684ae4f4, "wm_adsp2_component_remove" },
	{ 0x6d425738, "snd_soc_info_enum_double" },
	{ 0xf258b5ba, "wm_adsp2_preloader_get" },
	{ 0xb311d262, "wm_adsp_compr_free" },
	{ 0xd2ed42d1, "arizona_dvfs_up" },
	{ 0xb666752e, "wm_adsp2_preloader_put" },
	{ 0xf5dd1fa3, "snd_soc_put_volsw_range" },
	{ 0xe4b9288e, "wm_adsp2_component_probe" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0x10c4c117, "wm_adsp_compr_open" },
	{ 0x894458f3, "wm_adsp_fw_enum" },
	{ 0xc9c29637, "arizona_mixer_tlv" },
	{ 0xff102f67, "arizona_out_ev" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe534fc3, "arizona_adsp2_rate_controls" },
	{ 0x951c792b, "arizona_clk_ev" },
	{ 0xa6bc220e, "snd_soc_add_component_controls" },
	{ 0x8fbe3c74, "arizona_jack_codec_dev_probe" },
	{ 0xa1c4ee9a, "snd_soc_info_volsw_range" },
	{ 0xa0214777, "snd_soc_bytes_info" },
	{ 0x35b59785, "arizona_init_spk" },
	{ 0x74f3374b, "arizona_hp_ev" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x6cbf3f91, "snd_soc_get_volsw_range" },
	{ 0x89e195a1, "wm_adsp_compr_copy" },
	{ 0x3d00bad6, "wm_adsp_event" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xa249e377, "arizona_simple_dai_ops" },
	{ 0x4d0a856f, "wm_adsp_compr_get_caps" },
	{ 0x2e8b1826, "arizona_free_irq" },
	{ 0x5d8b460f, "snd_soc_info_volsw" },
	{ 0x6dece8b6, "arizona_set_irq_wake" },
	{ 0xc64e0d9c, "arizona_lhpf3_mode" },
	{ 0x71ec8642, "arizona_out_vi_ramp" },
	{ 0x2420386f, "arizona_isrc_fsl" },
	{ 0xcd94b273, "snd_soc_component_init_regmap" },
	{ 0x265ab1c2, "arizona_in_vi_ramp" },
	{ 0x54ab7bec, "snd_soc_get_enum_double" },
	{ 0x261452c7, "arizona_dai_ops" },
	{ 0x7f26f273, "arizona_mixer_texts" },
	{ 0xc066c60e, "arizona_init_fll" },
	{ 0x98889996, "pm_runtime_enable" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1e2a8440, "devm_snd_soc_register_component" },
	{ 0x6cc41614, "arizona_of_get_audio_pdata" },
	{ 0x910efd07, "arizona_set_fll_refclk" },
	{ 0x19c97e34, "arizona_init_gpio" },
	{ 0x5b251298, "arizona_dvfs_sysclk_ev" },
	{ 0x103be782, "arizona_out_vd_ramp" },
	{ 0x478dd002, "arizona_in_vd_ramp" },
	{ 0xcdc95bde, "snd_soc_put_enum_double" },
	{ 0xe6ce95ae, "arizona_eq_coeff_put" },
	{ 0xd86e115e, "wm_adsp2_remove" },
	{ 0xc692721b, "arizona_jack_codec_dev_remove" },
	{ 0xa265b279, "snd_soc_bytes_get" },
	{ 0x31d82da2, "arizona_set_sysclk" },
	{ 0x816c2d4d, "arizona_ng_hold" },
	{ 0xaa199739, "snd_soc_new_compress" },
	{ 0xb8566d08, "snd_soc_bytes_put" },
	{ 0xca4bb064, "wm_adsp_compr_handle_irq" },
	{ 0x81c1d19d, "platform_driver_unregister" },
	{ 0xaaabaab3, "snd_soc_bytes_info_ext" },
	{ 0xcd792b7d, "wm_adsp2_set_dspclk" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x18d983c6, "arizona_init_spk_irqs" },
	{ 0xde000cc2, "arizona_init_common" },
	{ 0x94987648, "wm_adsp_compr_pointer" },
	{ 0x9b7f0514, "wm_adsp_fw_put" },
	{ 0x89df9ed6, "snd_soc_dapm_put_enum_double" },
	{ 0x60390628, "arizona_lhpf2_mode" },
};

MODULE_INFO(depends, "arizona,snd-soc-arizona,snd-soc-wm-adsp,snd-soc-core");


MODULE_INFO(srcversion, "E0B4BA090E90059B54AD208");
